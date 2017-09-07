# Chapter 1 - 开始

## 练习1.1

> 查阅你使用的编译器的文档，确定所使用的文件命名约定。变异并运行第二页的main程序

![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/screenshots/ex1_1.png)

## 练习1.2

> 改写程序，让它返回-1。返回值-1通常被当作程序错误的标识。重新编译并运行你的程序，观察你的系统如何处理main返回的错误标识。

![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/screenshots/ex1_2.png)

为什么返回255呢？[原因](http://www.jb51.net/article/73377.htm)

## 练习1.3

> 编写程序，在标准输出上打印Hello, World。

```cpp
#include<iostream>

int main()
{
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
```

## 联系1.4

> 我们的程序使用加法运算符+来将两个数相加。编写程序使用乘法运算符*，来打印两个数的积。

```cpp
#include<iostream>

int main()
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The multiply of " << v1 << " and " << v2 << " is " 
	          << v1 * v2 << std::endl;
	return 0;
}
```

## 练习1.5

> 我们将所有输出操作放在一条很长的语句中。重写程序，将每个运算对象的打印操作放在一条独立的语句中。

```cpp
#include<iostream>

int main()
{
	std::cout << "Enter two numbers: ";
	std::cout << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The multiply of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 * v2;
	std::cout << std::endl;
	return 0;
}
```

## 练习1.6

> 解释下面程序片段是否合法

不合法

> error: expected expression

修正

```cpp
std::cout << "The sum of " << v1 
	          << " and " << v2 
	          << " is " << v1 + v2 << std::endl;
```

## 练习1.7

> 编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息

```cpp
#include<iostream>
/*
* 注释不能嵌套在 /* 另一个注释 */ 中test2
*/
int main()
{
	return 0;
}
```



![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/screenshots/ex1_7.png)

## 练习1.8

> 指出下列哪些输出语句是合法的（如果有的话）

```cpp
std:: cout << "/*";
std:: cout << "*/";
std:: cout << /* "*/" */;
std:: cout << /* "/" / "/*" */;
```

答案

> 第一，二，四个合法。
>
> 第三个不合法![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/screenshots/ex1_8.png)
>
> 

## 练习1.9

> 编写程序，使用while循环将50到100的整数相加

## 练习1.10

> 除了++ 运算符将运算对象的值增加1之外，还有一个递减运算符(—)实现将值减少1。编写程序，使用递减运算符载循环中按递减顺序打印出10到0之间的数。

## 练习1.11

> 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。

