//
// Created by kdahi on 2020-08-29.
//

#include "StaticCollision.h"
Point2D Collision::LineLineCollision(const Line2D &A, const Line2D &B) {
    Point2D IA, IB;
    Vector2D displacement(B.point.x - A.point.x,B.point.y - A.point.y); //(6,0)
    float perpendicularProduct = B.direction.x *  A.direction.y - A.direction.x * B.direction.y; //4

    if (perpendicularProduct == 0){
        float c = displacement.x * A.direction.y - displacement.y  * A.direction.x;
        if (c == 0){
            return Point2D(A.point);
        }else{
            return Point2D(0,0);//Are Paralllel
        }

    }else{
        float TA = B.direction.x *displacement.y - B.direction.y * displacement.x / perpendicularProduct; //0  -
        float TB = A.direction.x * displacement.y - A.direction.y * displacement.x / perpendicularProduct;

        IA.x = A.point.x + TA * A.direction.x;
        IA.y = A.point.y + TA * A.direction.y;
        IB.x = B.point.x + TB * B.direction.x;
        IB.y = B.point.y + TB * B.direction.y;

    }

    return IA;
}

Point2D Collision::LineHLineCollision(const Line2D &A, const HLine2D &B) {
    float t{};
    Point2D I(0,0);
    Vector2D displacement(-A.point.x, B.y - A.point.y);

    float perpendicularProduct = A.direction.y;

    if (perpendicularProduct == 0)
    {
       float c = displacement.y;

       if (c == 0){
           return (A.point);
       }else{
           return  Point2D(); //Lines are parallel
       }

    }else{
        t = displacement.y / A.direction.y;
        I.x = A.point.x + t * A.direction.x;
        I.y = B.y;
    }

    return I;
}

Point2D Collision::LineVLineCollision(const Line2D& A, const VLine2D & B) {
    float t{};
    Point2D I{};

    Vector2D displacement(B.x - A.point.x,  - A.point.y);
    float perpendicularProduct = A.direction.x;

    if(perpendicularProduct == 0){
       float c = displacement.x;
       if (c == 0){
           return Point2D(A.point);
       }else{
           return Point2D(0,0); //
       }
    }else{
        t = displacement.x / A.direction.x;
        //float bot = A.direction.x; //TODO Make Negative
        I.x = B.x;
        I.y = A.point.y + t * A.direction.y;
    }

    return I;
}

Point2D Collision::Reflection(const Point2D & a, const Vector2D & v, float t, const Vector2D & n) {
    float d = 2 * (v.x * n.x + v.y * n.y);
    float remainingIntersectionTime = 1 - t;
    Vector2D ReflectionVector(remainingIntersectionTime * (v.x - d * n.x), remainingIntersectionTime * (v.x - d * n.x));
    Point2D ReflectionPoint(a.x + ReflectionVector.x, a.y + ReflectionVector.y);
    return ReflectionPoint;
}
