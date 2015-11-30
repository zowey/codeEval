#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    
    for (int i=2; i<=sqrt(n); ++i)
        if (n % i == 0)
            return false;
    
    return true;
}

int main(int argc, char *argv[]) {
    
    for (int i=1; i<100; ++i)
    {
        if (isPrime(i) == true)
            cout << i << endl;
    }
    return 0;
}