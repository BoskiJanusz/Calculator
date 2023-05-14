#pragma once

#include <cstddef>

namespace MathLibrary
{
    class Theorem
    {
    public:
        static unsigned long long BinomialCoefficient(size_t n, size_t k);
    };
    class Function
    {
    public:
        static unsigned long long Factorial(size_t n);
    };
}