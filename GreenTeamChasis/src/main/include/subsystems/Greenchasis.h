// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include <coroutine>/Pheonix.h>
#include <frc/drive/DifferentialDrive.h>

/**
 * An example command.
 *
 * <p>Note that this extends CommandHelper, rather extending CommandBase
 * directly; this is crucially important, or else the decorator functions in
 * Command will *not* work!
 */
class Greenchasis
    : public frc2::CommandHelper<frc2::CommandBase, Greenchasis> {
 public:

 Greenchasis(WPI_TalonFX& ID1, WPI_TalonFX& ID2, WPI_TalonFX& ID3, WPI_TalonFX& ID4);

  Greenchasis();

  void Initialize() override;

  void Execute() override;

  void End(bool interrupted) override;

  bool IsFinished() override;

double motorSpeed(double MotorSpeed);
double motorSpeed2(double MotorSpeed);
double motorSpeed3(double MotorSpeed);
double motorSpeed4(double MotorSpeed);
double motorRun(double MotorSpeed);

private:

WPI_TalonFX& mFrontR;
WPI_TalonFX& mFrontL;
WPI_TalonFX& mBackR;
WPI_TalonFX& mBackL;  
frc::DifferentialDrive mDrive;

};