#include "vector.h"

class Vector2 : public Vector {
private:
    double _x;
    double _y;

public:
    void add();
    void subtract();
    double magnitude();
    double magnitudeSquared();
    double normalize();
};
