#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream file(argv[1]);
    char ch;
    int fileSize = 0;
    
    while (file.get(ch)) {
        ++fileSize;
    }
    
    cout << fileSize << endl;
    return 0;
}