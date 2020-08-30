float Vector2D::DotProduct(const Vector2D& lhs, const Vector2D& rhs){
    return lhs.x * rhs.x + lhs.y * rhs.y;
}

float Vector2D::CrossProduct(const Vector2D& lhs, const Vector2D& rhs){
    return lhs.x * rhs.y - lhs.y * rhs.x;
}

Vector2D::Vector2D(float x, float y) : x(x) , y(y){}

Vector2D::Vector2D() : x(0), y(0) {}

Vector2D::Vector2D(const Vector2D& vector2D) : x(vector2D.x), y(vector2D.y){}

Vector2D Vector2D::PerpendicularLeft(const Vector2D& val){
    return Vector2D(-val.y,val.x);
}

Vector2D Vector2D::PerpendicularRight(const Vector2D& val){
    return Vector2D(val.y, -val.x);
}

Point2D Vector2D::GetProjectionPoint(const Point2D& p, const Vector2D& v, float t){
    return Point2D(p.x + t * v.x, p.y + t * v.y);
}

Vector2D Vector2D::Rotate(float radian, const Vector2D& v){
    return Vector2D(v.x * cosf(radian) - v.y * sinf(radian), v.x * sinf(radian) + v.y  * cosf(radian));
}

Vector2D operator+(const Vector2D& lhs, const Vector2D& rhs){
    return Vector2D(lhs.x + rhs.x,lhs.y + rhs.y);
}

Vector2D operator-(const Vector2D& lhs, const Vector2D& rhs){
    return Vector2D(lhs.x - rhs.x, lhs.y - rhs.y);
}

float Vector2D::ProjectionTime(const Vector2D& lhs, const Vector2D& rhs){
    return Vector2D::DotProduct(lhs, rhs) / Vector2D::DotProduct(rhs,rhs);
}

float Vector2D::magnitude(){
    return sqrtf(x * x + y * y);
}

float Vector2D::sqrMagnitude(){
    return x * x + y * y;
}

Vector2D Vector2D::getUnit(){
    return Vector2D(x / magnitude(), y / magnitude());
}

Vector2D& Vector2D::normalize(){
    float mag = magnitude();
    x /= mag;
    y /= mag;
    return *this;
}

std::string Vector2D::GetCategory() {

    if(x == 0)
    {
        if (y == 0)
        {
            return "ZZ";
        }else if(y > 0){
            return "ZP";
        }else if(y < 0){
            return "ZN";
        }
    }else if (x > 0){
        if (y == 0)
        {
            return "PZ";
        }else if(y > 0){
            return "PP";
        }else if(y < 0){
            return "PN";
        }
    }else if(x < 0){

        if (y == 0)
        {
            return "NZ";
        }else if(y > 0){
            return "NP";
        }else if(y < 0){
            return "NN";
        }
    }

}
