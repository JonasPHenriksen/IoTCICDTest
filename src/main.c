
#include "wifi.h"

#include <util/delay.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <Arduino.h>

#include "tcp_command_receiver.h"
#include "smart_pot.h"

int main() {
  wifi_init();
  smartPotInit();

  // wifi_command_join_AP("JOIIIN IOT", "bxww1482");
  // tcp_listen("192.168.43.221", 23); // Listen for incoming messages

  while(1) {
    if (buttons_1_pressed() && buttons_2_pressed()) {
      playBuzzer(SONG_LOW_WATER_LEVEL);
      continue;
    }
    if (buttons_1_pressed()) {
      // uint8_t message = "Hello from Arduino over LAN\n";
      // wifi_command_TCP_transmit(message, strlen(message));
      // _delay_ms(2000);
      playBuzzer(SONG_MOISTURE);
    }
    if (buttons_2_pressed()) {
      // tone_play_mario();
      playBuzzer(SONG_WATERING);
    }
    if (buttons_3_pressed()) {
      playBuzzer(SONG_ERROR);
      // uint16_t distance_value = hc_sr04_takeMeasurement();
      // uint8_t moisture_value = moisture_read();
      // char buffer[30];
      // sprintf(buffer, "moisture: %d, distance: %d\n", moisture_value, distance_value);
      // wifi_command_TCP_transmit(buffer, strlen(buffer));
    }
  }
  return 0;
}