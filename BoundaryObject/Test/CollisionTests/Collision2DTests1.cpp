//
// Created by kdahi on 2020-08-29.
//

#include <gtest/gtest.h>
#include <Intersections/StaticCollision.h>
#include <iostream>
TEST(COLLISION2D, LINELINECOLLISION){
    Point2D p1(-4,2);
    Vector2D v1{1,-2};

    Point2D p2(-1, 3);
    Vector2D v2{-2, 3};
    Line2D line(p1, v1);
    Line2D line1(p2, v2);
    Point2D collisionPoint = Collision::LineLineCollision(line, line1);
    EXPECT_FLOAT_EQ(collisionPoint.x, -15);
    EXPECT_FLOAT_EQ(collisionPoint.y, 24);

    
    Point2D p3(-4,5);
    Vector2D v3(2,-2);

    Point2D p4(1,6);
    Vector2D v4(0,-2);
    Line2D line3(p3, v3);
    Line2D line4(p4, v4);

    Point2D collisionPoint1 = Collision::LineLineCollision(line3, line4);
    EXPECT_FLOAT_EQ(collisionPoint1.x, 1);
    EXPECT_FLOAT_EQ(collisionPoint1.y, 0);
}