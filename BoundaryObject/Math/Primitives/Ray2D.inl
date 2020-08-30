Ray2D::Ray2D() : point({0,0}), direction({1,0}){}

Ray2D::Ray2D(const Ray2D& r) : point({r.point}), direction({r.direction}) {}

Ray2D::Ray2D(const Point2D& p, const Vector2D& d) : point(p), direction(d) {}

Ray2D::Ray2D(const Point2D& p, const Point2D& pDelta){

    point = p;

    float xVal =pDelta.x - p.x;
    float yVal = pDelta.y - p.y;

    float unitConversion = sqrtf(xVal * xVal + yVal * yVal);

    direction = {xVal / unitConversion, yVal /unitConversion};

}