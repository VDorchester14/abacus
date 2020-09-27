#include <stdio.h>
#include <iostream>
#include <assert.h>

#include "../../probatur/include/test_class.h"
#include "../include/vector2.h"
#include "../include/vector3.h"
#include "../include/vector4.h"
#include "../include/matrix2.h"
#include "../include/matrix3.h"
#include "../include/matrix4.h"


class Vector2Test : public TestClass{
public:

    static void test_vector2_creation(){
        Vector2 test = Vector2(5.0, 3.0);
        Vector2 test2 = Vector2(1.0, -2.0);
        Vector2 test3 = Vector2();
        AssertEquals(test.x, 5.0);
        AssertEquals(test.y, 3.0);
        AssertEquals(test2.x, 1.0);
        AssertEquals(test2.y, -2.0);
        AssertEquals(test3.x, 0.0);
        AssertEquals(test3.y, 0.0);
    }
};

/*
* Test Vector3
*/

void test_vector3_creation(){
    Vector3 test = Vector3(1.0, 2.0, 3.0);
    bool result = ((test.x == 1.0) && (test.y == 2.0) && (test.z == 3.0));
    printf("Vector3 creation passed: ");
    printf(result ? "true\n" : "false\n");
    if(!result){
        printf("Passed x: 1.0, passed y: 2.0, passed z: 3.0\n");
        printf("Vectorx: %f, Vectory %f, Vectorz %f\n", test.x, test.y, test.z);
    }
    printf("\n");
}

void test_vector3_subtract(){
    Vector3 v1 = Vector3(1.0, -2.0, 1.5);
    Vector3 v2 = Vector3(-1.0, 0.0, -0.25);
    Vector3 result = v1 - v2;
    bool result_bool = ((result.x == 2.0) && (result.y == -2.0) && (result.z == 1.75));
    printf("Vector3 subtract passed: ");
    printf( result_bool ? "true\n" : "false\n");
    if(!result_bool){
        printf("V1: %f, %f, %f\n", v1.x, v1.y, v1.z);
        printf("V2: %f, %f, %f\n", v2.x, v2.y, v2.z);
        printf("Expected: %f, %f, %f\n", 2.0, -2.0, 1.75);
        printf("Result: %f, %f, %f\n", result.x, result.y, result.z);
    }
    printf("\n");
}

void test_vector3_add(){
    Vector3 v1 = Vector3(1.0, -2.0, 1.5);
    Vector3 v2 = Vector3(-1.0, 0.0, -0.25);
    Vector3 result = v1 + v2;
    bool result_bool = ((result.x == 0.0) && (result.y == -2.0) && (result.z == 1.25));
    printf("Vector3 add passed: ");
    printf( result_bool ? "true\n" : "false\n");
    if(!result_bool){
        printf("V1: %f, %f, %f\n", v1.x, v1.y, v1.z);
        printf("V2: %f, %f, %f\n", v2.x, v2.y, v2.z);
        printf("Expected: %f, %f, %f\n", 0.0, -2.0, 1.25);
        printf("Result: %f, %f, %f\n", result.x, result.y, result.z);
    }
    printf("\n");
}

/*
* Main
*/
int main(){
    Vector2Test::test_vector2_creation();
    test_vector3_creation();
    test_vector3_subtract();
    test_vector3_add();
    printf("\nPress any key to exit...");
    std::getchar();
    return 0;
}
