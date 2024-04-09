#include "main.h" 

//Shooter Motors
pros::Motor MiddleShoot(15);
pros::Motor TopShoot(16);
pros::Motor BotShoot(12);

//Intake Motors
pros::Motor Suck(14, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor SuckClose(17, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);

//Pneumatics
//doing this instead of using ADIDigitalOut gives access to
//get_value(), making turning this into a 1 button toggle a lot easier
pros::ADIPort Flaps('a', pros::E_ADI_DIGITAL_OUT);
pros::ADIDigitalOut Deploy('b');