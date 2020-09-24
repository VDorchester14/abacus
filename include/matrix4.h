#ifndef MAT4_H
#define MAT4_H

class Matrix4{

public:
    double m00;
    double m01;
    double m02;
    double m03;
    double m10;
    double m11;
    double m12;
    double m13;
    double m20;
    double m21;
    double m22;
    double m23;
    double m30;
    double m31;
    double m32;
    double m33;

    Matrix4(
            double m00 = 0.0, double m01 = 0.0, double m02 = 0.0, double m03 = 0.0,
            double m10 = 0.0, double m11 = 0.0, double m12 = 0.0, double m13 = 0.0,
            double m20 = 0.0, double m21 = 0.0, double m22 = 0.0, double m23 = 0.0,
            double m30 = 0.0, double m31 = 0.0, double m32 = 0.0, double m33 = 0.0
           )
           :
           m00(m00),
           m01(m01),
           m02(m02),
           m03(m03),
           m10(m10),
           m11(m11),
           m12(m12),
           m13(m13),
           m20(m20),
           m21(m21),
           m22(m22),
           m23(m23),
           m30(m30),
           m31(m31),
           m32(m32),
           m33(m33)
           {}

};

#endif
