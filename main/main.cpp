#include <iostream>
#include <string>
#include <math.h>

#include "RotaryEncoder.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"

#define ROTARY_PIN1 GPIO_NUM_26
#define ROTARY_PIN2 GPIO_NUM_25

extern "C" void app_main() {
  RotaryEncoder speedDial(ROTARY_PIN1, ROTARY_PIN2);
}
