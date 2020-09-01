//
// Created by kdahi on 2020-08-29.
//
#ifndef MATH_STATICINTERSECTION_H
#define MATH_STATICINTERSECTION_H
#include "../Primitives/Point2D.h"
#include "../Primitives/Line2D.h"
#include "../Primitives/HLine2D.h"
#include "../Primitives/VLine2D.h"
class Collision{
public:
     static Point2D LineLineIntersection(const Line2D&, const Line2D&);
     static Point2D LineHLineIntersection(const Line2D&, const HLine2D&);
     static Point2D LineVLineIntersection(const Line2D&, const VLine2D&);
     static Point2D Reflection(const Point2D&, const Vector2D&, float, const Vector2D&);
};

#endif //MATH_STATICINTERSECTION_H
