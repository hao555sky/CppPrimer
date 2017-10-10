/*
Author: hao
Date: 2017/10
Description: 从cin读入一组词并把它们存入一个vector对象，然后设法把所有词都改写为大写形式。输出改变后的结果，每个词占一行
*/

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string word;
	vector<string> svec;
	while(cin >> word)
		svec.push_back(word);
	for(auto &str : svec)
		for (auto & c : str)
			c = toupper(c);

	for(decltype(svec.size()) index = 0; index != svec.size(); ++index)
		cout << svec[index] << endl;
	return 0;
}