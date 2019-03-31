
#include "main.h"
#include "motor_sensor_setup.h"


/*

 Made by TARAN MAYER
 Program for Day 1 Group 8's 'Pick and Place' robot
 Mr. Edwards PLTW class at https://www.cusd80.com/Page/87874

 */
bool runTask = false;

//Runs the conveyor belt such that a cube falls onto the loading area
void runTrack() {
	track(20);//runs track
	while (!loader) {}
	track(0);//runs track
}

//Opens the claw, releasing the cube into the dump zone
void openClaw() {
	claw(63);
	wait(750);
	claw(0);
}

//Closes the claw, grabbing on to the cube
void closeClaw() {
	claw(-63);
	wait(750);
	claw(0);
}

//Moves the arm down, such that the claw is in postion the grab the cube
void moveArmDown() {
	lift(127);//moves arm down
	while (!down) {}
	lift(0); //moves arm down
}

//Moves the arm up, such that the claw can release the cube into the dump zone
void moveArmUp() {
	lift(-127);//moves arm down
	while (!up) {}
	lift(0);
}

//The following function puts all of the above functions in order
void operatorControl() {
	while (true) {
		if (digitalRead(4) == 1) {
			runTask = true;
		}
		while (runTask = true) {
			/*
				THIS PROGRAM REQUIRES THE CLAW TO START IN THE OPEN POSITION
			*/

			runTrack(); //moves cube onto loading dock

			moveArmDown(); //moves claw arm down

			closeClaw(); //closes claw

			moveArmUp(); //brings cube up

			openClaw(); //releases cube
			if (digitalRead(5) == 1) {
				runTask = false;
			}
		}
	
	}
}
 