//
// Created by kdahi on 2020-09-01.
//

#include "CollisionTest.h"

Zone CollisionTest::HorizontalLineTest(const HLine2D& hLine2D, const Point2D& point2D) {
    Vector2D displacement { point2D.x, point2D.y - hLine2D.y};
    if (displacement.y  > 0)
        return AboveZone;
    else if(displacement.y < 0)
        return BelowZone;
    else
        return OnZone;
}

Zone CollisionTest::VerticalLineTest(const VLine2D& vLine2D, const Point2D& point2D) {
    Vector2D displacement{point2D.x - vLine2D.x, point2D.y};

    if (displacement.x < 0)
        return LeftZone;
    else if(displacement.x > 0)
        return RightZone;
    else
        return OnZone;
}

Zone CollisionTest::VectorTest(const Vector2D& V1, const Vector2D& V2) {
    float perpendicularProduct = V1.x * V2.y - V1.y * V2.x;
    if (perpendicularProduct < 0)
        return LeftZone;
    else if (perpendicularProduct > 0)
        return RightZone;
    else
    return OnZone;
}

Zone CollisionTest::PointTest(const Vector2D& vector2D, const Point2D& point2D) {
    Vector2D displacement = {point2D.x - vector2D.x, point2D.y - vector2D.y};
    float projectionTime = vector2D.x * displacement.x + vector2D.y * displacement.y / vector2D.x * vector2D.x + vector2D.y * vector2D.y;
    if (projectionTime < 0)
        return BehindZone;
    else if(projectionTime > 0)
        return AheadZone;

    return OnZone;
}

Point2D CollisionTest::LineIntersectionTest(const Line2D& L, const Point2D& P, const Vector2D& V) {
    Vector2D displacement{P.x - L.point.x, P.y - L.point.y};
    float perpendicularProduct = L.direction.x * V.y - L.direction.y * V.x;
    float intersectionTime = L.direction.x * displacement.y - L.direction.y * displacement.x / perpendicularProduct;

    if (intersectionTime <0){
        //Intersection is in the pass
        return Point2D(- INFINITY,-INFINITY);

    }else if(intersectionTime > 0)
    {
        //Intersection is in the future
        return Point2D(INFINITY,INFINITY);
    }
    return Point2D(P.x + intersectionTime * V.x, P.y + intersectionTime * V.y);
}

Point2D CollisionTest::HorizontalLineIntersectionTest(const HLine2D& H, const Point2D& P, const Vector2D& V) {
    Vector2D displacement{P.x , P.y - H.y};
    float perpendicularProduct = V.y;
    float intersectionTime = displacement.y / V.y;

    if (intersectionTime < 0){
        //Intersection is in the pass
        return Point2D(-INFINITY, -INFINITY);
    }else if (intersectionTime > 0){
        //Intersection is in the future
        return Point2D(INFINITY, INFINITY);
    }

    return Point2D(P.x + intersectionTime * V.x, H.y);
}

Point2D CollisionTest::VerticalLineIntersectionTest(const VLine2D& VL, const Point2D& P, const Vector2D& V) {
    Vector2D displacement{P.x - VL.x, P.y};
    float perpendicularProduct = V.x;
    float intersectionTime = displacement.x / V.x;

    if (intersectionTime < 0){
        //Intersection is in the pass
        return Point2D(-INFINITY, -INFINITY);
    }else if (intersectionTime > 0){
        //Intersection is in the future
        return Point2D(INFINITY, INFINITY);
    }

    return Point2D(VL.x, P.y + intersectionTime * V.y);
}
