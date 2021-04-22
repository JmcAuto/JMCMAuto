#!/usr/bin/env python
# Copyright 2019 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""A script to convert Bazel build systems to CMakeLists.txt.

See README.md for more information.
"""

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function

import sys
import textwrap

def StripColons(deps):
  return map(lambda x: x[1:], deps)

def IsSourceFile(name):
  return name.endswith(".c") or name.endswith(".cc")

class BuildFileFunctions(object):
  def __init__(self, converter):
    self.converter = converter

  def _add_deps(self, kwargs, keyword=""):
    if "deps" not in kwargs:
      return
    self.converter.toplevel += "target_link_libraries(%s%s\n  %s)\n" % (
        kwargs["name"],
        keyword,
        "\n  ".join(StripColons(kwargs["deps"]))
    )

  def load(self, *args):
    pass

  def cc_library(self, **kwargs):
    if kwargs["name"] == "amalgamation" or kwargs["name"] == "upbc_generator":
      return
    files = kwargs.get("srcs", []) + kwargs.get("hdrs", [])

    if filter(IsSourceFile, files):
      # Has sources, make this a normal library.
      self.converter.toplevel += "add_library(%s\n  %s)\n" % (
          kwargs["name"],
          "\n  ".join(files)
      )
      self._add_deps(kwargs)
    else:
      # Header-only library, have to do a couple things differently.
      # For some info, see:
      #  http://mariobadr.com/creating-a-header-only-library-with-cmake.html
      self.converter.toplevel += "add_library(%s INTERFACE)\n" % (
          kwargs["name"]
      )
      self._add_deps(kwargs, " INTERFACE")

  def cc_binary(self, **kwargs):
    pass

  def cc_test(self, **kwargs):
    # Disable this until we properly support upb_proto_library().
    # self.converter.toplevel += "add_executable(%s\n  %s)\n" % (
    #     kwargs["name"],
    #     "\n  ".join(kwargs["srcs"])
    # )
    # self.converter.toplevel += "add_test(NAME %s COMMAND %s)\n" % (
    #     kwargs["name"],
    #     kwargs["name"],
    # )

    # if "data" in kwargs:
    #   for data_dep in kwargs["data"]:
    #     self.converter.toplevel += textwrap.dedent("""\
    #       add_custom_command(
    #           TARGET %s POST_BUILD
    #           COMMAND ${CMAKE_COMMAND} -E copy
    #                   ${CMAKE_SOURCE_DIR}/%s
    #                   ${CMAKE_CURRENT_BINARY_DIR}/%s)\n""" % (
    #       kwargs["name"], data_dep, data_dep
    #     ))

    # self._add_deps(kwargs)
    pass

  def py_library(self, **kwargs):
    pass

  def py_binary(self, **kwargs):
    pass

  def lua_cclibrary(self, **kwargs):
    pass

  def lua_library(self, **kwargs):
    pass

  def lua_binary(self, **kwargs):
    pass

  def lua_test(self, **kwargs):
    pass

  def sh_test(self, **kwargs):
    pass

  def make_shell_script(self, **kwargs):
    pass

  def exports_files(self, files, **kwargs):
    pass

  def proto_library(self, **kwargs):
    pass

  def generated_file_staleness_test(self, **kwargs):
    pass

  def upb_amalgamation(self, **kwargs):
    pass

  def upb_proto_library(self, **kwargs):
    pass

  def upb_proto_reflection_library(self, **kwargs):
    pass

  def genrule(self, **kwargs):
    pass

  def config_setting(self, **kwargs):
    pass

  def select(self, arg_dict):
    return []

  def glob(self, *args):
    return []

  def licenses(self, *args):
    pass

  def map_dep(self, arg):
    return arg


class WorkspaceFileFunctions(object):
  def __init__(self, converter):
    self.converter = converter

  def load(self, *args):
    pass

  def workspace(self, **kwargs):
    self.converter.prelude += "project(%s)\n" % (kwargs["name"])

  def http_archive(self, **kwargs):
    pass

  def git_repository(self, **kwargs):
    pass


class Converter(object):
  def __init__(self):
    self.prelude = ""
    self.toplevel = ""
    self.if_lua = ""

  def convert(self):
    return self.template % {
        "prelude": converter.prelude,
        "toplevel": converter.toplevel,
    }

  template = textwrap.dedent("""\
    include_directories(${PROJECT_SOURCE_DIR})
    include_directories(${CMAKE_CURRENT_BINARY_DIR})

    %(toplevel)s

  """)

data = {}
converter = Converter()

def GetDict(obj):
  ret = {}
  for k in dir(obj):
    if not k.startswith("_"):
      ret[k] = getattr(obj, k);
  return ret

globs = GetDict(converter)

execfile("WORKSPACE", GetDict(WorkspaceFileFunctions(converter)))
execfile("BUILD", GetDict(BuildFileFunctions(converter)))

with open(sys.argv[1], "w") as f:
  f.write(converter.convert())
