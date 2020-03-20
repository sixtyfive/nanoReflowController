#ifndef LID_H
#define LID_H

#define PIN_LID      5

#define MD_OFF     0
#define MD_WAITING 1
#define MD_HEATING 2
#define MD_HOLDING 3
#define MD_COOLING 4
uint8_t device_mode = MD_OFF;

#define LD_CLOSED false
#define LD_OPEN   true
bool lid_state = LD_CLOSED;
bool lid_moving = false; // not moving
double lid_moving_since = 0; // not moving

void openLid() {
  if (lid_state == LD_CLOSED && !lid_moving) {
    pinAsOutput(PIN_LID);

    lid_moving_since = millis();
    lid_moving = true;

    digitalLow(PIN_LID);
    device_mode = MD_COOLING;
    lid_state = !lid_state;
  }
}

void closeLid() {
  if (lid_state == LD_OPEN && !lid_moving) {

    lid_moving_since = millis();
    lid_moving = true;

    digitalHigh(PIN_LID);
    device_mode = MD_HOLDING;
    lid_state = !lid_state;
  }
}

void resetLidMovingTime() {
  if ((millis() - lid_moving_since) > 10000) {
    lid_moving_since = 0;
    lid_moving = false;
  }
}
#endif
