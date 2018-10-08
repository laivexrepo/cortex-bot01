#include "main.h"    // includes API.h and other headers
#include "lift.h"    // include all the lift specific definitions

void liftMove(int speed) {
  motorSet(LIFT_LEFT_M, -speed);
  motorSet(LIFT_RIGHT_M, speed);  // left and right need to go opposite directions

}
