#ifndef TEST_H
#define TEST_H

class TestCase {
public:
    Test();
    virtual bool run_test() = 0;
};

#endif
