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

