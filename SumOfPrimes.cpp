#include <iostream>
#include <cmath>

bool isPrime(int n)
{
    for (int i=2; i<= sqrt(n); ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int counter = 0;
    int sum = 0;
    int current = 2;

    while (counter < 1000)
    {
        if (isPrime(current))
        {
            sum += current;
            ++counter;

        }
        ++current;
    }

    std::cout << sum << std::endl;

    return 0;
}
