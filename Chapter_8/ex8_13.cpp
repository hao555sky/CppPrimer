#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;
using std::ostringstream;
using std::cout;
using std::endl;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

int main()
{
	ifstream input_file_stream(string("ex8_13.txt"));
	string line, word;
	vector<PersonInfo> pvec;
	while(getline(input_file_stream, line))
	{
		istringstream iss(line);
		PersonInfo pi;
		iss >> pi.name;
		while(iss >> word)
			pi.phones.push_back(word);
		pvec.push_back(pi);
	}

	for(auto pi : pvec)
	{
		cout << pi.name << " ";
		for(auto phone : pi.phones)
			cout << phone << " ";
		cout << endl;
	}

	for(const auto &entry : pvec)
	{
		ostringstream formatted, badNums;
		for(const auto &nums : entry.phones)
		{
			if(!valid(nums))
				badNums << " " << nums;
			else
				formatted << " " << format(nums);
		}
		if(badNums.str().empty())
			os << entry.name << " " << formatted.str() << endl;
		else
			cerr << "input error: " << entry.name << " invalid number(s)" << badNums.str() << endl;
	}

}