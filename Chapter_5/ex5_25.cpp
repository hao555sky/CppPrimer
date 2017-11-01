/*
修改上一题的程序，使用try语句块去捕获异常。catch子句应该为用户输入一条提示信息，询问其是否输入新数并重新执行try语句块的内容。
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
	char ch;
	while (cin >> num1 >> num2){
		try{
			if (num2 == 0)
				throw runtime_error("Divisor can not be 0.");
			cout << num1 / num2 << endl;
		}catch(runtime_error err){
			cout << err.what() << "\nTry Again? Enter y or n" << endl;
			cin >> ch;
			if (!cin || ch == 'n')
				break;
		}
	}
	return 0;
}