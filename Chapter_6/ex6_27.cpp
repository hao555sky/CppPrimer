#include <iostream>
#include <initializer_list>

using std::initializer_list;
using std::cout;
using std::endl;

int add(initializer_list<int> ii)
{
	int result = 0;
	for(auto beg = ii.begin(); beg != ii.end(); ++beg)
		result += (*beg);
	return result;
}

int main()
{
	int result = add({1, 2, 3});
	cout << result << endl;
	return 0;
}