//
// Created by kdahi on 2020-09-01.
//

#ifndef MATH_STATICCOLLISION_H
#define MATH_STATICCOLLISION_H

#include "../Primitives/AABB2D.h"
#include "../Primitives/Line2D.h"
#include "../Primitives/HLine2D.h"
#include "../Primitives/VLine2D.h"
#include "../Primitives/Ray2D.h"
#include "../Primitives/Segment2D.h"
class StaticCollision {

public:
    static bool AABBLineCollision(const AABB2D&, const Line2D&);
    static bool AABBHLineCollision(const AABB2D&, const HLine2D&);
    static bool AABBVLineCollision(const AABB2D&, const VLine2D&);
    static bool AABBRayCollision(const AABB2D&, const Ray2D&);
    static bool AABBSegmentCollision(const AABB2D&, const Segment2D&);
};


#endif //MATH_STATICCOLLISION_H
