#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

void printVector(vector<int> iv)
{
	if(iv.size() > 1){
		iv.pop_back();
		printVector(iv);
	}
	cout << iv[iv.size()] << endl;
}
int main()
{
	vector<int> iv = {1, 2, 3, 4};
	for(auto i : iv)
		cout << i << endl;
	printVector(iv);
	return 0;
}