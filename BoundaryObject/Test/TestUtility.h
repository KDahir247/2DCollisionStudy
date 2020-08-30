//
// Created by kdahi on 2020-08-29.
//

#ifndef TEST_TESTUTILITY_H
#define TEST_TESTUTILITY_H
#include <cmath>
bool CloseEnough(float compare, float comparable, float threshold = 0.00001f)
{
    return fabs(compare - comparable) < threshold;
}

#endif //TEST_TESTUTILITY_H
