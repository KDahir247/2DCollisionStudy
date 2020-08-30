//
// Created by kdahi on 2020-08-30.
//

#ifndef TEST_RAY2D_H
#define TEST_RAY2D_H
#include "Vector2D.h"

struct Ray2D{
    Point2D point{};
    Vector2D direction{};

    inline Ray2D();
    inline Ray2D(const Ray2D&);
    inline Ray2D(const Point2D&,const Vector2D&);
    inline Ray2D(const Point2D&, const Point2D&);
};

#include "Ray2D.inl"
#endif //TEST_RAY2D_H
