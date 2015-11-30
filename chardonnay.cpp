#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{

	ifstream stream(argv[1]);
	string line;
	string word;
	bool isLetters;
	vector<char> letters;
	while(getline(stream, line)) {
		isLetters = true;	
		
		for(int i=line.size()-1; i>=0; --i)
		{
			if (line.at(i) != ' ')
			{
				if (line.at(i) == '|')
				{
					isLetters = false;
				}
				else if (isLetters == true)
				{
					letters.push_back(line.at(i));
				}
				else
				{
				 for (int j=0; j<letters.size();++j) {
				  if(line.at(i)== letters[j])
				   letters.erase(letters.begin()+j);
					}
				}
			}
		} 
		
	}
	return 0;
}
