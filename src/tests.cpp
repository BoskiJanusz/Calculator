#include <gtest/gtest.h>

#include "math_library.hpp"

TEST(BinomialCoefficientTest, HandlesPositiveInput)
{
    EXPECT_EQ(MathLibrary::Theorem::BinomialCoefficient(1, 1), 1);
    EXPECT_EQ(MathLibrary::Theorem::BinomialCoefficient(5, 2), 10);
    EXPECT_EQ(MathLibrary::Theorem::BinomialCoefficient(8, 0), 1);
    EXPECT_EQ(MathLibrary::Theorem::BinomialCoefficient(4, 2), 6);
    EXPECT_EQ(MathLibrary::Theorem::BinomialCoefficient(20, 10), 184'756);
}