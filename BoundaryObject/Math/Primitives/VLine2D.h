//
// Created by kdahi on 2020-08-30.
//

#ifndef MATH_VLINE2D_H
#define MATH_VLINE2D_H
#include "Point2D.h"
struct VLine2D{

    float x{};
    inline VLine2D(float);
    inline  VLine2D(const Point2D&);
};

#include "VLine2D.inl"

#endif //MATH_VLINE2D_H
