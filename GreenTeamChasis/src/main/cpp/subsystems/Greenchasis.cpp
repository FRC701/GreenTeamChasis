// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Greenchasis.h"

Greenchasis::Greenchasis() {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void Greenchasis::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void Greenchasis::Execute() {}

// Called once the command ends or is interrupted.
void Greenchasis::End(bool interrupted) {}

// Returns true when the command should end.
bool Greenchasis::IsFinished() {
  return false;
}
