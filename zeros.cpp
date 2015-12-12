#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int main(int argc, char *argv[]) {


    ifstream stream(argv[1]);
    unsigned n,range,counterZeros, counterNumbers, x;

    while (stream >> n >> range) {

        counterNumbers = 0;

        for (short i=1; i<=range; ++i)
        {
            counterZeros = 0;

            x = i;

            do
            {
                if ((x & 1) == 0)
                    ++counterZeros;
            } while (x >>= 1);

            if (n == counterZeros)
                ++counterNumbers;

        }
        cout << counterNumbers << endl;
    }
    return 0;
}
