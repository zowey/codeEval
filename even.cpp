#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int main(int argc, char *argv[]) {


    ifstream stream(argv[1]);
    short n;

    while (stream >> n) {

        if (n % 2 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;

    }
    return 0;
}
