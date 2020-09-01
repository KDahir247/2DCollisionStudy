//
// Created by kdahi on 2020-08-31.
//

#include "CollisionNormal.h"
void CollisionNormal::RetrieveCollisionNormal(const AABB2D& aabb2D, const Line2D& line2D) {
    Vector2D N1{-line2D.direction.y, line2D.direction.x};
    Vector2D N2{line2D.direction.y, -line2D.direction.x};
}


void CollisionNormal::RetrieveCollisionNormal(const AABB2D &, const HLine2D &) {
    Vector2D N1{0,1};
    Vector2D N2{0, -1};
}


void CollisionNormal::RetrieveCollisionNormal(const AABB2D &, const VLine2D &) {
    Vector2D N1{1,0};
    Vector2D N2{-1,0};
}



void CollisionNormal::RetrieveCollisionNormal(const AABB2D &, const Ray2D& ray2D) {
    Vector2D N1{};
    Vector2D N2{};
    Vector2D N3{};
    Vector2D N4{};
    Vector2D N5{};
    Vector2D N6{};
    Vector2D N7{};

    if (ray2D.direction.x < 0){

        if(ray2D.direction.y < 0){
            //NN
            N1 = {-ray2D.direction.y, ray2D.direction.x};
            N2 = {1 -ray2D.direction.y, ray2D.direction.x};
            N3 = {1, 0};
            N4 = {cosf(45), sinf(45)};
            N5 = {0,1};
            N6 = {ray2D.direction.y, 1 - ray2D.direction.x};
            N7 = {ray2D.direction.y, -ray2D.direction.x};
        }else{
            //NP
            N1 = {ray2D.direction.y, -ray2D.direction.x };
            N2 = {ray2D.direction.y + 1, -ray2D.direction.x};
            N3 = {1,0};
            N4 = {cosf(315),sinf(315)};
            N5 = {0, -1};
            N6 = {-ray2D.direction.y, ray2D.direction.x - 1};
            N7 = {-ray2D.direction.y, ray2D.direction.x};
        }
    }else{

        if (ray2D.direction.y < 0){
            //PN
            N1 = {ray2D.direction.y, -ray2D.direction.x};
            N2 = {ray2D.direction.y - 1, -ray2D.direction.x};
            N3 = {-1,0};
            N4 = {cosf(135), sinf(135)};
            N5 = {0,1};
            N6 = {-ray2D.direction.y, ray2D.direction.x + 1};
            N7 = {-ray2D.direction.y, ray2D.direction.x};
        }else{
            //PP
            N1 = {-ray2D.direction.y, ray2D.direction.x};
            N2 = {-1 - ray2D.direction.y, ray2D.direction.x};
            N3 = {-1,0};
            N4 = {cosf(225), sinf(225)};
            N5 = {0,-1};
            N6 = {ray2D.direction.y, -1 - ray2D.direction.x};
            N7 = {ray2D.direction.y,-ray2D.direction.x};
        }
    }
}

void CollisionNormal::RetrieveCollisionNormal(const AABB2D& aabb2D, const Segment2D& segment2D) {
    Vector2D N1{};
    Vector2D N2{};
    Vector2D N3{};
    Vector2D N4{};
    Vector2D N5{};
    Vector2D N6{};
    Vector2D N7{};
    Vector2D N8{};
    Vector2D N9{};
    Vector2D N10{};
    Vector2D N11{};
    Vector2D N12{};

    if (segment2D.direction.x < 0){

        if (segment2D.direction.y < 0){
            //NN
            N1 = {1 - segment2D.direction.y, segment2D.direction.x};
            N2 = {1,0};
            N3 = {cosf(45), sinf(45)};
            N4 = {0,1};
            N5 = {segment2D.direction.y, 1 - segment2D.direction.x};
            N6 = {segment2D.direction.y, -segment2D.direction.x};
            N7 = { segment2D.direction.y -1 , -segment2D.direction.x};
            N8 = {-1, 0};
            N9 = {cosf(225), sinf(225)};
            N10= {0, -1};
            N11= {-segment2D.direction.y,segment2D.direction.x -1};
            N12= {-segment2D.direction.y , segment2D.direction.x};
        }else{

            //NP
            N1 = {cosf(315), sinf(315)};
            N2 = {1,0};
            N3 = { segment2D.direction.y + 1, -segment2D.direction.x};
            N4 = {segment2D.direction.y, -segment2D.direction.x};
            N5 = {segment2D.direction.y, 1 - segment2D.direction.x};
            N6 = {0,1};
            N7 = {cosf(135), sinf(135)};
            N8 = {-1,0};
            N9 = {- segment2D.direction.y - 1,segment2D.direction.x};
            N10 = {-segment2D.direction.y, segment2D.direction.x};
            N11 = {-segment2D.direction.y, segment2D.direction.x - 1};
            N12 = {0,-1};
        }

    }else{
        if (segment2D.direction.y < 0){
            //PN
            N1 = {-segment2D.direction.y,segment2D.direction.x + 1};
            N2 = {0, 1};
            N3 = {cosf(135), sinf(135)};
            N4 = {-1, 0};
            N5 = {segment2D.direction.y - 1, -segment2D.direction.x};
            N6 = {segment2D.direction.y, -segment2D.direction.x};
            N7 = {segment2D.direction.y - 1, -segment2D.direction.x};
            N8 = {0, -1};
            N9 = {cosf(315), sinf(315)};
            N10 = {1,0};
            N11 = {1-segment2D.direction.y, segment2D.direction.x};
            N12 = {-segment2D.direction.y, segment2D.direction.x};
        }else{
            //PP
            N1 = {segment2D.direction.y -1,-segment2D.direction.x};
            N2 = {segment2D.direction.y, -segment2D.direction.x};
            N3 = {segment2D.direction.y + 1, - segment2D.direction.x};
            N4 = {1, 0};
            N5 = {cosf(45), sinf(45)};
            N6 = {0,1};
            N7 = {-segment2D.direction.y, segment2D.direction.x + 1};
            N8 = {-segment2D.direction.y , segment2D.direction.x};
            N9 = {-1-segment2D.direction.y, segment2D.direction.x};
            N10 = {-1, 0};
            N11 = {cosf(225), sinf(225)};
            N12 = {0,-1};
        }
    }
}
