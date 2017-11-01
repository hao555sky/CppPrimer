/*
修改5.5.1节（第171页）练习题的程序，使其找到的重复单词必须以大写字母开头。

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
		if (word[0] < 'A' || word[0] > 'Z')
			continue;
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