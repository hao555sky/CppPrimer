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
#include <iostream>

int main()
{
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
```

## 联系1.4

> 我们的程序使用加法运算符+来将两个数相加。编写程序使用乘法运算符*，来打印两个数的积。

```cpp
#include <iostream>

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
#include <iostream>

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
#include <iostream>
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

> 编写程序，使用while循环将50到100的整数相加 [code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/ex1_9.cpp)

## 练习1.10

> 除了++ 运算符将运算对象的值增加1之外，还有一个递减运算符(—)实现将值减少1。编写程序，使用递减运算符载循环中按递减顺序打印出10到0之间的数。[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/ex1_10.cpp)

## 练习1.11

> 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/ex1_11.cpp)

## 练习1.12

> 下面的for循环完成了什么功能？sum的终值是多少？

```cpp
int sum = 0;
for(int i = -100; i <= 100; ++i)
  sum += i;
```

功能：把[-100，100]内的整数相加；终值为0

## 练习1.13

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/ex1_13.cpp)

## 练习1.14

> 对比for循环和while循环，两种形式的优缺点各是什么？

* for循环优点
  * 循环控制变量的初始化和修改都在for循环头中，形式简洁，适用于循环次数已知的情况
* while循环优点
  * 循环控制变量的初始化一般在while语句之前，修改一般在循环体中，不如for简洁，蛋适合循环次数不易预知的情况下。


## 练习1.16

> 编写程序，从cin读取一组数，输出其和

```cpp
#include <iostream>

int main()
{
	int sum = 0, value = 0;
	while(std::cin >> value)
		sum += value;
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}
```

## 练习1.17 && 练习1.18

> * 如果输入的所有值都是相等的，本节的程序会输出什么？如果没有重复值，输出又会是怎样的？
> * 编译并运行本节的程序，给它输入全部相等的值。再次运行程序，输入没有重复的值。

![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/screenshots/ex1_17.png)

## 练习1.19

> 修改你为1.4.1节练习1.10（第11页）所编写的程序（打印一个范围内的数），使其能处理用户输入的第一个数比第二个数小的情况

额。。我一开始就考虑到了该情况，故[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/ex1_11.cpp)

## 练习1.20

> 在网站http://www.informit.com/store/c-plus-plus-primer-9780321714114上，第一章的代码目录中包含了头文件Sales_item.h。将它拷贝到你的工作目录中。用它编写一个程序，读取一组书籍销售记录，将每条记录打印到标准输出上。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/ex1_20.cpp)

![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/screenshots/ex1_20.png)

## 练习1.21

> 编写程序，读取两个ISBN相同的Sales_item对象，输出他们的和。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/ex1_21.cpp)

![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/screenshots/ex1_21.png)

## 练习1.22

> 编写程序，读取多个具有相同ISBN的销售记录，输出所有记录的和

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/ex1_22.cpp)

![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/screenshots/ex1_22.png)

## 练习1.23

> 编写程序，读取多条销售记录，并统计每个ISBN（每本书）有几条销售记录。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/ex1_23.cpp)

##  练习1.24

> 输入表示多个ISBN的多条销售记录来测试上一个程序，每个ISBN的记录应该聚在一起

![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/screenshots/ex1_24.png)

## 练习1.25

> 借助网站上的Sales_item.h头文件，编译并运行本节给出的书店程序

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/ex1_25.cpp)

![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/screenshots/ex1_25.png)