#include <iostream>
#include <gflags/gflags.h>

#ifndef MDC_TEST


using std::cout;
using std::endl;

DEFINE_int32(a,3, "parameter a");
DEFINE_int32(b,4, "parameter b");

static bool ValidateInt(const char *flagname,gflags::int32 value) {
    if (value >= 0 && value < 7) {
        return true;
    }
    cout << "Invalid value for --" << flagname << ":" << value;
    return false;
}
static const bool port_dummyInta = gflags::RegisterFlagValidator(&FLAGS_a, &ValidateInt);

int main(int argc, char **argv) {
    google::SetUsageMessage("usage : Option[name] \n"
                            "--a      parameter a \n"
                            "--b      parameter b");
    google::SetVersionString("version 1.0");
    google::ParseCommandLineFlags(&argc, &argv, true);

    google::CommandLineFlagInfo info;

    if (GetCommandLineFlagInfo("a", &info) && info.is_default &&
        GetCommandLineFlagInfo("b", &info) && info.is_default) {
        cout << "To run this program,you must set the two parameters" << google::ProgramUsage() << endl;
    } else {
        if (GetCommandLineFlagInfo("a", &info) && !info.is_default &&
            GetCommandLineFlagInfo("b", &info) && !info.is_default) {
            cout  << FLAGS_a + FLAGS_b << endl;
        }
        else {
            cout << "To run this program,you must set the two parameters" << google::ProgramUsage() << endl;
        }
    }
}

#endif /* MDC_TEST */
