#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string str;
    string current;
    while (getline(stream, str)) {
        int count =1;
        
        for(int i=1; i<str.length(); ++i)
        {
            current = str.substr(i,1);
            if (current == str.substr(0,1))
                break;
            else
                ++count;
            
        }
        
        cout << count << endl;
    }
    return 0;
}