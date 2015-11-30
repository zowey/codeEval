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
	
	
		while(words.size() > 0) {
			std::cout << words.back();
			words.pop_back();			

			if (words.size() == 0)
				std::cout << std::endl;
			else
				std::cout << " ";
		}
	}	
	return 0;
}


