//
// Created by kdahi on 2020-08-30.
//

#ifndef MATH_COLLISIONAREA2D_H
#define MATH_COLLISIONAREA2D_H
#include "../Primitives/AABB2D.h"
#include "../Primitives/Line2D.h"
#include "../Primitives/HLine2D.h"
#include "../Primitives/VLine2D.h"
#include "../Primitives/Ray2D.h"
#include "../Primitives/Segment2D.h"
class CollisionArea{

public:
    void BuildCollisionArea(const AABB2D&,const Line2D&);
    void BuildCollisionArea(const AABB2D&, const HLine2D&);
    void BuildCollisionArea(const AABB2D&, const VLine2D&);
    void BuildCollisionArea(const AABB2D&, const Ray2D&);
    void BuildCollisionArea(const AABB2D&, const Segment2D&);

};
#endif //MATH_COLLISIONAREA2D_H
