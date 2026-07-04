#pragma once

class Vec2
{
public:

    // ===== Constructors =====
    Vec2();
    Vec2(float x, float y);

    // ===== Arithmetic Operators =====
    
    Vec2 operator+(const Vec2& other) const;
    Vec2 operator-(const Vec2& other) const;

    Vec2 operator*(float scalar) const;
    Vec2 operator/(float scalar) const;

    Vec2& operator+=(const Vec2& other);
    Vec2& operator-=(const Vec2& other);

    Vec2& operator*=(float scalar);
    Vec2& operator/=(float scalar);

    // ===== Vector Operations =====



    float x;
    float y;
};