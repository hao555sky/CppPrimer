#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// 从标准输入中一次读入一整行
void a()
{
	string line;
	while(getline(cin, line))
		cout << line << endl;
}

// 从标准输入中一次读入一个词
void b()
{
	string word;
	while(cin >> word)
		cout << word <<endl;
}

int main()
{
	a();
	b();
	return 0;
}