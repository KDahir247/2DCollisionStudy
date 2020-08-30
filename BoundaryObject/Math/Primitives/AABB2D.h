//
// Created by kdahi on 2020-08-30.
//

#ifndef TEST_AABB2D_H
#define TEST_AABB2D_H
#include "Vector2D.h"
struct AABB2D{
    Point2D position{};
    Vector2D displacement{};

    inline AABB2D();
    inline AABB2D(const Point2D&, const Vector2D&);
    inline AABB2D(const AABB2D&);
};
#include "AABB2D.inl"
#endif //TEST_AABB2D_H
