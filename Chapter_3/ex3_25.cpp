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
	vector<int> ivec(11, 0);
	int num = 0, index = 0;
	while(cin >> num){
		index = num / 10;
		auto it = ivec.begin() + index;
		*it += 1;
	}

	for(auto it : ivec)
		cout << it << " ";

	return 0;
}