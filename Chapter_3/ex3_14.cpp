#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<int> ivec;
	int number;
	while(cin >> number)
		ivec.push_back(number);

	for (decltype (ivec.size()) index = 0; index != ivec.size(); ++index)
		cout << ivec[index] << endl;

	return 0;
}