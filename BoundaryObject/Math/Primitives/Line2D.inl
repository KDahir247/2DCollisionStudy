Line2D::Line2D(const Point2D& point, const Vector2D& direction) : point(point), direction(direction) {}
Line2D::Line2D(float pointX, float pointY, float directionX, float directionY) : point({pointX, pointY}), direction({directionX, directionY}){}
Line2D::Line2D(const Point2D a, const Point2D b){
    float xVal = b.x - a.x;
    float yVal = b.y - a.y;
    float mag = sqrtf(xVal * xVal + yVal * yVal);
    point = a;
    direction = {b.x / mag, b.y / mag};
};