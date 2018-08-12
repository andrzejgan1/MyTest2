#include <gtest/gtest.h>
#include "../inc/isBalanced.hpp"

TEST(isBalanced, noPass)
{
    ASSERT_EQ(0, isBalanced(""));
}
TEST(isBalanced, pass)
{
}

int main(int argc, char **argv) {
        testing::InitGoogleTest(&argc, argv);
            return RUN_ALL_TESTS();
}
