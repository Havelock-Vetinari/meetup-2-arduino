#include <Arduino.h>
#include <face_count.h>
#include <Ticker.h>

#define BLINK_PIN 13

bool led_state = LOW;

void blink();

Ticker blinker(blink, 500, 0, MILLIS);

void blink() {
    digitalWrite(BLINK_PIN, led_state);
    led_state = !led_state;
}

void setup() {
    Serial.begin(9600);
    pinMode(BLINK_PIN, OUTPUT);
    digitalWrite(BLINK_PIN, LOW);
    led_state = LOW;
    blinker.start();

}

void loop() {
    blinker.update();
    if (Serial.available() != 0) {
        int blink_time;
        int faces = Serial.read();
        blink_time = face_count_to_delay(faces);
        blinker.interval(blink_time);
    }
}