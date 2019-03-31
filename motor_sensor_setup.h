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
	return digitalRead(2);
}
void down() {
	return digitalRead(3);
}
void up() {
	return digitalRead(1);
}
