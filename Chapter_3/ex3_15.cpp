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
	vector<string> svec;
	string s;
	while(cin >> s)
		svec.push_back(s);

	for (decltype (svec.size()) index = 0; index != svec.size(); ++index)
		cout << svec[index] << endl;

	return 0;
}
