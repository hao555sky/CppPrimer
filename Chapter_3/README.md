## 练习3.1： [A](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_1_a.cpp) | [B](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_1_b.cpp)

## 练习3.2

> 编写一段程序从标准输入中一次读入一整行，然后修改该程序使其一次读入一个词。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_2.cpp)

## 练习3.3

> 请说明string类的输入运算符和getline函数分别是如何处理空白字符的

**getline**

getline函数可以保留输入时的空白符，参数是一个输入流和一个string对象，函数从给定的输入流中读入内容，直到遇到换行符为止（换行符也被读入），然后将读入内容存放到string对象中（不会存放换行符）。getline函数只要一遇到换行符就会结束读取操作并返回结果，哪怕输入的一开始就是换行符。如果输入的一开始就是换行符，则结果是空string。

**输入运算符**

使用标准库中的iostream来读写string时，会自动忽略开头的空白（即空格符，换行符，制表符等），并从第一个真正的字符开始读，直到遇到下一个空白为止。

## 练习3.4

> 编入一段程序输入两个字符串，比较其是否相等并输出结果。如果不相等，输出较大的那个字符串。改写上述程序，比较输入的两个字符串是否等长，如果不等长，输出长度较大的那个字符串。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_4.cpp)

## 练习3.5

> 编写一段程序从标准输入中读入多个字符串并将它们连接在一起，输出连接成的大字符串。然后修改上述程序，用空格把输入的多个字符串分割开来。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_5.cpp)

## 练习3.6

> 编写一段程序，使用范围for语句将字符串内的所有字符用X代替。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_6.cpp)

## 练习3.7

> 就上一题完成的程序而言，如果将循环控制变量的类型设为char将发生什么？先估计一下结果，然后实际编程进行验证。

估计：无法实现所有字符被X代替的结果。[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_7.cpp)

**做法**：将循环变量定义成引用类型，由于引用是给定对象的别名，故循环控制变量被依次绑定到序列的每个元素，使用该引用就可以改变绑定的字符

## 练习3.8

> 分别用while循环和传统的for循环重写第一题的程序，你觉得哪种形式更好呢？为什么？

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_8.cpp)

## 练习3.9

> 下面的程序有何作用？它合法吗？如果不合法，为什么？

```cpp
string s;
cout << s[0] << endl;
```

作用就是获取s第一个元素；不合法, 因为s未定义。

## 练习3.10

> 编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_10.cpp)

## 练习3.11

> 下面的范围for语句合法吗？如果合法，c的类型是什么？

```cpp
const string s = "Keep out!";
for (auto &c : s) { /* ... */ }
```

如果不试图进行改变c的值，则合法，否则非法。c的类型是const char &

## 练习3.12

> 下列vector对象的定义有不正确的吗？如果有，请指出来。对于正确的，描述其执行结果；对于不正确的，说明其错误的原因。

```cpp
(a) vector<vector<int>> ivec; // 正确
(b) vector<string> svec = ivec; // 不正确，类型不一致
(c) vector<string> svec(10, "null"); // 正确，vector有10个元素，值为"null"
```

## 练习3.13

> 下列的vector对象各包含多少个元素？这些元素的值分别是多少？

```cpp
(a) vector<int> v1;              (b) vector<int> v2(10);
(b) vector<int> v3(10, 42);      (d) vector<int> v3{10};
(e) vector<int> v5{10, 42};      (f) vector<string> v6{10};
(g) vector<string> v7{10, "hi"}; 
```

(a) 1个元素，没有值;

(b) 10个元素，默认值为0;

(c) 10个元素，值为42;

(d) 1个元素，值为10;

(e )2个元素，值分别为10，42;

(f) 10个元素，默认为空字符串;

(g) 10个元素，值都为"hi";

## 练习3.14

> 编写一段程序，用cin读入一组整数并把她们存入一个vector对象.

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_14.cpp)

## 练习3.15

> 改写上题的程序，不过这次读入的是字符串。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_15.cpp)

## [练习3.16](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_16.cpp)

##[练习3.17](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_17.cpp)

##[练习3.18](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_18.cpp)

##[练习3.19](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_19.cpp)

##[练习3.20](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_20.cpp)

##[练习3.21](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_21.cpp)

##[练习3.22](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_22.cpp)

##[练习3.23](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_23.cpp)

##[练习3.24](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_24.cpp)

