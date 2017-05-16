#ifndef DriveTrain_H
#define DriveTrain_H

#include <AnalogInput.h>
#include <Commands/Subsystem.h>
#include <RobotDrive.h>
#include <Talon.h>

namespace frc {
class Joystick;
}

class DriveTrain: public frc::Subsystem {
public:
	DriveTrain();
	void InitDefaultCommand() override;
	void Drive(double left, double right);
	void Drive(frc::Joystick* joy);

private:
	frc::Talon left { 1 };
	frc::Talon right { 0 };
	frc::RobotDrive drive { left, right };
};

#endif
