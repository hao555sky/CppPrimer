/*
请使用迭代器重做3.3.3节（第94页）的第一个练习。
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
	cout << "v1 " << v1.size() <<" ";
	for(auto it = v1.cbegin(); it != v1.cend(); ++it)
		cout << (*it) <<" ";
	cout << endl;

	vector<int> v2(10);
	cout << "v2 " << v2.size() <<" ";
	for(auto it = v2.cbegin(); it != v2.cend(); ++it)
		cout << (*it) <<" ";
	cout << endl;

	vector<int> v3(10, 42);
	cout << "v3 " << v3.size() <<" ";
	for(auto it = v3.cbegin(); it != v3.cend(); ++it)
		cout << (*it) <<" ";
	cout << endl;
	
	vector<int> v4{10};
	cout << "v4 " << v4.size() <<" ";
	for(auto it = v4.cbegin(); it != v4.cend(); ++it)
		cout << (*it) <<" ";
	cout << endl;
	
	vector<int> v5{10, 42};
	cout << "v5 " << v5.size() <<" ";
	for(auto it = v5.cbegin(); it != v5.cend(); ++it)
		cout << (*it) <<" ";
	cout << endl;
	
	vector<string> v6{10};
	cout << "v6 " << v6.size() <<" ";
	for(auto it = v6.cbegin(); it != v6.cend(); ++it)
		cout << (*it) <<" ";
	cout << endl;
	
	vector<string> v7{10, "hi"}; 
	cout << "v7 " << v7.size() <<" ";
	for(auto it = v7.cbegin(); it != v7.cend(); ++it)
		cout << (*it) <<" ";
	cout << endl;
	
}