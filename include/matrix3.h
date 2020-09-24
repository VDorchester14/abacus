#ifndef MAT3_H
#define MAT3_H

class Matrix3{

public:
    double m00;
    double m01;
    double m02;
    double m10;
    double m11;
    double m12;
    double m20;
    double m21;
    double m22;

    Matrix3(
            double m00 = 0.0, double m01 = 0.0, double m02 = 0.0,
            double m10 = 0.0, double m11 = 0.0, double m12 = 0.0,
            double m20 = 0.0, double m21 = 0.0, double m22 = 0.0
           )
           :
           m00(m00),
           m01(m01),
           m02(m02),
           m10(m10),
           m11(m11),
           m12(m12),
           m20(m20),
           m21(m21),
           m22(m22)
           {}

};

#endif
