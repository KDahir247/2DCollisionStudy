//
// Created by kdahi on 2020-08-30.
//

#include "CollisionArea.h"

void CollisionArea::BuildCollisionArea(const AABB2D& aabb2D, const Line2D& line2D) {
    Point2D P1{};
    Point2D P2{};
    if (line2D.direction.y > 0 ){
        P1 = {line2D.point.x, line2D.point.y};
        P2 = {line2D.point.x - aabb2D.displacement.x, line2D.point.y - aabb2D.displacement.y};
    }else{
        P1 = {line2D.point.x, line2D.point.y - aabb2D.displacement.y};
        P2 = {line2D.point.x - aabb2D.displacement.x, aabb2D.displacement.y};
    }
    Line2D L1 = {P1, line2D.direction};
    Line2D L2 = {P2, line2D.direction};
}

void CollisionArea::BuildCollisionArea(const AABB2D& aabb2D, const HLine2D& hLine2D) {
    Point2D P1 = {0, hLine2D.y};
    Point2D P2 = {0, hLine2D.y - aabb2D.displacement.y};
    HLine2D H1 = {P1};
    HLine2D H2 = {P2};
}

void CollisionArea::BuildCollisionArea(const AABB2D& aabb2D, const VLine2D& vLine2D) {
    Point2D P1 = {vLine2D.x, 0};
    Point2D P2 = {vLine2D.x - aabb2D.displacement.x, 0};

    VLine2D H1 = {P1};
    VLine2D H2 = {P2};
}

void CollisionArea::BuildCollisionArea(const AABB2D& aabb2D, const Ray2D& ray2D) {
    Point2D P1{};
    Point2D P2{};
    Point2D P3{};

    if (ray2D.direction.x > 0){

        if (ray2D.direction.y > 0){
            //PP
            P1 = {ray2D.point.x - aabb2D.displacement.x, ray2D.point.y - aabb2D.displacement.y};
            P2 = {ray2D.point.x, ray2D.point.y};
            P3 = {ray2D.point.x - aabb2D.displacement.x, ray2D.point.y};
        }else{
            //PN
            P1 = {ray2D.point.x, ray2D.point.y - aabb2D.displacement.y};
            P2 = {ray2D.point.x - aabb2D.displacement.x, ray2D.point.y};
            P3 = {ray2D.point.x - aabb2D.displacement.x, ray2D.point.y - aabb2D.displacement.y};
        }
    }else{

        if (ray2D.direction.y > 0){
            //NP
            P1 = {ray2D.point.x + aabb2D.displacement.x, ray2D.point.y};
            P2 = {ray2D.point.x,ray2D.point.y + aabb2D.displacement.y};
            P3 = {ray2D.point.x + aabb2D.displacement.x, ray2D.point.y + aabb2D.displacement.y};
        }else{
            //NN
            P1 = {ray2D.point.x,ray2D.point.y};
            P2 = {ray2D.point.x - aabb2D.displacement.x, ray2D.point.y - aabb2D.displacement.y                                                                                                                                                   };
            P3 = {ray2D.point.x, ray2D.point.y - aabb2D.displacement.y};
        }
    }

    Line2D R1(P1, ray2D.direction);
    Line2D R2(P2, ray2D.direction);

    Segment2D S1(P1,P3);
    Segment2D S2(P2, P3);
}

void CollisionArea::BuildCollisionArea(const AABB2D& aabb2D, const Segment2D& s) {

    Point2D P1{};
    Point2D P2{};
    Point2D P3{};
    Point2D P4{};
    Point2D P5{};
    Point2D P6{};



    if (s.direction.x < 0){
        if (s.direction.y < 0){

            //NN
            P1 = {s.position.x, s.position.y};
            P2 = {s.position.x, s.position.y  - aabb2D.displacement.y};
            P3 = {s.position.x - aabb2D.displacement.x, s.position.y - aabb2D.displacement.y};
            P4 = {s.position.x + s.displacement.x - aabb2D.displacement.x, s.position.y + s.displacement.y - aabb2D.displacement.y};
            P5 = {s.position.x + s.displacement.x - aabb2D.displacement.x, s.position.y + s.displacement.y};
            P6 = {s.position.x + s.displacement.x, s.position.y + s.displacement.y};
        }else{
            //NP
            P1 = {s.position.x - aabb2D.displacement.x, s.position.y};
            P2 = {s.position.x, s.position.y};
            P3 = {s.position.x, s.position.y - aabb2D.displacement.y};
            P4 = {s.position.x + s.displacement.x, s.position.y + s.displacement.y - aabb2D.displacement.y};
            P5 = {s.position.x + s.displacement.x, s.position.y + s.displacement.y};
            P6 = {s.position.x + s.displacement.x  - aabb2D.displacement.x, s.position.y + s.displacement.y};
        }
    }else{
        if (s.direction.y < 0){
            //PN
            P1 = {s.position.x - aabb2D.displacement.x, s.position.y};//
            P2 = {s.position.x + s.displacement.x - aabb2D.displacement.x, s.position.y + s.displacement.y};
            P3 = {s.position.x + s.displacement.x, s.position.y + s.displacement.y};
            P4 = {s.position.x + s.displacement.x, s.position.y + s.displacement.y - aabb2D.displacement.y};
            P5 = {s.position.x, s.position.y - aabb2D.displacement.y};
            P6 = {s.position.x - aabb2D.displacement.x, s.position.y - aabb2D.displacement.y};
        } else{

            //PP
            P1 = {s.position.x, s.position.y};
            P2 = {s.position.x + s.displacement.x, s.position.y + s.displacement.y};
            P3 = {s.position.x + s.displacement.x, s.position.y + s.displacement.y - aabb2D.displacement.y};
            P4 = {s.position.x + s.displacement.x - aabb2D.displacement.x, s.position.y + s.displacement.y - aabb2D.displacement.y};
            P5 = {s.position.x - aabb2D.displacement.x, s.position.y - aabb2D.displacement.y};
            P6 = {s.position.x - aabb2D.displacement.x, s.position.y};
        }

        Segment2D S1{P1, P6};
        Segment2D S2{P2, P1};
        Segment2D S3{P3, P2};
        Segment2D S4{P4, P3};
        Segment2D S5{P5, P4};
        Segment2D S6{P6, P5};

    }
}









