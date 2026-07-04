#include "Math/Vec2.hpp"
#include <cmath>

//=====================================
// Default Constructor
//=====================================

Vec2::Vec2()
    : x(0.0f), y(0.0f)
{

}

//=====================================
// Parameterized Constructor
//=====================================

Vec2::Vec2(float x, float y)
   : x(x), y(y)
{

}

//=====================================
// Arithmetic Operators
//=====================================

Vec2 Vec2::operator+(const Vec2& other) const
{
        return Vec2(x+other.x, y+other.y);
}

Vec2 Vec2::operator-(const Vec2& other) const
{
        return Vec2(x-other.x, y-other.y);
}

Vec2 Vec2::operator*(float scaler) const
{
        return Vec2(x*scaler, y*scaler);
}

Vec2 Vec2::operator/(float scaler) const
{
        return Vec2(x/scaler, y/scaler);
}

Vec2& Vec2::operator+=(const Vec2& other)
{
    x += other.x;
    y += other.y;

    return *this;
}

Vec2& Vec2::operator-=(const Vec2& other)
{
    x -= other.x;
    y -= other.y;

    return *this;
}

Vec2& Vec2::operator*=(float scalar)
{
    x *= scalar;
    y *= scalar;

    return *this;
}

Vec2& Vec2::operator/=(float scalar)
{
    x /= scalar;
    y /= scalar;

    return *this;
}

//=====================================
// Vector Operations
//=====================================

float Vec2::lengthSquared() const
{
    return x*x + y*y;
}

float Vec2::length() const
{
    return std::sqrt(lengthSquared());
}

Vec2 Vec2::normalized() const
{
    return *this/length();
}

void Vec2::normalize()
{
    *this = normalized();
}

float Vec2::dot(const Vec2& other) const{
    return x*other.x + y*other.y;
}
