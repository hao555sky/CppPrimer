#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void a()
{
	string str1, str2;
	cin >> str1 >> str2;

	if (str1 == str2)
		cout << str1 << " equals " << str2 <<endl;
	else if (str1 > str2)
		cout << str1 << endl;
	else
		cout << str2 << endl;

}

void b()
{
	string str1, str2;
	cin >> str1 >> str2;

	if (str1.size() == str2.size())
		cout << "size equals." <<endl;
	else if(str1.size() > str2.size())
		cout << str1 << endl;
	else
		cout << str2 << endl;
}
int main()
{
	a();
	b();
	return 0;
}