### OLD PROGRAM
void LatController::LoadSteerCalibrationTable(const LatControllerConf &lat_controller_conf){
  const auto &steer_torque_table = lat_controller_conf.steer_calibration_table() ;
  AINFO << "Steer_torque calibration table is loaded,the size of calibration is" 
      << steer_torque_table.steer_calibration_size() ;
  Interpolation2D::DataType xyz ;
  for (const auto &calibration : steer_torque_table.steer_calibration()){
    xyz.push_back(std::make_tuple(calibration.speed(),
                                  calibration.angle(),
                                  calibration.torque())) ;
  }
  steer_torque_interpolation_.reset(new Interpolation2D) ;
  CHECK(steer_torque_interpolation_->Init(xyz))<<"Fail to init steer_torque_interpolation"  ;
}