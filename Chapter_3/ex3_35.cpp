/*
编写一段程序，利用指针将数组中的元素置为0
*/

#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	constexpr size_t size = 10;
	int arr[size] = {};
	for(size_t index = 0; index != size; ++index)
		arr[index] = index;

	for(auto i : arr)
		cout << i << " ";

	int *pbeg = begin(arr), *pend = end(arr);

	while(pbeg != pend){
		*pbeg = 0;
		++pbeg;
	}

	for(auto i : arr)
		cout << i << " ";

	cout << endl;
	return 0;
}