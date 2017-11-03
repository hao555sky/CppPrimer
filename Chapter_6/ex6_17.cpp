#include <iostream>
#include <string>

using std::string;
using std::tolower;
using std::cin;
using std::cout;
using std::endl;

bool HasUpper(const string &s)
{
	for (auto c : s){
		if (c >= 'A' && c <= 'Z')
			return true;
	}
	return false;
}

void lower(string &s)
{
	for(auto &c : s)
		c = tolower(c);
}

int main()
{
	string str;
	cin >> str;
	bool flag = HasUpper(str);
	cout << str  << " has upper word." << endl;
	lower(str);
	cout << "Lower str:" << str << endl;

	return 0;
}