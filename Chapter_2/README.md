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

> 编写代码分别更改指针的值以及指针所指对象的值。

```cpp
	int i1 = 0, i2 = 1;
	int *p1 = &i1, *p2 = p1;
	p1 = &i2;
	*p2 = i2;
```

## 练习2.19

> 说明指针和引用的主要区别

**定义**

指针是指向另外一种类型的复合类型

引用是一个对象的别名

**不同**

* 指针本身就是一个对象，允许对指针赋值和拷贝；引用是对象的别名，并非对象。
* 在指针的生命周期中可以先后指向几个不同的对象；引用绑定对象后，无法重新绑定其他对象。
* 指针无需在定义时赋初值，若没有被初始化，则有一个不确定的值；引用必须被初始化

## 练习2.20

> 请叙述下面这段代码的作用

```cpp
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;
```

求i的平方，答案为1764，并将值通过指针赋值给i

## 练习2.21

> 请解释下述定义。在这些定义中有非法的吗？如果有，为什么？

```cpp
int i = 0;
(a) double* dp = &i;    (b) int *ip = i;    (c) int *p = &i;
```

(a). 非法，i为int型变量，dp为指向double类型的指针，类型不匹配

(b). 非法，ip为指向int型变量的指针，不能用i的值初始化指针，需要取地址符

(c). 合法

## 练习2.22

> 假设p是一个int型指针，请说明下述代码的含义

```cpp
if (p) //...
if (*p) //...
```

* 若指针p不为空指针
* 若指针p所指向的int型对象不为0

## 练习2.23

> 给定指针p，你能知道它是否指向了一个合法的对象吗？如果能，叙述判断的思路；如果不能，也请说明原因

不能，首先不能确定指针是否合法，其次不能确定指针指向的内容是否合法，也就是说很可能访问一个本不存在的位置上的本不存在的对象，糟糕的是，若指针合法，指向的地址空间有内容，更难分清是否合法还是非法。

## 练习2.24

> 在下面这段代码中为什么p合法而lp非法？

```cpp
int i = 42;    void *p = &i;    long *lp = &i;
```

void*是一种特殊的类型指针，可用于存放任意对象的地址。但是对于long *类型的指针，不能用int 型对象地址初始化。

## 练习2.25

> 说明下列变量的类型和值

```cpp
(a) int* ip, i, &r = i;    (b) int i, *ip = 0;    (c) int* ip, ip2;
```

* (a) ip类型为int型指针，值不确定；i为int型变量，若为全局变量，值为0，若为局部变量，则不确定；r为int型引用
* (b) i为int型变量，值同上；ip为int型指针，空指针
* (c) ip为指向int型指针，ip2位int型变量

## 练习2.26

> 下面那些句子是合法的？如果有不合法的句子，请说明为什么？

```cpp
(a) const int buf;    (b) int cnt = 0;    (c) const int sz = cnt;    (d) ++cnt; ++sz;
```

* (a) 不合法，const对象必须初始化
* (b) 合法
* (c) 合法
* (d) 不合法，sz为const对象，不能被修改，对于const类型对象，只能执行不改变其内容的操作

## 练习2.27

> 下面的哪些初始化是合法的？请说明原因

```cpp
(a) int i = -1, &r = 0;          (b) int *const p2 = &i2;
(b) const int i = -1, &r = 0;    (d) const int *const p3 = &i2;
(e) const int *p1 = &i2;         (f) const int &const r2;
(g) const int i2 = i, &r = i;
```

* (a) 非法，r必须引用一个对象，不允许非const引用临时量
* (b) 合法
* (c) 合法，r绑定到了一个临时量
* (d) 合法 ，指向常量对象的常量指针，即指针内容和指针指向的对象都不允许改变
* (e) 合法，指向常量对象的指针
* (f) 不合法，r2是引用，不能为const
* (g) 合法

**Reference**

[C++ const 引用详解](http://www.cnblogs.com/yinble/archive/2013/04/23/3038652.html)

## 练习2.28

> 说明下面的这些定义是什么意思。挑出其中不合法的。

```cpp
(a) int i, *const cp;          (b) int *p1, *const p2;
(c) const int ic, &r = ic;     (d) const int *const p3;
(e) const int *p;
```

* (a) 非法，i为int型变量，cp为常量指针，const 指针必须被初始化
* (b) 非法，p1为int型指针，p2为int型常量指针，const指针必须被初始化
* (c) 非法，ic为常量对象，r为指向int型常量对象的引用，const int必须被初始化
* (d) 非法，p3为指向int型常量对象的常量指针。const对象必须被初始化
* (e) 合法，p为指向int型常量的指针

## 练习2.29

> 假设已有上一个练习中定义的那些变量，则下面的哪些语句是合法的？请说明原因。

```cpp
(a) i = ic;      (b) p1 = p3;
(c) p1 = &ic;    (d) p3 = &ic;
(e) p2 = p1;     (f) ic = *p3;
```

* (a) 合法，const int赋值给int
* (b) 非法，指向int型常量的常量指针p3不能赋值给非常量指针
* (c) 非法，ic为int型常量对象，不能复制给非常量指针
* (d) 合法，p3为指向常量对象的常量指针
* (e) 合法，const 指针允许指向非const对象
* (f) 非法，ic为int型常量对象，不允许做改变其值的操作

