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

bool StaticCollision::AABBRayCollision(const AABB2D& A, const Ray2D& B) {
    float rb ,tb ,bb ,lb , D1, D2;
    Point2D P1, P2;
    Vector2D W1, W2;

    if (B.direction.x < 0){
        if (B.direction.y < 0){
            //NN

            rb = B.point.x;

            if (A.position.x < rb)
                return false;
            tb = B.point.y - A.displacement.y;

            if (A.position.y > tb)
                return false;
            P1 = {B.point.x, B.point.y};
            W1 = {A.position.x - P1.x, A.position.y - P1.y};
            D1 = B.direction.x * W1.y - B.direction.y * W1.x;

            if (D1 < 0)
                return false;

            P2 = {B.point.x - A.displacement.x, B.point.y - A.displacement.y};
            W2 = {A.position.x - P2.x, A.position.y - P2.y};
            D2 = B.direction.x * W2.y - B.direction.y * W2.x;

            if (D2 > 0)
                return false;

        }else{
            //NP
            rb = B.point.x;

            if (A.position.x > rb)
                return false;

            bb = B.point.y;

            if (A.position.y > bb)
                return false;

            P1 = {B.point.x - A.displacement.x, B.point.y - A.displacement.y};
            W1 = {A.position.x - P1.x, A.position.y - P1.y};
            D1 = B.direction.x * W1.y - B.direction.y * W1.x;

            if (D1  > 0)
                return false;

            P2 = {B.point.x, B.point.y - A.displacement.y};
            W2 = {A.position.x - P2.x, A.position.y - P2.y};
            D2 = B.direction.x * W2.y - B.direction.y * W2.x;

            if (D2 < 0)
                return false;

        }
    }else{

        if (B.direction.y < 0){
            //PN
            lb = B.point.x - A.displacement.x;

            if (A.position.x < lb)
                return false;

            tb = B.point.y - A.displacement.y;

            if (A.position.y > tb)
                return false;

            P1 = {B.point.x, B.point.y - A.displacement.y};
            W1 = {A.position.x - P1.x, B.point.y - P1.y};
            D1 = B.direction.x * W1.y - B.direction.y * W1.x;

            if (D1 > 0)
                return false;

            P2 ={B.point.x - A.displacement.x, B.point.x};
            W2 = {A.position.x - P2.x, A.position.y - P2.y};
            D2 = B.direction.x * W2.y - B.direction.y * W2.x;

            if (D2 < 0)
                return false;

        }else{
            //PP
            bb = B.point.y;

            if (A.position.y < bb)
                return false;

            lb = B.point.y - A.displacement.x;

            if (A.position.x > lb)
                return false;

            P1 = {B.point.x, B.point.y};
            W1 = {A.position.x - P1.x, A.position.y - P1.y};
            D1 = B.direction.x * W1.y - B.direction.y * W1.x;

            if (D1 < 0)
                return false;

            P2 = {B.point.x - A.displacement.x, B.point.y - A.displacement.y};
            W2 = {A.position.x - P2.x, A.position.y - P2.y};
            D2 = B.direction.x * W2.y - B.direction.y * W2.x;

            if (D2 > 0)
                return false;
        }

    }

    return true;
}

bool StaticCollision::AABBSegmentCollision(const AABB2D& A, const Segment2D& B) {
    float rb, lb, tb, bb;
    Point2D P1, P2;
    Vector2D W1, W2;
    float D1, D2;
    if(B.displacement.x < 0){
        if (B.displacement.y < 0){
            //NN
            rb = B.position.x;

            if (A.position.x > rb)
                return false;
            lb = B.position.x + B.displacement.x - A.displacement.x;

            if (A.position.x < lb)
                return false;
            tb = B.position.y - A.displacement.y;

            if (A.position.y > tb)
                return false;

            bb = B.position.y + B.displacement.y;

            if (A.position.y < bb)
                return false;

            P1 = {B.position.x, B.position.y};
            W1 = {A.position.x - P1.x, A.position.y - P1.y};
            D1 = B.displacement.x * W1.y - B.displacement.y * W1.x;

            if (D1 > 0)
                return false;

            P2 = {B.position.x - A.displacement.x, B.position.y - A.displacement.y};
            W2 = {A.position.x - P2.x, A.position.y - P2.y};
            D2 = B.displacement.x * W2.y - B.displacement.y * W2.x;

            if (D2 < 0)
                return false;
        }else{
            //NP
            rb= B.position.x;
            if (A.position.x > rb)
                return false;

            lb = B.position.x + B.displacement.x - A.displacement.x;
            if (A.position.x > lb)
                return false;

            bb = B.position.y;

            if (A.position.y < bb)
                return false;

            tb = B.position.y - A.displacement.y;
            if (A.position.y > tb)
                return false;

            P1 = {B.position.x - A.displacement.x, B.position.y - A.displacement.y};
            W1 = {A.position.x - P1.x, A.position.y - P1.y};
            D1 = B.displacement.x * W1.y - B.displacement.y * W1.x;

            if (D1 > 0)
                return false;

            P2 = {B.position.x, B.position.y - A.displacement.y};
            W2 = {A.position.x - P2.x, A.position.y - P2.y};
            D2 = B.displacement.x * W2.y - B.displacement.y * W2.x;

            if (D2 < 0)
                return false;
        }
    }else{

        if (B.displacement.y <0){
            //PN
            lb = B.position.x - A.displacement.x;
            if (A.position.x < lb)
                return false;

            rb = B.position.x + B.displacement.x;
            if (A.position.x > rb)
                return false;

            tb = B.position.y - A.displacement.y;
            if (A.position.y > tb)
                return false;

            bb = B.position.y + B.displacement.y;
            if (A.position.y < bb)
                return false;

            P1 = {B.position.x - A.displacement.x, B.position.y};
            W1 = {A.position.x - P1.x, A.position.y - P1.y};
            D1 = B.displacement.x * W1.y - B.displacement.y * W1.x;

            if (D1 < 0)
                return false;

            P2 = {B.position.x, B.position.y - A.displacement.y};
            W2 = {A.position.x - P2.x, A.position.y - P2.y};
            D2 = B.displacement.x * W2.y - B.displacement.y * W2.x;

            if (D2 >0)
                return false;

        }else{
            //PP
            bb = B.position.y;

            if (A.position.y < bb)
                return false;

            tb = B.position.y + B.displacement.y - A.displacement.y;

            if (A.position.y > tb)
                return false;

            lb = B.position.x - A.displacement.x;
            if (A.position.x < lb)
                return false;

            rb = B.position.x + B.displacement.x;
            if (A.position.x > rb)
                return false;

            P1 = {B.position.x, B.position.y};
            W1 = {A.position.x - P1.x, A.position.y - P1.y};
            D1 = B.displacement.x * W1.y - B.displacement.y * W1.x;

            if(D1 < 0)
                return false;

            P2 = {B.position.x - A.displacement.x, B.position.y - A.displacement.y};
            W2 = {A.position.x - P2.x,A.position.y - P2.y};
            D2 = B.displacement.x * W2.y - B.displacement.y * W2.x;

            if (D2 > 0)
                return false;
        }


    }

    return false;
}
