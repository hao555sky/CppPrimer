/*
编写一段程序，比较两个string对象。再编写一段程序，比较两个C风格字符串的内容。
*/

#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string str1 = "hao", str2 = "tramp";
	if(str1 == str2)
		cout << "Equal" << endl;
	else if (str1 > str2)
		cout <<  "hao greater than tramp" << endl;
	else
		cout << "hao less than tramp" << endl;

	const char ca[] = "handsome", ca2[] = "hao";
	int result = strcmp(ca, ca2);
	if(result == 0)
		cout << "Equal" << endl;
	else if(result > 0)
		cout << "hao greater than tramp"  << endl;
	else
		cout << "hao less than tramp"  << endl;
	return 0;
}