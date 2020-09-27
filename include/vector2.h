#ifndef VECTOR2_H
#define VECTOR2_H

#include "vector.h"
#include <math.h>

class Vector2{
public:
    double x;
    double y;

    Vector2(double x = 0.0, double y = 0.0) :
    x(x),
    y(y)
    {

    }

    Vector2 normalize(){
        double magnitude = this->magnitude();
        if (magnitude == 0.0){
            return -1.0;
        }
        double new_x = this->x / magnitude;
        double new_y = this->y / magnitude;
        Vector2 result = Vector2(new_x, new_y);
        return result;
    }
    double magnitude(){
        double magnitude_squared = (this->x * this->x) + (this->y * this->y);
        double magnitude = sqrt(magnitude_squared);
        return magnitude;
    }
    double magnitudeSquared(){
        double magnitude_squared = (this->x * this->x) + (this->y * this->y);
        return magnitude_squared;
    }
    double dot(Vector2 other){
        double result = (this->x * other.x) + (this->y * other.y);
        return result;
    }

    //
    // Operator overloads
    //

    Vector2 operator-(Vector2 other){
        Vector2 result;
        result.x = this->x - other.x;
        result.y = this->y - other.y;
        return result;
    }
    void operator-=(Vector2 other){
        this->x -= other.x;
        this->y -= other.y;
    }
    Vector2 operator+(Vector2 other){
        Vector2 result;
        result.x = this->x + other.x;
        result.y = this->y + other.y;
        return result;
    }
    void operator+=(Vector2 other){
        this->x += other.x;
        this->y += other.y;
    }
    template <typename T>
    Vector2 operator*(T scalar){
        Vector2 result;
        result.x = this->x * scalar;
        result.y = this->y * scalar;
        return result;
    }
    template <typename T>
    void operator*=(T scalar){
        this->x = this->x * scalar;
        this->y = this->y * scalar;
    }
    template <typename T>
    Vector2 operator/(T scalar){
        Vector2 result;
        result.x = this->x / scalar;
        result.y = this->y / scalar;
    }
    template <typename T>
    void operator/=(T scalar){
        this->x = this->x / scalar;
        this->y = this->y / scalar;
    }
};

#endif