##[练习3.25](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_25.cpp)

## 练习3.26

> 在100页的二分搜索程序中，为什么用的是`mid = beg + (end - beg) / 2`, 而非`mid = (beg + end) / 2`?

因为vector的迭代器没有定义+运算符，故`beg + end`是非法的，只能使用-运算符

## 练习3.27

> 假设是txt_size一个无参数的函数，它的返回值是int。请回答下列那个定义是非法的？为什么？

```cpp
unsigned buf_size = 1024;
(a) int ia[buf_size];  // 非法，维度值不是常量表达式  
(b) int ia[4 * 7 - 14]; // 合法
(c) int ia[txt_size()];   // 非法，维度值不是常量表达式
(d) char st[11] = "fundamental";  // 非法，字符串字面值结尾处有一个空字符
```

## 练习3.28

> 下列数组中元素的值是什么

```cpp
string sa[10];        // 默认初始化，10个元素，都是空 ""
int ia[10];           // 默认初始化，10个元素，为0
int main(){
    string sa2[10];   // 默认初始化，10个元素，都为空 “”
    int ia2[10];      // 默认初始化，10个元素，未定义
}
```

## 练习3.29

> 相比于vector来说，数组有哪些缺点，请列举一些

* 数组定长，不能随意增加元素
* vector更好的支持std

## 练习3.30

> 指出下面代码的索引错误

```cpp
constexpr size_t array_size = 10;
int ia[array_size];
for(size_t ix = 1; ix <= array_size; ++ix)
  ia[ix] = ix;
```

数组下标范围为[0, array_size - 1]

## [练习3.31](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_31.cpp)

##[练习3.32](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_32.cpp)

## 练习3.33

> 对于104页的程序来说，如果不初始化scores将发生什么？

未初始化数组，其值未定义，不确定。

## 练习3.34

> 假定p1和p2指向同一个数组中的元素，则下面程序的功能是什么？什么情况下该程序是非法的？

```cpp
p1 += p2 - p1;
```

功能等同于`p1 = p2`,

##[练习3.35](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_35.cpp)

##[练习3.36](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_36.cpp)

## 练习3.37

> 下面的程序是何含义，程序的输出结果是什么？

```cpp
const char ca[] = {'h', 'e', 'l', 'l', '0'};
const char *cp = ca;
while(*cp){
    cout << *cp << endl;
    ++cp;
}
```

输出ca的所有元素

**WARNING**

P123页示例讲到：传入C语言标准库函数的指针必须是以空字符作为结束的数组

```cpp
char ca[] = {'C', '+', '+'};  // 不以空字符结束
cout << strlen(ca) << endl;   // 严重错误：ca没有以空字符结束
```

后来本地测试了一段代码

```cpp
const char ca[] = {'h', 'e', 'l', 'l', '0'};
const char *cp = ca;
while(*cp){
    cout << *cp;
  	++cp;
}
cout << strlen(ca) << " ";
char ca2[] = {'C', '+', '+'};
cout << strlen(ca2) << " ";
```

输出结果竟然是`helloC++8 8`,查阅资料发现字符串会以`helloC++`的方式存放在`.radata`区域中。`while(*cp)`会判断`*cp`是否为0，若不为0，则会继续输入字符，直到遇到0为止。所以如果修改代码为

```cpp
const char ca[] = {'h', 'e', 'l', 'l', '0', '\0'};
char ca2[] = {'C', '+', '+', '\0'};
```

则存放在`.rodata`里的形式为`hello\0C++\0`， 程序就会正确执行。所以如果使用C风格字符串，小心。

**Reference**

* [pezy-exceise3.37](https://github.com/pezy/CppPrimer/tree/master/ch03)
* C++ primer P123

## 练习3.38

> 在本节中我们提到，将两个指针相加不但是非法的，而且也没什么意思。请问为什么两个指针相加没什么意义？

两个指针相减表示指针之间的距离；如果指针与整数相加减，表示指针向前或者向后移动整数距离。而如果两个指针相加，结果难以预料，没有意义。

##[练习3.39](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_39.cpp)

##[练习3.40](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_40.cpp)

##[练习3.41](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_41.cpp)

##[练习3.42](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_42.cpp)

##[练习3.43](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_43.cpp)

##[练习3.44](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_44.cpp)

##[练习3.45](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_3/ex3_45.cpp)

