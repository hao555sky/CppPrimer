#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s("Hello World!!!");
	for(auto &c : s)
		c = 'X';
	cout << s << endl;
	return 0;
}