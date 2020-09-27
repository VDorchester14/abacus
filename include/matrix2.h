#ifndef MAT2_H
#define MAT2_H

#include "vector2.h"

class Matrix2{

public:
    double m00;
    double m01;
    double m10;
    double m11;

    Matrix2(
            double m00 = 0.0, double m01 = 0.0,
            double m10 = 0.0, double m11 = 0.0
           )
           :
           m00(m00),
           m01(m01),
           m10(m10),
           m11(m11)
           {}

    //
    // operator overloads
    //

    Matrix2 operator+(Matrix2 other){
        Matrix2 result;
        result.m00 = this->m00 + other.m00;
        result.m01 = this->m01 + other.m01;
        result.m10 = this->m10 + other.m10;
        result.m11 = this->m11 + other.m11;
        return result;
    }

    void operator+=(Matrix2 other){
        this->m00 += other.m00;
        this->m01 += other.m01;
        this->m10 += other.m10;
        this->m11 += other.m11;
    }

    Matrix2 operator-(Matrix2 other){
        Matrix2 result;
        result.m00 = this->m00 - other.m00;
        result.m01 = this->m01 - other.m01;
        result.m10 = this->m10 - other.m10;
        result.m11 = this->m11 - other.m11;
        return result;
    }

    void operator-=(Matrix2 other){
        this->m00 -= other.m00;
        this->m01 -= other.m01;
        this->m10 -= other.m10;
        this->m11 -= other.m11;
    }

    Matrix2 operator*(Matrix2 other){
        Matrix2 result;
        result.m00 = (this->m00 * other.m00) + (this->m01 * other.m10);
        result.m01 = (this->m00 * other.m01) + (this->m01 * other.m11);
        result.m10 = (this->m10 * other.m00) + (this->m11 * other.m10);
        result.m11 = (this->m10 * other.m01) + (this->m11 * other.m11);
        return result;
    }

    Vector2 operator*(Vector2 other){
        Vector2 result;
        result.x = (this->m00 * other.x) + (this->m01 * other.y);
        result.y = (this->m10 * other.x) + (this->m11 * other.y);
        return result;
    }

    Matrix2 operator*(double scale){
        Matrix2 result;
        result.m00 = this->m00 * scale;
        result.m01 = this->m01 * scale;
        result.m10 = this->m10 * scale;
        result.m11 = this->m11 * scale;
        return result;
    }
};

#endif
