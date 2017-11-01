#include <iostream>

using std::cout;
using std::endl;

size_t count_call()
{
	static size_t cnt = 0;
	return cnt++;
}

int main()
{
	for(size_t i = 0; i != 10; ++i)
		cout << count_call() << endl;
	return 0;
}