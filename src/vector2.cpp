#include "../include/vector2.h"
#include <math.h>

// make these two take and return vectors
void Vector2::add(){
    return;
}
void Vector2::subtract(){
    return;
}
double Vector2::magnitude(){
    double xx = this->_x * this->_x;
    double yy = this->_y * this->_y;
    double sum = xx + yy;
    double mag = sqrt(sum);
    return mag;
}
double Vector2::magnitudeSquared(){
    double xx = this->_x * this->_x;
    double yy = this->_y * this->_y;
    return (xx + yy);
}
// make this return normalized vector
double Vector2::normalize(){
    return 1.0;
}
