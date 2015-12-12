#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

    ifstream file(argv[1]);
    string str;
    string c;
    int pos;
    int lastpos;

    while (getline(file, str))
    {
        if (!str.empty()){
            pos = str.find(",");
            c = str.substr(pos+1,1);
            str.erase(pos, 2);
            lastpos = string::npos;

            pos = -1;
            while(1) {
                pos = str.find(c, pos+1);
                if (pos == string::npos)
                    break;
                else
                    lastpos = pos;
            }

            if (lastpos !=  string::npos)
                cout << lastpos << endl;
            else
                cout << -1 << endl;
        }
    }


    return 0;
}
