//
// Created by kdahi on 2020-09-01.
//

#ifndef MATH_COLLISIONTEST_H
#define MATH_COLLISIONTEST_H

#include "Zone.h"
#include "../Primitives/HLine2D.h"
#include "../Primitives/VLine2D.h"
#include "../Primitives/Point2D.h"
#include "../Primitives/Vector2D.h"
#include "../Primitives/Line2D.h"
class CollisionTest {

public:
    static Zone HorizontalLineTest(const HLine2D&, const Point2D&);
    static Zone VerticalLineTest(const VLine2D&, const Point2D&);
    static Zone VectorTest(const Vector2D&,const Vector2D&);
    static Zone PointTest(const Vector2D&, const Point2D&);

    static Point2D LineIntersectionTest(const Line2D&, const Point2D&, const Vector2D&);
    static Point2D HorizontalLineIntersectionTest(const HLine2D&, const Point2D&, const Vector2D&);
    static Point2D VerticalLineIntersectionTest(const VLine2D&, const Point2D&, const Vector2D&);
};


#endif //MATH_COLLISIONTEST_H
