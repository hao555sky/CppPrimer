#include <iostream>
#include <istream>
#include <string>

using std::istream;
using std::string;
using std::cin;
using std::cout;
using std::endl;

istream& read(istream& is)
{
	string str;
	while(is >> str)
		cout << str << endl;
	is.clear();
	return is;
}


int main()
{
	read(cin);
	return 0;
}