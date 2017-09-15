## 练习2.1

> 类型int、long、long long和short的区别是什么？无符号类型和带符号类型的区别是什么？float和double的区别是什么？

C++保证short和int至少16位，long至少32位，long long至少64位

带符号可以表示正数，负数和零，而无符号只能表示不小于零的数字。

浮点型可表示单精度，双精度和扩展精度值。C++标准指定了一个浮点数有效位数的最小值，然后大多数编译器都实现了更高的精度。通常，float表示为32位，double为64位，long double为96位或者是128位来表示。

**建议**

* 当明确知晓数值不可能为负时，选用无符号类型
* 使用int执行整数运算。在实际应用中，short常常显得太小而long一般和int有一样的尺寸。如果你的数值超过了int的表示范围，选用long long。
* 执行浮点数运算选用double，因为float通常精度不够而且双精度浮点数和单精度浮点数的计算代价相差无几。事实上，对于某些机器，双精度运算甚至比单精度还快。long double提供的精度在一般情况下是没有必要的，况且它带来的运行时消耗也不容忽视。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_2/ex2_1.cpp)

![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_2/screenshots/ex2_1.png)

## 练习2.2

> 计算按揭贷款时，对于利率、本金和付款分别应选择何种数据类型？说明你的理由

使用`double`或者`float`

* 银行利率一般为0.30%
* 本金一般为¥888.88
* 付款一般为¥666.66

## 练习2.3

读程序写结果

```cpp
    unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
```

输出

> 32    4294967264    32    -32.   0    0

## 练习2.4

> 编写程序检查你的估计是否正确，如果不正确，请仔细研读本节知道弄明白问题所在。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_2/ex2_3.cpp)

![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_2/screenshots/ex2_3.png)

## 练习2.5

> 指出下述字面值的数据类型并说明每一组内集中字面值的区别
>
> (a) 'a', L'a', "a", L"a"
>
> (b) 10, 10u, 10L, 10uL, 012, 0xC
>
> (c) 3.14, 3.14f, 3.14L
>
> (d) 10, 10u, 10., 10e-2

(a): 字符字面值，宽字符字面值，字符串字面值，宽字符串字面值 

(b): 十进制整形，十进制无符号整型，十进制长整型，十进制无符号长整型，八进制整型，十六进制整型

(c): double，float，long double

(d): 十进制整形，十进制无符号整型，double，double

## 练习2.6

> 下面两组定义是否有区别，如果有，请叙述之：

```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```

第一行定义了两个十进制整形

第二行定义了两个八进制整型，但是八进制中没有9，故month变量无效

## 练习2.7

> 下述字面值表示何种含义？他们各自的数据类型是什么？
>
> (a) "Who goes with F\145rgus?\012"
>
> (b) 3.14e1L    (c) 1024f   (d) 3.14L

(a) Who goes with Fergus?(换行).   string

(b) 31.4    long double

(c) 1024.   float

(d) 3.14 long double

Reference:

* [ASCII Table](http://www.asciitable.com/)

## 练习2.8

> 请利用转义序列编写一段程序，要求先输出2M，然后转到新一行。修改程序使其输出2，然后输出制表符，再输出M，最后转到新一行。

```cpp
#include <iostream>

int main()
{
	std::cout << "\062\115\12";
	std::cout << "\062\t\115\012";
	return 0;
}
```

## 练习2.9

> 解释下列定义的含义。对于非法的定义，请说明错在何处并将其改正。
>
> (a) std::cin >> int input_value;              (b) int i = { 3.14 };
>
> (c) double salary = wage = 9999.99;    (d) int i = 3.14;

(a) 非法，error: expected '(' for function-style cast or type construction

```cpp
int input_value;
std::cin >> input_value;
```

(b) 非法，error: type 'double' cannot be narrowed to 'int' in initializer list

```Cpp
double i = { 3.14 };
```

(c) 非法，error: use of undeclared identifier 'wage'

```cpp
double wage;
double salary = wage = 9999.99;
```

(d) 合法，但是会丢失小数部分

```cpp
double i = 3.14;
```

## 练习2.10

> 下列棉量的初值分别是什么？

```cpp
std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_str;
}
```

* `global_str`类型为string，string类规定如果没有指定初值，则默认初始化为空串
* `global int`类型为内置类型int，且位于任何函数体之外，则被默认初始化为0
* `local_int`类型为内置类型int，且位于main函数体内，则不被初始化，值未定义
* `local_str`类型为string，string类规定如果没有指定初值，则默认初始化为空串

**Note**

> 定义于函数体内的内置类型的对象如果没有初始化，则其值未定义。类的对象如果没有显示地初始化，则其值由类确定

**Reference**

基本内置类型 实体书P30  PDF P56  [Link](http://en.cppreference.com/w/cpp/language/types)

## 练习2.11

> 指出下面的语句是声明还是定义
>
> (a) extern int ix = 1024;
>
> (b) int iy;
>
> (c) extern int iz;

(a) 定义

(b) 定义

(c) 声明

## 练习2.12

> 请指出下面的名字中哪些是非法的？
>
> (a) int double = 3.14;    (b) int _;    (c) int catch-22;
>
> (d) int 1\_or\_2 = 1;    (e) double Double = 3.14;

(a) (c) (d) 非法

**Note**

> 标识符由字母、数字和下划线组成，必须以字母或下划线开头，对大小写字母敏感

## 练习2.13

> 下面程序中j的值时多少？

```cpp
int i = 42;
int main()
{
    int i = 100;
    int j = i;
}
```

j的值为100，因为全局变量i被局部变量覆盖

## 练习2.14

> 下面的程序合法吗？如果合法，将输出什么？

```cpp
	int i = 100, sum = 0;
	for(int i = 0; i != 10; ++i)
		sum += i;
	std::cout << i << " " << sum << std::endl;
```

合法，输出100， 45

## 练习2.15

> 下面的哪个定义是不合法的？为什么？
>
> (a) int ival = 1.01;        (b) int &rval1 = 1.01;
>
> (c) int &rval2 = ival;    (d) int &rval3;

(a) (c) 合法

(b) 引用类型的初始值必须是一个对象

(d) 引用必须被初始化

## 练习2.16

> 考察下面的所有赋值然后回答：哪些赋值是不合法的？为什么？哪些赋值是合法的？他们执行了什么样的操作？
>
> int i = 0, &r1 = i;    double d = 0, &r2 = d;
>
> (a) r2 = 3.14159;    (b) r2 = r1;
>
> (c) i = r2;                (d) r1 = d;

(a) 合法，将3.14159赋值给了r2绑定的对象d

(b) 合法，r1绑定的对象i的值赋值给r2帮顶的对象d，自动转换类型

(c) 合法，将r2绑定的对象d的值赋值给i， 会损失精度

(d) 合法，将d的值复制给i

## 练习2.17

> 执行下面的代码段将输出什么结果？

```cpp
	int i, &ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl;
```

结果为10， 10

## 练习2.18

