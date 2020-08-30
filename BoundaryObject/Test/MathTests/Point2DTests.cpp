#if true
//
// Created by kdahi on 2020-08-29.
//

#include <gtest/gtest.h>
#include <Primitives/Point2D.h>

TEST(POINT2D, CONSTRUCTOR){
    Point2D p{1,2};
    EXPECT_FLOAT_EQ(p.x, 1);
    EXPECT_FLOAT_EQ(p.y, 2);
}

TEST(POINT2D, COPYCONSTRUCTOR){
    Point2D pCopy{1,3};
    Point2D p{pCopy};
    EXPECT_FLOAT_EQ(p.x, pCopy.x);
    EXPECT_FLOAT_EQ(p.y, pCopy.y);
}

TEST(POINT2D, DISTANCE){
    Point2D o {0,0};
    Point2D e {5 , 3};
    EXPECT_FLOAT_EQ(Point2D::SqrDistance(o,e), 34);

    EXPECT_FLOAT_EQ(Point2D::Distance(o,e),5.8309518948453004708741528775456f);
    EXPECT_FLOAT_EQ(Point2D::SqrDistance(o,e), 34);
}
#endif