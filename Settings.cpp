#include "Arduino.h"
#include "Settings.h"

Settings c1_configs = {
    // pins
    3, // right horizontal
    5, // right vertical
    6, // left vertical
    9, // left horizontal
    10, // left track
    11, // right track
    13, // analog signal pin
    255, // motor max
    0, // motor min
    128, // motor neutral
    4, // number of channels to read
    100, // threshold
    0.75, // motor power modifier
    // controller calibration
    {  // min, mid, max
      {}, // right h
      {}, // right v
      {1128, 1500, 1885, false}, // left v
      {1060, 1450, 1795, false}, // left h
      {1100, 1450, 1800, false}, // analog signal pin
    },
    true, // debug mode
    12, // I2C arduino
    13, // I2C raspberry pi
    10, // debounce rate
};
