#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    
    ifstream stream(argv[1]);
    int sum = 0;
    string line;
    
    
    while (getline(stream, line)) {
        // Do something with the line
        sum += atoi(line.c_str());
    }
    
    cout << sum << endl;
    
    return 0;
}