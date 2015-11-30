#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

int main(int agrc, char* argv[])
{

	std::ifstream file(argv[1]);
	std::string str;
	std::string word;
	std::vector<std::string> words;

	while(std::getline(file, str))
	{
		std::istringstream iss(str);
		while(iss >> word) {
			words.push_back(word);
		}
	
	 	if (words.size() > 1) {
			words.pop_back();
			std::cout << words.back();
						
			std::cout << std::endl;
		}
		words.clear();
	}	
	return 0;
}


