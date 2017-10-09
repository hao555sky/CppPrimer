#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string word;
	vector<string> svec;
	while(cin >> word)
		svec.push_back(word);
	for(auto &str : svec)
		for (auto & c : str)
			c = toupper(c);

	for(decltype(svec.size()) index = 0; index != svec.size(); ++index)
		cout << svec[index] << endl;
	return 0;
}