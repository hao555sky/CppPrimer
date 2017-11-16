## 练习7.1

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_1.cpp)

## 练习7.2

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_2.h)

## 练习7.3

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_3.cpp)

## 练习7.4

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_4.h)

## 练习7.5

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_5.h)

## 练习7.6

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_6.h)

## 练习7.7

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_7.cpp)

## 练习7.8

`read`中将参数`Sales_data`设置为普通引用因为会改变`Sales_data`成员值

`print`函数中将参数`Sales_data`设置为常量引用，因为并不会改变对象的成员值

## 练习7.9

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_9.h)

## 练习7.10

> 在下面的这天if语句中，条件部分的作用是什么？

```cpp
if (read(read(cin, data1), data2))
```

能够成功读取data1和data2；

## 练习7.11

[Sales_data 定义](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7.11.h) | [Sales_data 实现](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7.11.cpp) 

## 练习7.12

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_12.h)

## 练习7.13

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_13.cpp)

## 练习7.14

```cpp
Sales_data(): units_sold(0), revenue(0){}
```

## 练习7.15

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_15.h)

## 练习7.16

一个类可以包含0个或者多个访问说明符，而且对于某个访问说明符能出现多少次也没有严格限定。每个访问说明符指定了接下来的成员的访问级别，其有效范围直到出现下一个访问说明符或者到达类的结尾处为止。

定义在`public`说明符之后的成员在整个程序内可被访问，`public`成员定义累的接口

定义在`private`说明符之后的成员可以被类的成员函数访问，但不能被使用该类的代码访问，`private`部分封装了（即隐藏了）类的实现细节。

## 练习7.17

`class`和`struct`的区别仅在于默认访问权限不一样。

类可以在第一个访问说明符之前定义成员，对这种成员的访问权限依赖于类定义的方式。如果我们使用`struct`关键字，则定义在第一个访问说明符之前的成员是`public`的；相反，如果我们使用`class`关键字，则这些成员是`private`的

## 练习7.18

封装是接口与实现的分离，隐藏了类的实现细节。在C++，封装是通过类的`private`来实现的。

优点:

* 用户代码不会无意破坏封装对象的状态。
* 封装类的实现能够根据时间改变，而不需要改变用户级别的代码。

## 练习7.19

* `public` 包括：构造函数，`getName()`, `getAddress()`
* `private`包括：`name`, `address`

接口应该定义为`public`， 而数据不应该暴露给类外部。

## 练习7.20

友元函数是类赋予其他类或者函数访问其非公有成员的权限的机制。

优点

* 函数可以直接访问类作用域中的类成员，而不需要明确的用类名做前缀
* 可以方便的访问所有非公共成员
* 有时对类的用户更具有可读性

缺点

* 破坏了类的封装性和可维护性

## 练习7.21

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_21.h)

## 练习7.22

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_22.h)

## 练习7.23

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_23.h)

## 练习7.24

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_24.h)

## 练习7.25

尽管编译器能替我们合成拷贝、赋值和销毁的操作，但是必须要清楚的一点是，对于某些类来说合成的版本无法正常工作。特别是，当类需要分配类对象之外的资源时，合成的版本常常会失效，比如在分配和管理动态内存时会失效。不过值得注意的时，很多需要动态内存的类（而且应该）使用`vector`对象或者`string`对象管理必要的存储空间。使用`vector`后者`string`的类能够避免分配和释放内存带来的复杂性。

进一步讲，如果类包含`vector`或者`string`成员，则其拷贝、赋值和销毁的合成版本能够正常工作。当我们对含有`vector`成员的对象执行拷贝或者赋值操作时，`vector`类会设法拷贝或者赋值成员中的元素。当这样的对象被销毁时。将销毁`vector`对象，也就是依次销毁`vector`中的每一个元素。

由于`Screen`类内元素为内建元素以及`string`类型，故能够以来合成版本

## 练习7.26

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_26.h)

## 练习7.27

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_27.h)

## 练习7.28

如果`move`、`set`和`display`函数的返回类型不是`Screen&`而是`Screen`，则函数对对象的操作不会保存，因为是对临时对象做的更改。

## 练习7.29

**返回Sales_data**

![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/screenshots/ex7_29_a.png)

**返回Sales_data&**

![Alt text](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_1/screenshots/ex7_29_b.png)

## 练习7.30

**优点**

* 更明确
* 能够使用与成员变量名相同的参数名`void set(char c){ this->c = c; }`

**缺点**

* 代码冗余 `string get() const { return this->addr; }`

## 练习7.31

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_31.h)

## 练习7.32

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_32.h)

## 练习7.33

一旦遇到类名，定义的剩余部分就在类的作用域内了，这里的剩余部分包括参数列表和函数体。

```cpp
Screen::pos Screen::size() const
{
    return height * width;
}
```

## 练习7.34

**Error**

> error: ‘pos’ has not been declared

## 练习7.35

```cpp
typedef string Type;
Type initVal();  // string
class Exercise{
public:
	typedef double Type;
	Type setVal(Type);  // double
	Type initVal();  // double
private:
	int val;
};

Type Exercise::setVal(Type parm)  // first: string. second: double
{
	val = parm + initVal();  // Exercise::initVal()
    return val;
}
```

**修改**

```cpp
typedef string Type;
Type initVal();
class Exercise{
public:
	typedef double Type;
	Type setVal(Type);
	Type initVal();
private:
	int val;
};

Exercise::Type Exercise::setVal(Type parm)
{
	val = parm + initVal();
	return val;
}
```

并且定义`Exercise::initVal()`

## 练习7.36

> 下面的初始值是错误的，请找出问题所在并尝试修改它。

**修改**

