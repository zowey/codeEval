#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int multiples(int i, int j)
{
    int m=0;
    while(m*j < i)
    {
        ++m;
    }
    return m*j;
}
int main(int argc, char *argv[]) {
    
    ifstream stream(argv[1]);
    int f;
    int s;
    string line;
    while (getline(stream, line)) {
        
        int pos = line.find(',');
        if (pos > 0 && pos < 40)
        {
            string first = line.substr(0,pos);
            string second = line.substr(pos+1);
            
            istringstream iss(first);
            istringstream iss2(second);
            
            iss >> f;
            iss2 >> s;
            
            int res = multiples(f,s);
            cout << res << endl;
            
        }
        
    }
    return 0;
}