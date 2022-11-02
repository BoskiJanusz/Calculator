#include <iostream>
#include <iomanip>
long double binominal(int  n, int k)
{
    if(k == 0 || k == n)
        return 1;
    k = std::min(k, n-k);
    long double c = 1, d = 1;
    for(int i = 0; i < k; i++)
    {
        c = (c * (n - i)) / (d *(k-i));
    }
        return c;
}

int main()
{
    int input, n, k;

    std::cin >> input;

    for(int i = 0; i < input; i++)
    {
        std::cin >> n >> k;
        std::cout << std::fixed << std::setprecision(0) << binominal(n, k) << std::endl;
    }
    return 0;
}