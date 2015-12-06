#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int modulo(int i, int j)
{
    int sum=0;
    int mod = 0;
    
    int div = i / j;
    
    mod = i - div * j;
    
    return mod;
}

int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    int f;
    int s;
    
    while (getline(stream, line)) {
        // Do something with the line
        int pos = line.find(',');
        if (pos != string::npos)
        {
            string first = line.substr(0,pos);
            string second = line.substr(pos+1);
            
            istringstream iss1(first);
            istringstream iss2(second);
            
            iss1 >> f;
            iss2 >> s;
            
            int res = modulo(f,s);
            cout << res << endl;
            
        }
    }
    return 0;
}