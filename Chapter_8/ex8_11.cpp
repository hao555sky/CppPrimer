#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::istringstream;
using std::cin;
using std::cout;
using std::endl;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

int main()
{
	string line, word;
	vector<PersonInfo> pvec;
	istringstream iss;
	while(getline(cin, line))
	{
		PersonInfo pi;
		iss.str(line);
		// istringstream iss(line);
		iss >> pi.name;
		while(iss >> word)
			pi.phones.push_back(word);
		iss.clear();
		pvec.push_back(pi);
	}

	for(auto pi : pvec)
	{
		cout << pi.name << " ";
		for(auto phone : pi.phones)
			cout << phone << " ";
		cout << endl;
	}

	return 0;
}