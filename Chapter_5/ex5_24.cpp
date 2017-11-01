/*
修改你的程序，使得当第二个数是0时抛出异常。先不要设定catch子句，运行程序并真的为除数输入0，看看会发生什么？
*/
#include <iostream>
#include<stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	if (!num2)
		throw runtime_error("Divisor can not be 0.");
	cout << num1 / num2 << endl;
	return 0;
}