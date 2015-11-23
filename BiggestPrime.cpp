#include <iostream>
#include <cmath>

bool isPrime(int n)
{
    for (int i=2; i< n/2; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    for(int i=0; i<=900; ++i)
    {
        if ( (1000-i)%10 == ((int)(1000 - i))/100 )
        {
            if (isPrime(1000 - i))
            {
                    std::cout << (1000 - i) << std::endl;
                    break;
            }
            else
                continue;
        }
    }
    return 0;
}



