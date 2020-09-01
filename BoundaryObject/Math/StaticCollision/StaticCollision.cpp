//
// Created by kdahi on 2020-09-01.
//

#include "StaticCollision.h"

bool StaticCollision::AABBLineCollision(const AABB2D& A, const Line2D& B) {
    Point2D P1, P2;
    Vector2D W1, W2;
    float D1, D2;

    float slope = B.direction.y * B.direction.x;
    if (slope < 0){
        P1 = {B.point.x - A.displacement.x, B.point.y};
        W1 = {A.position.x - P1.x, A.position.y - P1.y};
        D1 = B.direction.x * W1.y - B.direction.y * W1.x;
        if (D1 >0)
            return false;

        P2 = {B.point.x, B.point.y - A.displacement.y};
        W2 = {A.position.x - P2.x, A.position.y - P2.y};
        D2 = B.direction.x * W2.y - B.direction.y * W2.x;

        if (D2 < 0) return false;

    }else{
        P1 = {B.point.x, B.point.y};
        W1 = {A.position.x - P1.x, A.position.y - P1.y};
        D1 = B.direction.x * W1.y - B.direction.y * W1.x;
        if (D1 > 0)
            return false;

        P2 = {B.point.x - A.displacement.x, B.point.y - A.displacement.y};
        W2 = {A.position.x - P2.x, A.position.y - P2.y};
        D2 = B.direction.x * W2.y - B.direction.y * W2.x;

        if (D2 < 0) return false;
    }

    return true;
}

bool StaticCollision::AABBHLineCollision(const AABB2D& A, const HLine2D& B) {
    Point2D P1{}, P2{};
    Vector2D W1{}, W2{};
    float D1, D2;

    P1 = {0, B.y - A.displacement.y};
    W1 = {A.position.x, A.position.y - P1.y};
    D1 = W1.y;

    if (D1 > 0)
        return false;

    P2 ={0, B.y};
    W2 = {A.position.x, A.position.y - P2.y};
    D2 = W2.y;

    if (D2 < 0)
        return false;

    return true;
}

bool StaticCollision::AABBVLineCollision(const AABB2D& A, const VLine2D& B) {

    Point2D P1{}, P2{};
    Vector2D W1{}, W2{};
    float D1, D2;

    P1 = {B.x, 0};
    W1 = {A.position.x - P1.x, A.position.y};
    D1 = W1.x;

    if (D1 > 0)
        return false;
    P2 = {B.x - A.displacement.x,0};
    W2 = {A.position.x - P2.x, A.position.y - P2.y};
    D2 = W2.x;

    if (D2 < 0)
        return false;

    return true;
}

bool StaticCollision::AABBRayCollision(const AABB2D &, const Ray2D &) {
    //Need to implement
    return false;
}
