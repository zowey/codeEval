#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream file(argv[1]);

    file.seekg(0, std::ios::end);
    size_t size = file.tellg();
    std::string buffer(size, ' ');
    file.seekg(0);
    file.read(&buffer[0], size);


    cout << buffer.size() << endl;
    return 0;
}
