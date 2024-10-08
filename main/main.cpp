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

#define TAG "main"

extern "C" void app_main() {
  RotaryEncoder dial(ROTARY_PIN1, ROTARY_PIN2, -250, 250);

  while(1) {
    ESP_LOGI(TAG, "Count: %d", dial.getCount());
    vTaskDelay(pdMS_TO_TICKS(100));
  }
}
