//
// Created by kdahi on 2020-08-29.
//

#pragma once
#ifndef MATH_LINE2D_H
#define MATH_LINE2D_H

#include <cmath>
#include "Point2D.h"
#include "Vector2D.h"

struct Line2D{
    Point2D point{0,0};
    Vector2D direction{0,0};

   inline Line2D(const Point2D&, const Vector2D&);
   inline Line2D(float,float,float,float);
   inline Line2D(Point2D,Point2D);
};

#include "Line2D.inl"

#endif //MATH_LINE2D_H
