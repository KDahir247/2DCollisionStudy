//
// Created by kdahi on 2020-08-30.
//
#include <gtest/gtest.h>
#include <Primitives/VLine2D.h>

TEST(VLINE2D, CONSTRUCTOR){
    VLine2D vLine2D(5);
    EXPECT_FLOAT_EQ(vLine2D.x, 5);
    Point2D point2D(1,2);
    VLine2D vLine2D1(point2D);
    EXPECT_FLOAT_EQ(vLine2D1.x, 1);
}