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
