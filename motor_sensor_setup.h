#include "main.h"
void track(int power) {
	motorSet(2, power);
}
void lift(int power) {
	motorSet(3, power);
}
void claw(int power) {
	motorSet(4, power);
}
void loader() {
	if (digitalRead(2)==0)
	{
		return false;
	}
	if (digitalRead(2) == 0)
	{
		return true;
	}
}
void down() {
	if (digitalRead(3) == 0)
	{
		return false;
	}
	if (digitalRead(2) == 0)
	{
		return true;
	}
}
void up() {
	if (digitalRead(1) == 0)
	{
		return false;
	}
	if (digitalRead(2) == 0)
	{
		return true;
	}
}
