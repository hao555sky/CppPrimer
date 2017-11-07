#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using std::vector;
using std::string;
using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::endl;

int ex6_21(int a, const int *b)
{
	return (a < (*b) ? (*b) : a);
}

void ex6_22(int * &a, int * &b)
{
    auto tmp = a;
    a = b;
    b = tmp;
}

void ex6_23_print_1(const int *beg, const int *end)
{
	while(beg != end)
		cout << *beg++ << endl;
}

void ex6_23_print_2(const int *arr, size_t size)
{
	for (int i = 0; i != size; ++i)
		cout << *(arr + i) << endl;
}

void ex6_24(const int ia [10])
{
	for(size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}

char &test_return_reference_lvalue(string &str, string::size_type ix)
{
	return str[ix];
}

// bool str_subrange(const string &str1, const string &str2)
// {
// 	if(str1.size() == str2.size())
// 		return str1 == str2;
// 	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
// 	for(decltype(size) i = 0; i != size; ++i){
// 		if(str1[i] != str2[i])
// 			return ;
// 	}
// }

int &get(int *array, int index){ return array[index]; }

string make_plural(size_t ctr, const string &word = "s", const string &ending = "")
{
    return (ctr > 1) ? word + ending : word;
}

// constexpr bool isShorter(const string& s1, const string &s2)
// {
// 	return s1.size() < s2.size();
// }

int (*pf)(int, int);

int main()
{
	vector<int*> ivec = {pf};

	// cout << isShorter("hao", "gege") << endl;

	// cout << make_plural(1, "success", "es") << endl;
	// cout << make_plural(2, "success", "es") << endl;
	// cout << make_plural(1, "failure", "s") << endl;
	// cout << make_plural(2, "failure", "s") << endl;
	// int ia[10];
	// for(int i = 0; i != 10; ++i)
	// 	get(ia, i) = i;

	// for(auto i : ia)
	// 	cout << i << endl;
	// string str1 = "hao", str2 = "gege";
	// cout << str_subrange(str1, str2) << endl;


	// string s("a value");
	// cout << s << endl;
	// test_return_reference_lvalue(s, 0) = 'A';
	// cout << s << endl;

	// int i = 0, j[2] = {0, 1};
	// ex6_23_print_1(begin(j), end(j));
	// ex6_23_print_2(j, 2);
	// ex6_23_print_2(&i, 1);

	// int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	// int b[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	// ex6_24(a);
	// ex6_24(b);

	// int a, b;
	// cin >> a >> b;
	// int *pa = &a, *pb = &b;
	// cout << "pa is: " << pa << " pb is : " << pb << endl;
	// ex6_22(pa, pb);
	// cout << "pa is: " << pa << " pb is : " << pb << endl;
	// cout << ex6_21(a, &b) << endl;
    return 0;
}
