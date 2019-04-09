//
// Created by Julian Szulc on 2019-04-09.
//
#include <Arduino.h>

#ifndef FACE_BLINK_FACE_COUNT_H
#define FACE_BLINK_FACE_COUNT_H


int face_count_to_delay(int faces) {
    return (5000 / constrain(map(faces, 0, 10, 1, 10),1, 10));
}

#endif //FACE_BLINK_FACE_COUNT_H
