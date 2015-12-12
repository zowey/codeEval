#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {

    ifstream file(argv[1]);
    int n;
    string str;
    string ch;
    int digit;
    int pos;
    bool isSelfDesc;

    while (getline(file, str))
    {
        isSelfDesc = true;
        for (int i=0; i<str.length(); ++i)
        {
            stringstream ss;
            ss << i;

            int counter = 0;
            pos = -1;
            while(1) {
                int pos = str.find(ss.str(), pos+1);
                if (pos == string::npos)
                    break;
                else
                    ++counter;
            }

            istringstream iss (str.substr(i,1));
            iss >> n;

            if (counter != n)
                isSelfDesc = false;


        }
         cout << isSelfDesc << endl;
    }


    return 0;
}
