#ifndef OI_H_
#define OI_H_

#include <Buttons/JoystickButton.h>
#include <Joystick.h>

class OI {
public:
	OI();
	frc::Joystick* GetJoystick();

private:
	frc::Joystick joy { 2 };

	frc::JoystickButton d_up { &joy, 4 };
	frc::JoystickButton d_right { &joy, 2 };
	frc::JoystickButton d_down { &joy, 1 };
	frc::JoystickButton d_left { &joy, 3 };
	frc::JoystickButton left_b { &joy, 5 };
	frc::JoystickButton right_b { &joy, 6 };
};

#endif  // OI_H
