//
// Created by kdahi on 2020-08-30.
//

#include <gtest/gtest.h>
#include <Primitives/Ray2D.h>

TEST(RAY2D, CONSTRUCTOR){

    Ray2D ray2DEmpty;

    EXPECT_FLOAT_EQ(ray2DEmpty.point.x,0);
    EXPECT_FLOAT_EQ(ray2DEmpty.point.y, 0);
    EXPECT_FLOAT_EQ(ray2DEmpty.direction.x, 1);
    EXPECT_FLOAT_EQ(ray2DEmpty.direction.y, 0);

    Point2D rayPoint(5,2);
    Vector2D rayDirection(1,-1);
    Ray2D ray2D(rayPoint, rayDirection);

    EXPECT_FLOAT_EQ(ray2D.point.x, rayPoint.x);
    EXPECT_FLOAT_EQ(ray2D.point.y, rayPoint.y);
    EXPECT_FLOAT_EQ(ray2D.direction.x, rayDirection.x);
    EXPECT_FLOAT_EQ(ray2D.direction.y, rayDirection.y);

    Ray2D ray2DCopy(ray2D);

    EXPECT_FLOAT_EQ(ray2DCopy.point.x, ray2D.point.x);
    EXPECT_FLOAT_EQ(ray2DCopy.point.y, ray2D.point.y);
    EXPECT_FLOAT_EQ(ray2DCopy.direction.x, ray2D.direction.x);
    EXPECT_FLOAT_EQ(ray2DCopy.direction.y, ray2D.direction.y);

    Point2D rayStart(2,-3);
    Point2D rayEnd(5,4);

    Ray2D ray2DPoint(rayStart, rayEnd);

    EXPECT_FLOAT_EQ(ray2DPoint.point.x, rayStart.x);
    EXPECT_FLOAT_EQ(ray2DPoint.point.y, rayStart.y);
    float x = rayEnd.x - rayStart.x;
    float y = rayEnd.y - rayStart.y;
    float unitDirection = sqrtf(x * x + y * y);
    EXPECT_FLOAT_EQ(ray2DPoint.direction.x, (rayEnd.x - rayStart.x) / unitDirection);
    EXPECT_FLOAT_EQ(ray2DPoint.direction.y, (rayEnd.y - rayStart.y) / unitDirection);
}