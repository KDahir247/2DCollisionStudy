//
// Created by kdahi on 2020-08-28.
//


#include <gtest/gtest.h>
#include <Primitives/Vector2D.h>
#include <ConstVar.h>
#include "../TestUtility.h"

TEST(VECTOR2D, CONSTRUCTOR){
    Vector2D val(4,2);
    EXPECT_FLOAT_EQ(val.x, 4);
    EXPECT_FLOAT_EQ(val.y, 2);
}

TEST(Vector2D, COPYCONSTRUCTOR){

    Vector2D val(4, 2);
    Vector2D copyV(val);

    EXPECT_FLOAT_EQ(copyV.x, val.x);
    EXPECT_FLOAT_EQ(copyV.y, val.y);
}

TEST(VECTOR2D, LENGTH){
    Vector2D val {4, 20};
    EXPECT_FLOAT_EQ(val.magnitude(), sqrtf(val.x * val.x + val.y * val.y));
}

TEST(VECTOR2D, SQRLENGTH){
    Vector2D val {5.5f,12.01f};
    EXPECT_FLOAT_EQ(val.sqrMagnitude(), val.x * val.x + val.y * val.y);
}

TEST(VECTOR2D, NORMALIZATION){
    Vector2D val {5,20.5f};
    Vector2D temp{val};
    EXPECT_FLOAT_EQ(val.getUnit().x, val.x / val.magnitude());
    EXPECT_FLOAT_EQ(val.getUnit().y, val.y / val.magnitude());
    EXPECT_FLOAT_EQ(val.x , 5);
    EXPECT_FLOAT_EQ(val.y, 20.5f);
    val.normalize();
    EXPECT_FLOAT_EQ(val.x, temp.x / temp.magnitude());
    EXPECT_FLOAT_EQ(val.y, temp.y / temp.magnitude());
    EXPECT_FALSE(val.x == 5);
    EXPECT_FALSE(val.y == 20.5f);
}

TEST(VECTOR2D, GETPERPENDICULAR){
    Vector2D val {-4.0f, 5.0f};
    Vector2D PerpendicularLeft = Vector2D::PerpendicularLeft(val);
    Vector2D PerpendicularRight = Vector2D::PerpendicularRight(val);

    EXPECT_FLOAT_EQ(PerpendicularRight.x, val.y);
    EXPECT_FLOAT_EQ(PerpendicularRight.y, -val.x);

    EXPECT_FLOAT_EQ(PerpendicularLeft.x, -val.y);
    EXPECT_FLOAT_EQ(PerpendicularLeft.y, val.x);
}

TEST(VECTOR2D,ADDITION){
    Vector2D val1{5,1};
    Vector2D val {-2, -4};
    Vector2D reslt = val1 + val;
    EXPECT_FLOAT_EQ(reslt.x, val1.x + val.x);
    EXPECT_FLOAT_EQ(reslt.y, val1.y + val.y);
}

TEST(VECTOR2D, SUBTRACTION){
    Vector2D val1{5,1};
    Vector2D val{-2,-4};
    Vector2D reslt = val1 - val;
    EXPECT_FLOAT_EQ(reslt.x, val1.x - val.x);
    EXPECT_FLOAT_EQ(reslt.y, val1.y - val.y);
}

TEST(VECTOR2D, DOTPRODUCT){
    Vector2D val1{2,5};
    Vector2D val {-1, 3};
    EXPECT_FLOAT_EQ(Vector2D::DotProduct(val,val1), 13);
}

TEST(VECTOR2D, CROSSPRODUCT){
    Vector2D val1{2,10};
    Vector2D val{-2,13};

    EXPECT_FLOAT_EQ(Vector2D::CrossProduct(val1,val),46);
}

TEST(VECTOR2D, PROJECTION){

    Vector2D val{2,5};
    Vector2D val1{-1,3};
    EXPECT_FLOAT_EQ(Vector2D::ProjectionTime(val, val1), 1.3f);

    Point2D a = Vector2D::GetProjectionPoint({0,0},val1, Vector2D::ProjectionTime(val,val1));
}

TEST(VECTOR2D, ROTATE)
{
    Vector2D p {0,1};
    EXPECT_TRUE(CloseEnough(Vector2D::Rotate(PI,p).y, -1));
    EXPECT_TRUE(CloseEnough(Vector2D::Rotate(PI,p).x, 0));

}
