//
// Created by kdahi on 2020-08-29.
//

#include <Primitives/Line2D.h>
#include <gtest/gtest.h>
#include <Intersections/StaticIntersection.h>

TEST(LINE2D, CONSTRUCTOR){

    Point2D point2D(5,2);
    Point2D point2D1(1,1);

    Vector2D a(0,1);
    Line2D line2D(point2D, a);
    EXPECT_FLOAT_EQ(line2D.point.x, 5);
    EXPECT_FLOAT_EQ(line2D.point.y, 2);
    EXPECT_FLOAT_EQ(line2D.direction.x, a.x);
    EXPECT_FLOAT_EQ(line2D.direction.y, a.y);


    Line2D line2D1(point2D, point2D1);
    EXPECT_FLOAT_EQ(line2D1.point.x, point2D.x);
    EXPECT_FLOAT_EQ(line2D1.point.y, point2D.y);
    float mag = sqrtf(powf(point2D1.x - point2D.x, 2) + powf(point2D1.y - point2D.y, 2));
    EXPECT_FLOAT_EQ(line2D1.direction.x,  point2D1.x / mag);
    EXPECT_FLOAT_EQ(line2D1.direction.y,  point2D1.y / mag);

    Line2D line2D2(1,2,3,4);

    EXPECT_TRUE(line2D2.point.x == 1 &&
                line2D2.point.y == 2 &&
                line2D2.direction.x == 3 &&
                line2D2.direction.y == 4);

}