//
// Created by kdahi on 2020-08-30.
//

#include <gtest/gtest.h>
#include "Primitives/AABB2D.h"

TEST(AABB2D, CONSTRUCTOR){

AABB2D aabb2D;
EXPECT_FLOAT_EQ(aabb2D.position.x, 0);
EXPECT_FLOAT_EQ(aabb2D.position.y, 0);
EXPECT_FLOAT_EQ(aabb2D.displacement.x, 1);
EXPECT_FLOAT_EQ(aabb2D.displacement.y, -1);

Point2D position{3,-2};
Vector2D displacement {-2, 1};
AABB2D aabb2DVal(position, displacement);

EXPECT_FLOAT_EQ(aabb2DVal.position.x, position.x);
EXPECT_FLOAT_EQ(aabb2DVal.position.y, position.y);
EXPECT_FLOAT_EQ(aabb2DVal.displacement.x, displacement.x);
EXPECT_FLOAT_EQ(aabb2DVal.displacement.y, displacement.y);

AABB2D aabb2DCopy(aabb2DVal);
EXPECT_FLOAT_EQ(aabb2DCopy.position.x, aabb2DVal.position.x);
EXPECT_FLOAT_EQ(aabb2DCopy.position.y, aabb2DVal.position.y);
EXPECT_FLOAT_EQ(aabb2DCopy.displacement.x, aabb2DVal.displacement.x);
EXPECT_FLOAT_EQ(aabb2DCopy.displacement.y, aabb2DVal.displacement.y);
}