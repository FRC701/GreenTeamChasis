// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Greenchassis.h"
#include <frc/smartdashboard/SmartDashboard.h>

Greenchasis::Greenchasis(WPI_TalonFX& ID1, WPI_TalonFX& ID2, WPI_TalonFX& ID3, WPI_TalonFX& ID4):
    mFrontR(ID1),
          mFrontL(ID2),
          mBackR(ID3),
          mBackL(ID4),
          mDrive(mFrontR,mFrontL)
{
    mBackR.Follow(mFrontR);
    mBackL.Follow(mFrontL);

}


// This method will be called once per scheduler run
void Greenchasis::Periodic() {

    frc::SmartDashboard::PutNumber("SpeedRight(FeetPerSecond", *mFrontR.GetSelectedSensorVelocity()*());
    frc::SmartDashboard::PutNumber("SpeedLeft(FeetPerSecond)", *mFrontL.GetSelectedSensorVelocity()*(/12));

}

void Greenchassis::GreenDrive(double left, double right)
{
   Drive.GreenDrive(left, right);
}   