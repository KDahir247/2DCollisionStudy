Point2D::Point2D(): x(0) , y(0){}

Point2D::Point2D(float x, float y) : x(x) , y(y){}

Point2D::Point2D(const Point2D& p) : x(p.x), y(p.y) {}

float Point2D::Distance(const Point2D& Origin, const Point2D& EndPoint) {
    return sqrtf(SqrDistance(EndPoint,Origin));
}

float Point2D::SqrDistance(const Point2D& EndPoint, const Point2D& Origin) {
    return powf(EndPoint.x - Origin.x , 2) + powf(EndPoint.y - Origin.y, 2);
}

