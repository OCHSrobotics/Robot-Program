#include "main.h"
  void grabberheight() {
    int joystick; // variable for the joystick used
    int grabber; // variable for the grabber joystick
    while(1) {
      joystick = 1; // joystick used
      grabber = joystickGetAnalog(joystick,3); // sets axis 3 as the axis to move the grabber up and down
      motorSet(4,grabber); // sets motor
    if (joystickGetDigital(joystick, 8, JOY_UP) == 1) {  // these two lines set the up button on the 8 button axis
      motorSet(4, 127);}                                // to move the height motor at full speed up
    if (joystickGetDigital(joystick, 8, JOY_DOWN) == 1) { // these two lines set the down button on the 8 button axis
      motorSet(4, -127);}                                // to move the height motor at full speed down
        delay(20);
}
}
