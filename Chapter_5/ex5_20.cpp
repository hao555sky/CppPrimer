/*
编写一段程序，从标准输入中读取string对象的序列直到连续出现两个相同的单词或者所有单词都读完为止。
使用while循环一次读取一个单词，当一个单词连续出现两次时使用break语句终止循环。
输出连续重复出现的单词，或者输出一个消息说明没有任何单词是连续重复出现的。
*/
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string word, previous;
	bool flag = false;
	while(cin >> word){
		if (word == previous){
			flag = true;
			break;
		}
		else
			previous = word;
	}
	if(flag)
		cout << word << " occurs twice." << endl;
	else
		cout << "no word was repeated." << endl;
	return 0;
}