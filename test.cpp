#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {

    //ifstream stream(argv[1]);
    double sum;

    cout << pow(5,2) << " + " << pow(2,2) << endl;

    sum = 0;

    sum += pow(5,2);
    sum += pow(2,2);

    cout << "sum = " << sum << endl;

    sum = 0;

    sum += 25;
    sum += 4;

    cout << "sum = " << sum;

    return 0;
}
