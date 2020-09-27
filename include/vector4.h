#ifndef VECTOR4_H
#define VECTOR4_H

#include "vector.h"
#include <math.h>

class Vector4{
public:
    double x;
    double y;
    double z;
    double w;

    Vector4(double x = 0.0, double y = 0.0, double z = 0.0, double w = 0.0) :
    x(x),
    y(y),
    z(z),
    w(w)
    {

    }

    Vector4 normalize(){
        double magnitude = this->magnitude();
        if (magnitude == 0.0){
            return -1.0;
        }
        double new_x = this->x / magnitude;
        double new_y = this->y / magnitude;
        double new_z = this->z / magnitude;
        double new_w = this->w / magnitude;
        Vector4 result = Vector4(new_x, new_y, new_z, new_w);
        return result;
    }
    double magnitude(){
        double magnitude_squared = 0.0;
        magnitude_squared += (this->x * this->x);
        magnitude_squared += (this->y * this->y);
        magnitude_squared += (this->z * this->z);
        magnitude_squared += (this->w * this->w);
        double magnitude = sqrt(magnitude_squared);
        return magnitude;
    }
    double magnitudeSquared(){
        double magnitude_squared = 0.0;
        magnitude_squared += (this->x * this->x);
        magnitude_squared += (this->y * this->y);
        magnitude_squared += (this->z * this->z);
        magnitude_squared += (this->w * this->w);
        return magnitude_squared;
    }
    double dot(Vector4 other){
        double result = 0.0;
        result += (this->x * other.x);
        result += (this->y * other.y);
        result += (this->z * other.z);
        result += (this->w * other.w);
        return result;
    }

    //
    // Operator overloads
    //

    Vector4 operator-(Vector4 other){
        Vector4 result;
        result.x = this->x - other.x;
        result.y = this->y - other.y;
        result.z = this->z - other.z;
        result.w = this->w - other.w;
        return result;
    }

    void operator-=(Vector4 other){
        this->x -= other.x;
        this->y -= other.y;
        this->z -= other.z;
        this->w -= other.w;
    }

    Vector4 operator+(Vector4 other){
        Vector4 result;
        result.x = this->x + other.x;
        result.y = this->y + other.y;
        result.z = this->z + other.z;
        result.w = this->w + other.w;
        return result;
    }

    void operator+=(Vector4 other){
        this->x += other.x;
        this->y += other.y;
        this->z += other.z;
        this->w += other.w;
    }

    template <typename T>
    Vector4 operator*(T scalar){
        Vector4 result;
        result.x = this->x * scalar;
        result.y = this->y * scalar;
        result.z = this->z * scalar;
        result.w = this->w * scalar;
        return result;
    }
    template <typename T>
    void operator*=(T scalar){
        this->x = this->x * scalar;
        this->y = this->y * scalar;
        this->z = this->z * scalar;
        this->w = this->w * scalar;
    }
    template <typename T>
    Vector4 operator/(T scalar){
        Vector4 result;
        result.x = this->x / scalar;
        result.y = this->y / scalar;
        result.z = this->z / scalar;
        result.w = this->w / scalar;
        return result;
    }
    template <typename T>
    void operator/=(T scalar){
        this->x = this->x / scalar;
        this->y = this->y / scalar;
        this->z = this->z / scalar;
        this->w = this->w / scalar;
    }
};

#endif
