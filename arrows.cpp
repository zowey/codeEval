#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    fstream file(argv[1]);
    string line;
    string arrow1 = ">>-->";
    string arrow2 = "<--<<";
    int counter;
    int pos;
    
    while(getline(file,line)) {
        
        counter =0;
        pos =-1;
        
        while (pos < (int)line.length())
        {
            pos = line.find(arrow1, pos+1);
            if (pos != string::npos)
                counter++;
            else
                break;
            
        }
        pos = -1;
        while (pos < (int)line.length())
        {
            pos = line.find(arrow2, pos+1);
            if (pos != string::npos)
                counter++;
            else
                break;
            
        }
        cout << counter << endl;
    }
    
    return 0;
}