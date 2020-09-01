//
// Created by kdahi on 2020-08-31.
//

#ifndef MATH_COLLISIONNORMAL_H
#define MATH_COLLISIONNORMAL_H

#include "../Primitives/AABB2D.h"
#include "../Primitives/Ray2D.h"
#include "../Primitives/Line2D.h"
#include "../Primitives/HLine2D.h"
#include "../Primitives/VLine2D.h"
#include "../Primitives/Segment2D.h"
class CollisionNormal {

public:
    void RetrieveCollisionNormal(const AABB2D&, const Line2D&);
    void RetrieveCollisionNormal(const AABB2D&, const HLine2D&);
    void RetrieveCollisionNormal(const AABB2D&, const VLine2D&);
    void RetrieveCollisionNormal(const AABB2D&, const Ray2D&);
    void RetrieveCollisionNormal(const AABB2D&, const Segment2D&);
};


#endif //MATH_COLLISIONNORMAL_H
