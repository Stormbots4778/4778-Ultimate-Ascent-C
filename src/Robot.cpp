#include "Robot.h"

#include <iostream>

std::shared_ptr<DriveTrain> Robot::drivetrain = std::make_shared<DriveTrain>();
std::unique_ptr<OI> Robot::oi = std::make_unique<OI>();

void Robot::RobotInit() {
	frc::SmartDashboard::PutData(drivetrain.get());
}

void Robot::TeleopInit() {
	std::cout << "Starting Teleop" << std::endl;
}

void Robot::TeleopPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Robot)
