#include "math_library.hpp"

#include <algorithm>
#include <stdexcept>

namespace MathLibrary
{
    unsigned long long Theorem::BinomialCoefficient(size_t n, size_t k)
    {
        if(n < k)
        {
            throw std::invalid_argument("Invalid input: n cannot be less than k");
        }
        if(k == 0 || k == n)
            return 1;
        k = std::min(k, n - k);
        unsigned long long c = 1;
        for(size_t i = 0; i < k; i++)
        {
            c *= (n - i);
            c /= (i + 1);
        }
        return c;
    }
    unsigned long long Function::Factorial(size_t n)
    {
        unsigned long long temp = 1;
        while(n)
        {
            temp *= n;
            --n;
        }
        return temp;
    }
}
