//
// Created by kdahi on 2020-08-30.
//

#include <gtest/gtest.h>
#include <Primitives/Segment2D.h>

TEST(SEGMENT2D, CONSTRUCTOR)
{
    Segment2D segment2DFloats(5, 2, 3, 5);
    EXPECT_FLOAT_EQ(segment2DFloats.position.x, 5);
    EXPECT_FLOAT_EQ(segment2DFloats.position.y, 2);
    EXPECT_FLOAT_EQ(segment2DFloats.displacement.x, 3 - 5);
    EXPECT_FLOAT_EQ(segment2DFloats.displacement.y, 5 - 2);

    EXPECT_FLOAT_EQ(segment2DFloats.direction.x, segment2DFloats.displacement.getUnit().x);
    EXPECT_FLOAT_EQ(segment2DFloats.direction.y, segment2DFloats.displacement.getUnit().y);

    Point2D A2D(3,1);
    Vector2D v(2, -3);
    Segment2D segment2D(A2D, v);

    EXPECT_FLOAT_EQ(segment2D.position.x, A2D.x);
    EXPECT_FLOAT_EQ(segment2D.position.y, A2D.y);

    EXPECT_FLOAT_EQ(segment2D.displacement.x, v.x);
    EXPECT_FLOAT_EQ(segment2D.displacement.y, v.y);

    EXPECT_FLOAT_EQ(segment2D.direction.x, v.getUnit().x);
    EXPECT_FLOAT_EQ(segment2D.direction.y, v.getUnit().y);

    Vector2D displacement(1,2);
    Segment2D segment2D1(A2D, displacement.x, displacement.y);

    EXPECT_FLOAT_EQ(segment2D1.position.x, A2D.x);
    EXPECT_FLOAT_EQ(segment2D1.position.y, A2D.y);
    EXPECT_FLOAT_EQ(segment2D1.displacement.x, displacement.x);
    EXPECT_FLOAT_EQ(segment2D1.displacement.y, displacement.y);
    EXPECT_FLOAT_EQ(segment2D1.direction.x, displacement.getUnit().x);
    EXPECT_FLOAT_EQ(segment2D1.direction.y, displacement.getUnit().y);


    Point2D startPoint(1,5);
    Point2D endPoint(-3,3);
    Segment2D segment2DPoints(startPoint, endPoint);
    EXPECT_FLOAT_EQ(segment2DPoints.position.x, startPoint.x);
    EXPECT_FLOAT_EQ(segment2DPoints.position.y, startPoint.y);
    EXPECT_FLOAT_EQ(segment2DPoints.displacement.x, endPoint.x - startPoint.x);
    EXPECT_FLOAT_EQ(segment2DPoints.displacement.y, endPoint.y - startPoint.y);
    EXPECT_FLOAT_EQ(segment2DPoints.direction.x, segment2DPoints.displacement.getUnit().x);
    EXPECT_FLOAT_EQ(segment2DPoints.direction.y, segment2DPoints.displacement.getUnit().y);


    Segment2D segment2DCopy(segment2D);

    EXPECT_FLOAT_EQ(segment2DCopy.position.x, segment2D.position.x);
    EXPECT_FLOAT_EQ(segment2DCopy.position.y, segment2D.position.y);
    EXPECT_FLOAT_EQ(segment2DCopy.displacement.x, segment2D.displacement.x);
    EXPECT_FLOAT_EQ(segment2DCopy.displacement.y, segment2D.displacement.y);
    EXPECT_FLOAT_EQ(segment2DCopy.direction.x, segment2D.direction.x);
    EXPECT_FLOAT_EQ(segment2DCopy.direction.y, segment2D.direction.y);
}