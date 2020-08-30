//
// Created by kdahi on 2020-08-29.
//
#ifndef MATH_STATICCOLLISION_H
#define MATH_STATICCOLLISION_H
#include "../Primitives/Point2D.h"
#include "../Primitives/Line2D.h"
struct Collision{
     static Point2D LineLineCollision(const Line2D& A, const Line2D& B);
};

#endif //MATH_STATICCOLLISION_H
