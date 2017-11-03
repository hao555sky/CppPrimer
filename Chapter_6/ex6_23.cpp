#include <iostream>
#include <iterator>

using std::begin;
using std::end;
using std::cout;
using std::endl;

void print(int *p)
{
	if(p)
		cout << *p << endl;
	cout << endl;
}

void print(const int *beg, const int *end)
{
	while(beg != end)
		cout << *beg++ << endl;
	cout << endl;
}

void print(const int arr[], size_t size)
{
	for(int i = 0; i != size; ++i)
		cout << *(arr + i) << endl;
	cout << endl;
}

void print(const int (&arr)[2])
{
	for(auto i : arr)
		cout << i << endl;
	cout << endl;
}

void print(const char *p)
{
	if (p)
		while(*p)
			cout << *p++;
	cout << endl;
}

int main()
{
	int i = 0, j[2] = {0, 1};
	print(&i);
	print(begin(j), end(j));
	print(&i, 1);
	print(j, 2);
	print(static_cast<const int (&)[2]>(j));

	char ch[4] = "hao";
	print(ch);

	return 0;
}