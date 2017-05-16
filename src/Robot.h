#ifndef ROBOT_H_
#define ROBOT_H_

#include <memory>

#include <Commands/Command.h>
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>

#include "OI.h"
#include "Subsystems/DriveTrain.h"

class Robot: public frc::IterativeRobot {
public:
	static std::shared_ptr<DriveTrain> drivetrain;
	static std::unique_ptr<OI> oi;

private:
	frc::LiveWindow* lw = frc::LiveWindow::GetInstance();

	void RobotInit() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;
};

#endif  // ROBOT_H_
