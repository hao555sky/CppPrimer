## 练习6.1

> 实参和形参的区别是什么？

实参是形参的初始值，实参对形参的初始化顺序对应，类型匹配，但是实参的求职顺序任意。

## 练习6.2

> 请指出下列函数哪个有错误，为什么？应该如何修改这些错误呢？

```cpp
(a) int f(){
    	string s;
    	// ...
    	return s;
	}
(b) f2(int i) { /* ... */ }
(c) int calc(int v1, int v1) /* ... */ }
(d) double square(double x) return x * x;
```

```cpp
(a) string f(){
    	string s;
    	// ...
    	return s;
	}
(b) void f2(int i) { /* ... */ }
(c) int calc(int v1, int v1) { /* ... */ }
(d) double square(double x) { return x * x; }
```

## 练习6.3

> 编写你自己的fact函数，上机检查是否正确。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_6/ex6_3.cpp)

## 练习6.4

> 编写一个与用户交互的函数，要求用户输入一个数字，计算生成该数字的阶乘。在main函数中调用该函数。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_6/ex6_4.cpp)

## 练习6.5

> 编写一个函数输出其实参的绝对值。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_6/ex6_5.cpp)

## 练习6.6

> 说明形参、局部变量以及局部静态变量的区别。编写一个函数，同时用到这三种形式。

形参：在函数的参数列表中定义的局部变量，形参一定会被初始化。

局部变量：语句块内定义的变量，会隐藏外层作用域同名变量。

局部静态变量：生命周期贯穿函数调用及之后的时间，在对象定义时初始化，直到程序终止时销毁，即使函数函数结束执行也没影响。

```cpp
int test(int val)  // val 是形参
{
    int local_variable;  // local_variable 是局部变量
    static int static_local_variable = 0;  // static_local_variable 是局部静态变量
}
```

## 练习6.7

> 编写一个函数，当他第一次被调用时返回0，以后每次被调用返回值加1.

```cpp
size_t count_call()
{
	static size_t cnt = 0;
	return cnt++;
}
```

## 练习6.8

> 编写一个名为Chaper6.h的头文件，令其包含6.1节练习（第184页）中的函数声明。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_6/Chapter6.h)

## 练习6.9

> 编写你自己的`fact.cc`和`factMain.cc`，这两个文件都应该包含上一小节的练习中编写的`Chapter6.h`头文件。通过这些文件，理解你的编译器是如何支持分离是编译的。

[fact.cc](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_6/fact.cc) && [factMain.cc](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_6/factMain.cc)

## 练习6.10

> 编写一个函数，使用指针形参交换两个整数的值。在代码中调用该函数并输出交换后的结果，以此验证函数的正确性。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_6/ex6_10.cpp)

## 练习6.11

> 编写并验证你自己的`reset`函数，使其作用于引用类型的参数。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_6/ex6_11.cpp)

## 练习6.12

> 改写6.21节中练习6.10（第188页）的程序，使用引用而非指针交换两个整数的值。你觉得哪种方法更易于使用呢？为什么？

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_6/ex6_12.cpp)