#include <Arduino.h>
 /**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Kunal Gupta
 * @date 2026-02-20
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */
 // TODO 1: Define FSR analog pin (Use A0)
 #define FSR_PIN A0

 // TODO 2: Create variable to store sensor reading
 int fsrValue = 0;

 // Optional: Define threshold
 const int PRESSURE_THRESHOLD = 200;

void setup() {

    // TODO 3: Initialize Serial communication
    Serial.begin(9600);

    // TODO 4: Print system initialization message
    Serial.println("=================================");
    Serial.println("   FSR Force Measurement System  ");
    Serial.println("   System Initialized Successfully");
    Serial.println("=================================");
}

void loop() {

    // TODO 5:
    // Read analog value from FSR

    // TODO 6:
    // Print raw ADC value

    // TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)

    // TODO 8:
    // Print pressure detection message

    // TODO 9:
    // Add delay (500ms or 1 second)
}
