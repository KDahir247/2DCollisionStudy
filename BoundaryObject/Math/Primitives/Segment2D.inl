Segment2D::Segment2D(const Segment2D& s) : position(s.position), displacement(s.displacement), direction(displacement.getUnit()){}

Segment2D::Segment2D(const Point2D& p, const Vector2D& v) : position(p), displacement(v), direction(displacement.getUnit()) {}

Segment2D::Segment2D(const Point2D& p, float  vx, float vy) : position(p), displacement(vx,vy), direction(displacement.getUnit()) {}

Segment2D::Segment2D(const Point2D& p, const Point2D& b) :position(p), displacement(b.x - p.x, b.y - p.y), direction(displacement.getUnit()) {}

Segment2D::Segment2D(float ax, float ay, float bx, float by) : position(ax, ay), displacement(bx - ax, by - ay), direction(displacement.getUnit()) {}