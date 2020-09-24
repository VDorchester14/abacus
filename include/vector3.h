#ifndef VECTOR3_H
#define VECTOR3_H

#include "vector.h"
#include <math.h>

class Vector3{
public:
    double x;
    double y;
    double z;

    Vector3(double x = 0.0, double y = 0.0, double z = 0.0) :
    x(x),
    y(y),
    z(z)
    {

    }
    
    Vector3 normalize(){
        double magnitude = this->magnitude();
        if (magnitude == 0.0){
            return -1.0;
        }
        double new_x = this->x / magnitude;
        double new_y = this->y / magnitude;
        double new_z = this->z / magnitude;
        Vector3 result = Vector3(new_x, new_y, new_z);
        return result;
    }
    double magnitude(){
        double magnitude_squared = (this->x * this->x) + (this->y * this->y) + (this->z * this->z);
        double magnitude = sqrt(magnitude_squared);
        return magnitude;
    }
    double magnitudeSquared(){
        double magnitude_squared = (this->x * this->x) + (this->y * this->y) + (this->z * this->z);
        return magnitude_squared;
    }
    double dot(Vector3 other){
        double result = (this->x * other.x) + (this->y * other.y) + (this->z * other.z);
        return result;
    }

    //
    // Operator overloads
    //

    Vector3 operator-(Vector3 other){
        Vector3 result;
        result.x = this->x - other.x;
        result.y = this->y - other.y;
        result.z = this->z - other.z;
        return result;
    }

    Vector3  operator+(Vector3 other){
        Vector3 result;
        result.x = this->x + other.x;
        result.y = this->y + other.y;
        result.z = this->z + other.z;
        return result;
    }
};

#endif
