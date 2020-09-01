//
// Created by kdahi on 2020-09-01.
//

#include <CollisionTest/CollisionTest.h>
#include <gtest/gtest.h>

TEST(ZONETEST2D, HLINETEST){

    HLine2D hLine2D{3};
    Point2D point2D{3,5};
    EXPECT_TRUE(CollisionTest::HorizontalLineTest(hLine2D,point2D) == AboveZone);

}

TEST(ZONETEST2D, VLINETEST){
    VLine2D vLine2D{5};
    Point2D point2D{2, 10};
    EXPECT_TRUE(CollisionTest::VerticalLineTest(vLine2D, point2D) == LeftZone);
}

TEST(ZONETEST2D, VECTORTEST){
    Vector2D V1{3,-3};
    Vector2D V2{2,-3};
    EXPECT_TRUE(CollisionTest::VectorTest(V1, V2) == LeftZone);

}

TEST(ZONETEST2D, POINTTEST){
    Vector2D V1 {1,0};
    Point2D point2D {3, -5};
    EXPECT_TRUE(CollisionTest::PointTest(V1, point2D) == AheadZone);
}