```cpp
struct X{
    X (int i, int j): base(i), rem(i % j) {}
    int rem, base;
};
```

## 练习7.37

```cpp
Sales_data first_item(cin);  // Sales_data(std::istream& is);  值由用户输入
int main()
{
    Sales_data next;  // Sales_data(std::string s = " ");  s = " ", cnt = 0, revenue = 0;
    Sales_data last("9-999-99999-9");  // Sales_data(std::string s = " "); s = "9-999-99999-9", cnt = 0, revenue = 0;
}
```

## 练习7.38

```cpp
Sales_data::Sales_data(std::istream &is = std::cin);
```

## 练习7.39

不合法，`error: call of overloaded ‘Sales_data()’ is ambiguous`

## 练习7.40

```cpp
class Book
{
public:
	Book() = default;
	Book(string nauthor, double nprice): author(nauthor), price(nprice) {}
	Book(istream& is) { read(is, *this); }

private:
	string author;
	double price = 0;
};
```

## 练习7.41

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_41.h)

## 练习7.42

```cpp
class Book
{
public:
	Book(string nauthor, double nprice): author(nauthor), price(nprice) {}
    Book(): Book("", 0) {}
	Book(istream& is): Book() { read(is, *this); }

private:
	string author;
	double price = 0;
};
```

## 练习7.43

```cpp
#include <vector>
using std::vector;

struct NoDefault
{
	NoDefault(int i){}

};

struct C
{
	C(): nd(0) {}
	NoDefault nd;
};

int main()
{
	C c;
	vector<C> vec(10);
    return 0;
}
```

## 练习7.44

不合法，因为`NoDefault`类没有默认构造函数

## 练习7.45

合法，因为`C`有默认构造函数。

## 练习7.46

下面哪些论断是不正确的？为什么？

> (a) 一个类必须至少提供一个构造函数。 （错误， 合成构造函数）
>
> (b) 默认构造函数是参数列表为空的构造函数。（错误， 默认构造函数是能以无参数调用的构造函数，以控参数列表定义，或以为每个参数提供默认参数）
>
> (c) 如果对于类来说不存在有意义的默认值，则类不应该提供默认构造函数（错误，应该提供）
>
> (d) 如果类没有定义默认构造函数，则编译器为其生成一个并把每个数据成员初始化成相应类型的默认值。（错误，只有在类没有明确定义任何构造函数的情况下，编译器才会生成默认构造函数）

## 练习7.47

是否需要从`string`到`Sales_data`的转换依赖于我们对用户使用该转换的看法。在此例中，这种转换可能是对的。`null_book`中的`string`可能表示了一个不存在的`ISBN`编号。

优点

* 阻止了构造函数定义的隐式转换
* `explicit`构造函数只能用于直接初始化

缺点

* 关键字`explicit`只对一个实参的构造函数有效。需要多个实参的构造函数不能用于执行隐式转换，所以无需将这些构造函数指定为`explicit`的。只能在类内声明构造函数时使用`explicit`关键字，在类外部定义时不应重复。

## 练习7.48

两个都执行成功

## 练习7.49

```cpp
(a) Sales_data &combine(Sales_data);  //  成功, 首先将s转化为Sales_data, 然后将临时量作为combine的参数传递
(b) Sales_data &combine(Sales_data&);  // 失败， 首先将s转化为Sales_data, 然后将对临时量的引用作为combine的参数，但是传递临时量的非const引用给是错误的
(c) Sales_data &combine(const Sales_data&) const;  // 失败，无法编译，因为是const成员函数，导致无法进行combine操作。
```

由于`combine`的参数是非const引用，所以不能传递一个临时量的引用作为参数。如果`combine`的参数是const引用，则可以传递临时量的引用。

## 练习7.50

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_50.h)

## 练习7.51

比如一个函数

```cpp
int getSize(const std::vector<int> &);
```

如果`vector`没有把单参数构造方法设置为`explicit`, 我们这样调用的话

```cpp
getSize(34)
```

会产生歧义

而`string`不同，如果我们用`string`代替`const char *`，如果我们的函数是这样的话

```cpp
void setYourName(std::string);
setYourName("pezy");
```

是可以的。

## 练习7.52

聚合类使得用户可以直接访问其成员，并且具有特殊的初始化语法，当一个类满足如下条件时，它是聚合的：

* 所有成员都是`public`的
* 没有定义任何构造函数
* 没有类内初始值
* 没有基类，也没有`virtual`函数

```cpp
struct Sales_data
{
	string bookNo;
	unsigned units_sold;
	double revenue;
};
```

## 练习7.50

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_53.h)

## 练习7.54

不应该，因为`constexpr`函数必须明确包含`return`语句

## 练习7.55

不是，因为`string`类型不是字面值类型 。只有内置类型存在字面值，没有类类型的字面值。因此，标准库类型没有字面值。

## 练习7.56

> 什么事类的静态成员？它有何优点？静态成员与普通成员有何区别？

有时候类需要它的一些成员与类本身直接相关，而不是与类的各个对象保持关联。通过在成员的声明之前加上关键字`static`使得其与类关联在一起。类的静态成员存在于任何对象之外，对象补办韩任何与静态数据成员有关的数据。

优点：静态成员为类所属，对象不需要存储，并且如果静态成员改变后，每个对象都会获得更新值

区别

* 静态成员可以是不完全类型
* 静态成员可以作为默认实参

## 练习7.57

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_7/ex7_57.h)

## 练习7.58

```cpp
class Example {
public:
    static constexpr double rate = 6.5;
    static const int vecSize = 20;
    static vector<double> vec;
};

int main()
{
	constexpr double Example::rate;
	vector<double> Example::vec(Example::vecSize);
    return 0;
}
```

