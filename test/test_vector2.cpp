#include <stdio.h>
#include <iostream>

#include "../../probatur/include/test_class.h"
#include "../include/vector2.h"


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
    static void test_vector2_addition(){
        Vector2 test = Vector2(0, 0);
        Vector2 test1 = Vector2(-1.5, 3.14);
        Vector2 test2 = Vector2(0.001, 0.0);
        Vector2 result = test + test1;
        Vector2 result1 = test1 + test2;
        Vector2 result2 = test + test2;
        AssertEquals(result.x, -1.5);
        AssertEquals(result.y, 3.14);
        AssertEquals(result1.x, -1.499);
        AssertEquals(result1.y, 3.14);
        AssertEquals(result2.x, 0.001);
        AssertEquals(result2.y, 0.0);
    }
};

/*
* Main
*/
int main(){
    Vector2Test::test_vector2_creation();
    Vector2Test::test_vector2_addition();
    printf("\nPress any key to exit...");
    std::getchar();
    return 0;
}
