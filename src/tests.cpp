#include <gtest/gtest.h>

#include "math_library.hpp"

TEST(BinomialCoefficientTest, HandlesPositiveInput)
{
    EXPECT_EQ(MathLibrary::Theorem::BinomialCoefficient(1, 1), 1);
    EXPECT_EQ(MathLibrary::Theorem::BinomialCoefficient(0, 0), 1);
    EXPECT_EQ(MathLibrary::Theorem::BinomialCoefficient(5, 2), 10);
    EXPECT_EQ(MathLibrary::Theorem::BinomialCoefficient(8, 0), 1);
    EXPECT_EQ(MathLibrary::Theorem::BinomialCoefficient(4, 2), 6);
    EXPECT_EQ(MathLibrary::Theorem::BinomialCoefficient(20, 10), 184'756);
}

TEST(BinomialCoefficientTest, HandlesWrongSizeInput)
{
    EXPECT_THROW(MathLibrary::Theorem::BinomialCoefficient(5, 6), std::invalid_argument);
    EXPECT_THROW(MathLibrary::Theorem::BinomialCoefficient(0, 2), std::invalid_argument);
    EXPECT_THROW(MathLibrary::Theorem::BinomialCoefficient(10, 11), std::invalid_argument);
    EXPECT_THROW(MathLibrary::Theorem::BinomialCoefficient(1, 2), std::invalid_argument);
    EXPECT_THROW(MathLibrary::Theorem::BinomialCoefficient(5, 11), std::invalid_argument);
}

TEST(FactorialTest, HandlesPositiveInput)
{
    EXPECT_EQ(MathLibrary::Function::Factorial(0), 1);
    EXPECT_EQ(MathLibrary::Function::Factorial(1), 1);
    EXPECT_EQ(MathLibrary::Function::Factorial(2), 2);
    EXPECT_EQ(MathLibrary::Function::Factorial(3), 6);
    EXPECT_EQ(MathLibrary::Function::Factorial(5), 120);
    EXPECT_EQ(MathLibrary::Function::Factorial(10), 3'628'800);
}