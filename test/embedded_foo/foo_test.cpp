#include <Arduino.h>
#include <unity.h>
#include <face_count.h>

void true_test(void) {
    TEST_ASSERT_EQUAL(true, true);
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);

    UNITY_BEGIN();    // IMPORTANT LINE!
}

void loop() {

    RUN_TEST(true_test);

    UNITY_END();


}