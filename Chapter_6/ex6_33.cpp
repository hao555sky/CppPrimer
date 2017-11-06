#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

void printVector(vector<int>::iterator beg, vector<int>::iterator end)
{
	if (beg != end){
		cout << (*beg) << endl;
		printVector(beg + 1, end);
	}
}
int main()
{
	vector<int> iv = {1, 2, 3, 4};
	for(auto i : iv)
		cout << i << endl;
	printVector(iv.begin(), iv.end());
	return 0;
}