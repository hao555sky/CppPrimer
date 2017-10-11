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
	vector<int> ivec;
	int num;
	while(cin >> num)
		ivec.push_back(num);

	if(ivec.empty()){
		cout << "No numbers!" << endl;
		return -1;
	}
	else if(ivec.size() == 1)
		cout << ivec[0] << "Only one number!" << endl;
	else{
		for(auto i = ivec.cbegin(); i != ivec.cend() - 1; ++i)
			cout << *i + (*(i+1)) << " ";
		cout << endl;
	}

	for(auto beg = ivec.begin(), end = ivec.end() - 1; beg <= end; ++beg, --end)
		cout << *beg + *end << " ";
	cout << endl;

	return 0;
}