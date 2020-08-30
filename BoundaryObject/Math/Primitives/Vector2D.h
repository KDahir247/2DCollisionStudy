//
// Created by kdahi on 2020-08-28.
//
#pragma once
#ifndef MATH_VECTOR2D_H
#define MATH_VECTOR2D_H
#include <cmath>
#include <string>
#include "Point2D.h"

struct Vector2D{
    float x{};
    float y{};

    inline static float DotProduct(const Vector2D&, const Vector2D&);
    inline static float CrossProduct(const Vector2D&, const Vector2D&);
    inline static Vector2D PerpendicularLeft(const Vector2D&);
    inline static Vector2D PerpendicularRight(const Vector2D&);
    inline static float ProjectionTime(const Vector2D&, const Vector2D&);
    inline static Point2D GetProjectionPoint(const Point2D&, const Vector2D&, float);
    inline static Vector2D Rotate(float, const Vector2D&);

    inline Vector2D();
    inline Vector2D(float, float);
    inline Vector2D(const Vector2D&);
    inline float magnitude();
    inline float sqrMagnitude();
    inline Vector2D getUnit();
    inline Vector2D& normalize();
    inline std::string GetCategory();
};

inline Vector2D operator+(const Vector2D&, const Vector2D&);
inline Vector2D operator-(const Vector2D&, const Vector2D&);

#include "Vector2D.inl"

#endif //MATH_VECTOR2D_H
