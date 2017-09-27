#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void a()
{
	string s("Hello World!!!");
	decltype (s.size()) index = 0;
	while(index < s.size())
		s[index++] = 'X';
	cout << s << endl;
}

void b()
{
	string s("Hello World!!!");
	for(decltype (s.size()) index = 0; index < s.size(); ++index)
		s[index] = 'X';

	cout << s << endl;
}
int main()
{
	a();
	b();
	return 0;
}