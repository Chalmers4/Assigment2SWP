#include <gtest/gtest.h>
#include "greeting.h"

TEST(GreetingTest, GreetUser) {
    EXPECT_EQ(greetUser("John"), "Hello, John! Welcome to the CLI app.");
    EXPECT_EQ(greetUser("Alice"), "Hello, Alice! Welcome to the CLI app.");
}
