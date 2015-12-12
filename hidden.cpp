#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {

    ifstream stream(argv[1]);
    string line;
    string visible;

    while (stream >> line) {

        char ch;
        visible.clear();

        for(short i=0; i<line.size();++i)
        {
            ch = line[i];
            if (ch >= 'a' && ch <= 'j')
                visible += (char)(ch - 49);

            if (ch >= 48 && ch <= 57)
                visible += ch;
        }
        if (visible.empty())
            cout << "NONE" << endl;
        else
            cout << visible << endl;

    }
    return 0;
}
