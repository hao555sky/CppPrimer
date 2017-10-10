/*
修改之前那个输出text第一段的程序，首先把text的第一段全都改成大写形式，然后再输出它。
*/

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
	string str;
	vector<string> svec;
	while(getline(cin, str))
		svec.push_back(str);

	for(auto st = svec.begin(); st != svec.end() && !st->empty(); ++st)
	{
		for(auto &c : (*st))
			c = toupper(c);
		cout << (*st);
	}

	return 0;
}