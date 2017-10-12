/*
编写一段程序，定义两个字符数组并用字符串字面值初始化他们；
接着再定义一个字符数组存放前两个数组连接后的结果。
使用strcpy和strcat把前两个数组的内容拷贝到第三个数组中。
*/

#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::cout;
using std::endl;

int main()
{
	const char arr1[] = "hello", arr2[] = "world!";
	char arr3[15];
	strcpy(arr3, arr1);
	strcat(arr3, " ");
	strcat(arr3, arr2);

	for(auto a : arr3)
		cout << a;
	cout << endl;
	return 0;
}