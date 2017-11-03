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

## 练习6.13

> 假设T是某种类型的名字，说明以下两个函数声明的区别：一个是`void f(T)`，另一个是`void f(&T)`.

`void f(T)`是值传递，实参初始化形参，形参和实参是两个独立的对象。形参的改动不会影响实参。

`void f(&T)`是引用传递，即引用形参是绑定对象的别名，也就是说形参是对应实参的别名。

## 练习6.14

> 举一个形参应该是引用类型的例子，再举一个形参不能是引用类型的例子。

引用类型

```cpp
void swap(int &a, int &b);
```

不能是引用类型

```cpp
void print(std::vector<int>::iterator begin, std::vector<int>::iterator eng)
{
	for(std::vector<int> iterator iter = begin; iter != end; ++iter)
    	std::cout << *iter << std::endl;
}
```

## 练习6.15

> 为什么s是常亮引用而occurs是普通引用？

因为s不会被函数更改，而occurs的值要被函数计算得出

> 为什么s和occurs是引用类型而c不是

对于`char`来说，也可以使用引用，但是即使是值传递，对于内存来说，也是很有效率的。

> 如果另`s`是普通引用会发生什么情况？如果领`occurs`是常量引用会发生什么情况？

`s`在函数中可能会被改变。`occurs`不能被改变，所以无法统计次数。

## 练习6.16

> 下面的这个函数虽然合法，但是不算特别有用。指出它的局限性并设法改善.

```cpp
bool is_empty(string& s) { return s.empty(); }
```

```cpp
bool is_empty(const string& s) { return s.empty(); }
```

因为函数不改变参数s，所以使用const常量，否则函数会误导并且不能被`const string`或者在`const`函数中使用。

## 练习6.17

> 编写一个函数，判断`string`对象中是否含有大写字母。编写另一个函数，把`string`对象全部改成小写形式。在这两个函数中你使用的形参类型相同吗？为什么？

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_6/ex6_17cpp)

不相同，第一个函数，使用`const`对象，因为不会改变参数。第二个函数使用普通引用，因为要改变参数。

## 练习6.18

> 为下面的函数编写函数声明，从给定的名字中推测函数具备的功能。

>(a) 名为`compare`的函数，返回布尔值，两个参数都是`matrix`类的引用。

```cpp
bool compare(const matrix &a, const matrix &b);
```

> (b) 名为`change_val`的函数，返回`vector<int>`的迭代器，有两个参数：一个是`int`，另一个是`vector<int>`的迭代器。

```cpp
vector<int>::iterator change_val(int val, vector<int>::iterator iter);
```

## 练习6.19

(a) 不合法，参数数量不一致 (b) 合法 (c) 合法 (d) 合法

## 练习6.20

> 引用形参什么时候应该是常量引用？如果形参应该是常量引用，而我们将其设为了普通引用，会发生什么情况?

如果不会改变引用对象的时候，用`const`； 如果将常量引用设为普通引用，可能会改变引用对象值。

## 练习6.21

> 编写一个函数，令其接受两个参数：一个是int型的数，另一个是int指针。函数比较int的值和指针所指的值，返回较大的那个。在该函数中指针的类型应该是什么？

```cpp
int compare(int a, const int *b)
{
	return (a < (*b) ? (*b) : a);
}
```

## 练习6.22

> 编写一个函数，令其交换两个int指针。

```cpp
void swap(int * &a, int * &b)
{
    auto tmp = a;
    a = b;
    b = tmp;
}
```

## 练习6.23

> 参考本节介绍的几个`print`函数，根据理解编写你自己的版本。依次调用每个函数使其输入下面定义的`i`和`j`。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_6/ex6_23cpp)

## 练习6.24

> 描述下面这个函数的行为。如果代码中存在问题，请指出并改正。

```cpp
void print(const int ia[10])
{
	for(size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}
```

数组的两个特殊性质对我们定义和使用作用在数组上的函数有影响，这两个性质分别是：不允许拷贝数组，以及使用数组时通常会将其转换成指针。因为不能拷贝数组，所以我们无法以值传递的方式使用数组参数。因为数组会被转换成指针，所以当我们为函数传递一个数组时，实际上传递的是指向数组首元素的指针。

在这个问题中，`const int ia[10]`等同于`const int *`， 并且不限制数组的大小，所以我们可以传递任意大小的数组，比如`const int ia[3]`或者`const int ia[255]`，如果传递长度小于10的数组，其余的值不确定。若传递大于10的数组，只会输出10个元素。所以修改为

```cpp
void print(const int (&ia)[10]) { /* ... */ }
```

**Reference** : http://stackoverflow.com/questions/26530659/confused-about-array-parameters

## 练习6.26 && 练习6.27

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_6/ex6_26cpp)