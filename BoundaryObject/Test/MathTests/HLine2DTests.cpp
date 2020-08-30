//
// Created by kdahi on 2020-08-29.
//

#include <gtest/gtest.h>
#include <Primitives/HLine2D.h>


TEST(HLINE2D, CONSTRUCTOR){
    HLine2D hLine2D(2);
    EXPECT_FLOAT_EQ(hLine2D.y, 2);

    Point2D point2D(3,1);
    HLine2D hLine2D1(point2D);
    EXPECT_FLOAT_EQ(hLine2D1.y, 1);
}
