/*
编写一段程序，从标准输入中读取若干string对象并查找连续重复出现的单词。
所谓连续重复出现的意思是：一个单词后面紧跟着这个单词本身。
要求记录连续重复出现的最大次数以及对应的单词。如果这样的单词存在，输出重复出现的最大次数；
如果不存在，输出一条信息说明任何单词都没有连续出现过。
例如，如果输入是 
how now now now brown cow cow 
那么输出应该表明单词now连续出现了3次。
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string word, previous, final;
	int count = 0, max_count = 0;

	while(cin >> word)
	{
		if (word == previous)
			++count;
		else{
			previous = word;
			count = 1;
		}
		if (max_count < count){
			max_count = count;
			final = word;
		}
	}
	if (max_count <= 1)
		cout << "No continuous word." << endl;
	else
		cout << final << " : " << max_count << endl;
	return 0;
}

