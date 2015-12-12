#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {

    ifstream file(argv[1]);
    int n, first, second;
    string str;
    string delimiter = ",";
    size_t pos = 0;

    while (getline(file, str))
    {

        pos = str.find(delimiter);
        istringstream iss1(str.substr(0, pos));
        iss1 >> n;
        str.erase(0, pos + delimiter.length());

        pos = str.find(delimiter);
        istringstream iss2(str.substr(0, pos));
        iss2 >> first;
        str.erase(0, pos + delimiter.length());

        istringstream iss3(str);
        iss3 >> second;

        if ( ((n & (1 << (first-1))) != 0) == ((n & (1 << (second-1))) != 0) )
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }


    return 0;
}

