#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
    
    ifstream stream(argv[1]);
    int number;
    
    while (stream >> number) {
        
        int n = number;
        int sum = 0;
        
        while (n>0)
        {
            sum += n % 10;
            n /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}