#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {

    ifstream file(argv[1]);
    string str;
    string word;
    int maxLength;
    string maxWord;

    while (getline(file, str))
    {
       maxLength = 0;
       istringstream iss(str);

       while (iss >> word)
       {
            if (word.length() > maxLength)
            {
                maxLength = word.length();
                maxWord = word;
            }
       }
       cout << maxWord << endl;
    }


    return 0;
}
