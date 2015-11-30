#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
    
    ifstream stream(argv[1]);
    string line;
    int repetition;
    int number;
    int current;
    int previous;
    
    
    while (getline(stream, line)) {

        previous = -1;
        repetition = 1;
        istringstream iss(line);
        
        while(iss >> current)
        {
            if (previous > -1)
            {
                if (previous == current)
                    ++repetition;
                else {
                    cout << repetition << " " << previous << " ";
                    repetition = 1;
                }
            }
            previous = current;

        }
        cout << repetition << " "<< previous << endl;
    }
    return 0;
} 
