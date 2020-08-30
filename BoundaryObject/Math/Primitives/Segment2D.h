//
// Created by kdahi on 2020-08-30.
//

#ifndef MATH_SEGMENT2D_H
#define MATH_SEGMENT2D_H
#include "Vector2D.h"
struct Segment2D{

    Point2D position;
    Vector2D displacement;
    Vector2D direction;

    inline Segment2D(const Segment2D&);
    inline Segment2D(const Point2D &p,const Vector2D&v);
    inline Segment2D(const Point2D&, float, float);
    inline Segment2D(const Point2D&, const Point2D&);
    inline Segment2D(float,float ,float ,float );

};

#include "Segment2D.inl"
#endif //MATH_SEGMENT2D_H
