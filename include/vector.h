#ifndef VECTOR_H
#define VECTOR_H

class Vector{
public:
    virtual void add() = 0;
    virtual void subtract() = 0;
    virtual double magnitude() = 0;
    virtual double magnitudeSquared() = 0;
    virtual double normalize() = 0;
    virtual double dot() = 0;
};

#endif
