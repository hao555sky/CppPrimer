/*
Author: hao
Date: 2017/10
Description: 编写程序，把练习3.13中vector对象的容量和具体内容输出出来。
             检验你之前的回答是否正确，如果不对，回过头重新学习3.31节（第87页）直到弄明白为止
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
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"}; 

    cout << "v1 " << v1.size() << " ";
	for(decltype(v1.size()) index = 0; index != v1.size(); ++index)
		cout << v1[index] <<" ";
	cout << endl;

	cout << "v2 " << v2.size() <<" ";
	for(decltype(v2.size()) index = 0; index != v2.size(); ++index)
		cout << v2[index] <<" ";
	cout << endl;

	cout << "v3 " << v3.size() <<" ";
	for(decltype(v3.size()) index = 0; index != v3.size(); ++index)
		cout << v3[index] <<" ";
	cout << endl;

	cout << "v4 " << v4.size() <<" ";
	for(decltype(v4.size()) index = 0; index != v4.size(); ++index)
		cout << v4[index] <<" ";
	cout << endl;

	cout << "v5 " << v5.size() <<" ";
	for(decltype(v5.size()) index = 0; index != v5.size(); ++index)
		cout << v5[index] <<" ";
	cout << endl;

	cout << "v6 " << v6.size() <<" ";
	for(decltype(v6.size()) index = 0; index != v6.size(); ++index)
		cout << v6[index] <<" ";
	cout << endl;

	cout << "v7 " << v7.size() <<" ";
	for(decltype(v7.size()) index = 0; index != v7.size(); ++index)
		cout << v7[index] <<" ";
	cout << endl;

	return 0;

}