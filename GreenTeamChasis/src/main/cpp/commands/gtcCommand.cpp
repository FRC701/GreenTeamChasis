// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/gtcCommand.h"

gtcCommand::gtcCommand(GreenChassis&, GreenChassis
                       std::function<double()>left,
                       std::function<double()>right)
                       mGreenChassis(GrenChassis), mLeft(left), mRight(right)
{
  addRequirements(&mGreenChassis); 
}

// Called when the command is initially scheduled.
void gtcCommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void gtcCommand::Execute() {
  mGreenChassis.gtcCommand(mLeft(), mRight());
}

// Called once the command ends or is interrupted.
void gtcCommand::End(bool interrupted) {}

// Returns true when the command should end.
bool gtcCommand::IsFinished() {
  return false;
}
