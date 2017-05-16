#include <Commands/TankDriveWithJoystick.h>
#include "DriveTrain.h"

#include <Joystick.h>

DriveTrain::DriveTrain() :

frc::Subsystem("DriveTrain") {}

void DriveTrain::InitDefaultCommand() {
	SetDefaultCommand(new TankDriveWithJoystick());
}

void DriveTrain::Drive(double left, double right) {
	drive.TankDrive(left, right);
}

void DriveTrain::Drive(frc::Joystick* joy) {
	Drive(-joy->GetY(), -joy->GetRawAxis(4));
}
