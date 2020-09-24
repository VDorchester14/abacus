#ifndef MAT2_H
#define MAT2_H

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

};

#endif
