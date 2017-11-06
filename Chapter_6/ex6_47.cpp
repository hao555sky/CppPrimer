#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

void printVector(vector<int>::iterator beg, vector<int>::iterator end)
{
	#ifndef NDEBUG
	    cout << "vector size is: " << end - beg << endl;
	#endif
	if(beg != end)
	{
		cout << (*beg) << endl;
		printVector(beg + 1, end);
	}
}

int main()
{
	vector<int> ivec = {1, 2, 3, 4, 5};
	printVector(ivec.begin(), ivec.end());
	return 0;
}