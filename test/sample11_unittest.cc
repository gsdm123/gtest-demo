

#include "gtest/gtest.h"

template <typename E>
E add(E a, E b) {
    E c = a + b;
    return c;
}

// The typed test suite
template <typename E>
class AddTest : public ::testing::Test {};

typedef ::testing::Types<int, unsigned int> DataTypes;

TYPED_TEST_SUITE(AddTest, DataTypes);

// The typed test case
TYPED_TEST(AddTest, TestAdd) {
    // Arrange
    TypeParam a = 5;
    TypeParam b = 7;
    TypeParam expected_sum = 12;

    // Act
    TypeParam result = add(a, b);

    // Assert
    EXPECT_EQ(result, expected_sum);
}
