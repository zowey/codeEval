#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {


    ifstream stream(argv[1]);

    int n;
    double sum;
    vector<int> numbers;

    while (stream >> n) {

        while(1) {

            numbers.push_back(n);
            sum = 0;

            while (n>0)
            {
                sum += (n % 10)*(n % 10);
                n /= 10;
            }
            if (sum == 1) {

                cout << 1 << endl;
                numbers.clear();
                break;

            } else {

                if ( std::find(numbers.begin(), numbers.end(), sum) != numbers.end() ) {

                        cout << 0 << endl;
                        numbers.clear();
                        break;

                }
                else
                {
                    n = sum;
                }



            }

        }
    }


    return 0;
}
