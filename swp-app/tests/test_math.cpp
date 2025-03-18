#include <gtest/gtest.h>
#include "../include/math.h"

TEST(ArithmeticTest, Addition) {
    EXPECT_EQ(add(10, 5), 15);
}

TEST(ArithmeticTest, Subtraction) {
    EXPECT_EQ(subtract(10, 5), 5);
}

TEST(ArithmeticTest, Multiplication) {
    EXPECT_EQ(multiply(10, 5), 50);
}

TEST(ArithmeticTest, Division) {
    EXPECT_EQ(divide(10, 5), 2);
    EXPECT_THROW(divide(10, 0), std::invalid_argument);
}
