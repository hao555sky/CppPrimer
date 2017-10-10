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

