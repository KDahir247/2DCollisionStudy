AABB2D::AABB2D() : position(0,0), displacement(1,-1){}

AABB2D::AABB2D(const Point2D& p, const Vector2D& v) : position(p), displacement(v){}

AABB2D::AABB2D(const AABB2D& aabb2D) : position(aabb2D.position), displacement(aabb2D.displacement){}