//
// Created by kdahi on 2020-08-29.
//
#pragma once
#ifndef MATH_POINT2D_H
#define MATH_POINT2D_H
#include <cmath>
struct Point2D{
    float x{};
    float y{};

    inline static float Distance(const Point2D&, const Point2D&);
    inline static float SqrDistance(const Point2D&, const Point2D&);

    inline Point2D();
    inline Point2D(float,float);
    inline Point2D(const Point2D&);

};

#include "Point2D.inl"

#endif //MATH_POINT2D_H
