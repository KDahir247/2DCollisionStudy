//
// Created by kdahi on 2020-08-29.
//

#ifndef TEST_HLINE2D_H
#define TEST_HLINE2D_H
#include "Point2D.h"
struct HLine2D{

float y{};

inline HLine2D(float);
inline HLine2D(const Point2D&);

};

#include "HLine2D.inl"

#endif //TEST_HLINE2D_H
