#include <iostream>
#include <istream>
#include <sstream>
#include <string>

using std::string;
using std::istringstream;
using std::istream;
using std::cout;
using std::endl;

istream& read(istream& is)
{
	string str;
	while(is >> str)
		cout << str;
	is.clear();
	return is;
}

int main()
{
	istringstream iss("hello, hao");
	read(iss);
	return 0;
}