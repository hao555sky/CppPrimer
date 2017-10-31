/*
编写一段程序，使用do while循环重复地执行下述任务：首先提示用户输入两个string对象，然后挑出较短的那个并输出它。
*/

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string choice;
	do{
		string str1, str2;
		cout << "Please enter two strings" << endl;
		cin >> str1 >> str2;
		cout << ((str1.size() < str2.size()) ? str1 : str2) << endl;
		cout << "Again? y/n" << endl;
		cin >> choice;

	}while(!choice.empty() && choice[0] == 'y');
	return 0;
}