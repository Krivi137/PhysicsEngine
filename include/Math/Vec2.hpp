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

    Vec2 operator+(const Vec2& other) const{
        return Vec2(x+other.x, y+other.y);
    }

    Vec2 operator-(const Vec2& other) const{
        return Vec2(x-other.x, y-other.y);
    }

    Vec2 operator*(float scaler) const{
        return Vec2(x*scaler, y*scaler);
    }

    Vec2 operator/(float scaler) const{
        return Vec2(x/scaler, y/scaler);
    }
    // ===== Vector Operations =====



    float x;
    float y;
};