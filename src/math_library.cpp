#include "math_library.hpp"

#include <algorithm>

namespace MathLibrary
{
    unsigned long long Theorem::BinomialCoefficient(size_t n, size_t k)
    {
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
}
