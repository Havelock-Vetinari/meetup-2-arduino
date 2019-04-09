#include <Arduino.h>
#include <unity.h>
#include <face_count.h>

void test_face_count_to_delay_min(void) {
    TEST_ASSERT_EQUAL(5000, face_count_to_delay(0));
}

void test_face_count_to_delay_max(void) {
    TEST_ASSERT_EQUAL(500, face_count_to_delay(10));
}

void test_face_count_to_delay_over(void) {
    TEST_ASSERT_EQUAL(500, face_count_to_delay(11));
}

void test_face_count_to_delay_over2(void) {
    TEST_ASSERT_EQUAL(500, face_count_to_delay(20));
}



void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);

    UNITY_BEGIN();    // IMPORTANT LINE!
}

void loop() {

    RUN_TEST(test_face_count_to_delay_min);
    RUN_TEST(test_face_count_to_delay_max);
    RUN_TEST(test_face_count_to_delay_over);
    RUN_TEST(test_face_count_to_delay_over2);

    UNITY_END();


}