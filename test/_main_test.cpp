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
* Main
*/
int main(){
    Vector2Test::test_vector2_creation();
    printf("\nPress any key to exit...");
    std::getchar();
    return 0;
}
