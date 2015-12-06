#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

typedef unsigned long long F;

F fibonacci(F n)
{
    int i = 0;
    F f1 = 0;
    F f2 = 1;
    F fi;
    
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    
    
    for (int i=2; i<=n; ++i)
    {
        fi = f1+f2;
        f1 = f2;
        f2 = fi;
    
    }
    
    return fi;
    
}

int main(int argc, char* argv[])
{
    fstream file(argv[1]);
    string line;
    int number;
    int result;
    
    while (getline(file, line))
    {
        istringstream iss(line);
        while(iss >> number)
        {
            result = fibonacci(number);
            cout << result << endl;
        }
        
    }

    return 0;
}