#pragma once
#include <stdint.h>
#define MOISTURE_OUTPUT_PIN PC0

void moisture_init();
uint16_t moisture_read();