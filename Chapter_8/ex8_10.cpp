#include <iostream>
#include <sstream>
#include <istream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
	std::fstream input_file_stream(std::string("ex8_10.txt"));
	std::string line;
	std::vector<std::string> svec;
	if(input_file_stream){
		while(getline(input_file_stream, line)){
			svec.push_back(line);
		}
	}

	for(auto line : svec){
		std::istringstream iss(line);
		std::string word;
		while (iss >> word)
			std::cout << word << std::endl;
	}
	return 0;
}