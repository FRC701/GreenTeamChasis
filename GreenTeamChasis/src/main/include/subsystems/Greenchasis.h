// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include <ctre/phoenix.h>
#include <frc/drive/DifferentialDrive.h>

class DriveTrain : public frc2::SubstemBase {
  public:
  DriveTrain(WPI_TalonFX& ID1, WPI_TalonF& ID2, WPI_TalonFX ID3, WPI_TalonFX& ID4);

  void Periodic() override;

  void TankDrive(double left, double right);

WPI_TalonFX& mFrontR;
WPI_TalonFX& mFrontL;
WPI_TalonFX& mBackR;
WPI_TalonFX& mBackL;
frc::DifferentialDrive mDrive;
};