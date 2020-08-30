#include <iostream>
#include <gtest/gtest.h>
int main(int argv, char* argc[]) {

    testing::InitGoogleTest(&argv, argc);
    RUN_ALL_TESTS();
    return 0;
}
