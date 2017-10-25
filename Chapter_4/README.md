## 练习4.1

> 表达式`5 + 10 * 20 / 2`的求值结果是多少？

105

## 练习4.2

> 根据4.12节中的表，在下面表达式的合理位置添加括号，使得添加括号后运算对象的组合顺序与添加括号前一致。

```cpp
(a) *vec.begin()       //*(vec.begin())
(b) *vec.begin() + 1   // (*(vec.begin())) + 1
```

## 练习4.3

> C++语言没有明确规定大多数二元运算符的求值顺序，给编译器优化留下了余地。这种策略实际上是在代码生成效率和程序潜在缺陷之间进行了权衡，你认为这可以接受吗？请说出你的理由。

可以接受，因为C++的优势就是执行效率，有时我们需要编译器的特性来进行有效的工作。

**Note**

优先级只是规定了运算对象的组合方式，但并没有说明运算对象的求值顺序，比如`int i = f1() * f2();`, 我们不知道f1和f2的调用顺序。由于`<<`运算符没有明确规定何时以及如何对运算对象求值，故下列输出表达式是未定义的，故无法推断其行为；

```cpp
int i = 0;
cout << i << " " << ++i << endl; // 未定义地
```

**算数运算符**

* 布尔值不应该参与算术运算，因为非算数类型在运算时会转换为能进行算数类型的类型， `bool b = true; bool b2 = -b;`b2的值为true， 因为b参与运算时会提升为整数值1，取负值后为-1，再将-1转换为布尔值作为b2的初始值，显然不等于0，转换为布尔值应该为1，故b2为true。


* 若m%n不为0，则值的符号与m相同

## 练习4.4

> 在下面的表达式中添加括号，说明其求值的过程以及最终结果。编写程序编译该（不加括号的）表达式并输出其结果验证之前的推断。

```cpp
12 / 3 * 4 + 5 * 15 + 24 % 4 / 2  // ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2)
```

结果为91

## 练习4.5

> 写出下列表达式的求值结果

```cpp
(a) -30 * 3 + 21 / 5;  // -86
(b) -30 + 3 * 21 / 5;  // -18
(c) 30 / 3 * 21 % 5;  // 0
(d) -30 / 3 * 21 % 4; // -2
```

## 练习4.5

> 写出一条表达式用于确定一个整数是奇数还是偶数。

```cpp
num % 2 == 0 ? "even" : "odd";
```

## 练习4.7

> 溢出是何含义？写出三条将导致溢出的表达式。

```cpp
(a) 10 / 0;
(b) short a = 32768;
(c) unsigned ua = -1;
```

算数表达式可能会产生未定义的结果。一部分原因是数学性质本身，比如除数为0；另外一部分则源于计算机的特点：例如溢出，当计算的结果超出该类型所能表示的范围时就会产生溢出。

## 练习4.8

> 说明在逻辑与、逻辑或及相等性运算符中运算对象求值的顺序。

逻辑与运算符和逻辑或运算符都是先求左侧运算对象的值再求右侧运算对象的值，当且仅当左侧运算对象无法确定表达式的结果时才会计算右侧运算对象的值。这种策略成为短路求值

* 对于逻辑与运算符来说，当且仅当左侧运算对象为**真**时才对右侧对象求值
* 对于逻辑或运算符来说，当且仅当左侧运算对象为**假**时才对右侧对象求值

## 练习4.9

> 解释在下面的if语句中条件部分的判断过程。

```cpp
const char *cp = "Hello World";
if (cp && *cp)
```

`cp`为`const char *`指针，并且不为空指针，true

`*cp`为`const char` ： `H`，并且为非0数据，true

`true && true => true`

## 练习4.10

> 为while循环写一个条件，使其从标准输入中读取整数，遇到42时停止。

```cpp
int num = 0;
while(std::cin >> num && num != 42)
```

## 练习4.11

> 书写一条表达式用于测试4个值a、b、c、d的关系，确保a大于b、b大于c、c大于d。

```cpp
a > b && b > c && c > d
```

## 练习4.12

> 假设i、j和k是三个整数，说明表达式`i != j < k`的含义。

该表达式等同于`i != (j < k)`

首先计算`j < k`，得到的布尔值作为` != `运算符的右侧运算对象。即将`i`与`j、k`的比较结果真假值进行吧比较。可以将表达式重写为

`i != j && j < k`

**Note**

> 进行比较运算时除非比较的对象是布尔类型，否则不要使用布尔字面值true和false作为运算对象

## 练习4.13

> 在下述语句中，当赋值完成后i和d的值分别是多少？

```cpp
int i; double d;
(a) d = i = 3.5;  // i = 3, d = 3.0;
(b) i = d = 3.5;  // d = 3.5, i = 3;
```

## 练习4.14

> 执行下书if语句后将发生什么情况？

```cpp
if (42 = i) // ...  // 错误，字面值不能做赋值运算符的左侧运算对象
if (i = 42) // ...  // 可能导致意想不到的结果，把42赋值给i，检查赋值的结果是否为真, 本表达式为true
```

## 练习4.15

> 下面的赋值是非法的，为什么？应该如何修改？

```cpp
double dval; int ival; int *pi;
dval = ival = pi = 0;
```

因为pi为指针，iva为int类型，不能将指针赋值给int类型变量。

```cpp
dval = ival  = 0;
pi = 0;
```

## 练习4.16

> 尽管下面的语句合法，但他们实际执行的行为可能和预期并不一样，为什么？应该如何修改？

```cpp
(a) if (p = getPtr() != 0) 
(b) if (i = 1024)
```

* (a) 由于赋值运算符优先级低，该表达式等同于 `p = (getPtr() != 0)`, 修改为`(p = getPtr()) != 0`
* (b) 可能导致意想不到的结果，把42赋值给i，检查赋值的结果是否为真, 本表达式为true， 修改为`i == 1024`

**Note**

* 赋值运算符的左侧运算对象必须是一个**可修改的左值**
* 若赋值运算符左右两个运算对象类型不同，则右侧运算对象会转换成左侧运算对象的类型
* 赋值运算符满足右结合律`int ival, jval; ival = jval = 0;`


## 练习4.17

> 说明前置递增运算符和后置递增运算符的区别。

前置递增运算符首先将运算对象加1，然后将改变后的对象作为求值结果，即前置版本将对象本身作为左值返回

后置递增运算符将运算对象加1，但是会将运算对象改变之前的值的副本作为求值结果，即后置版本将对象原始值的副本作为右值返回。

## 练习4.18

> 如果第132页那个输出vector对象元素的while循环使用前置递增运算符，将得到什么结果？

从vector的第二个元素开始输出，然后解引用`v.end()`，会得到不可预料的后果。

## 练习4.19

> 假设ptr的类型是指向int的指针、vec的类型是`vector<int>、ival`的类型是`int`，说明下面的表达式是何含义？如果有表达式不正确，为什么？应该如何修改？

```cpp
(a) ptr != 0 && *ptr++    (b) ival++ && ival   (c) vec[ival++] <= vec[ival]
```

(a) 检测ptr 不为空指针并且ptr指针指向的值

(b) 检查ival 和 ival + 1 都不为0

(c) 报错，因为左侧运算对象改变了ival的值，右侧对象又使用了该值，而运算对象的求值顺序却没有规定。

修改 ： `vec[ival] <= vec[ival + 1]`

**Note**

内建的[逻辑](http://zh.cppreference.com/w/cpp/language/operator_logical) AND 运算符 && 和内建的逻辑 OR 运算符 || 的第一个（左）实参的每个值计算和副作用，均按顺序早于其第二个（右）实参的每个值计算和副作用。[求值的顺序](http://zh.cppreference.com/w/cpp/language/eval_order)

## 练习4.20

> 假设iter的类型是vector<string>::iterator， 说明下面的表达式是否合法。如果合法，表达式的含义是什么？如果不合法，错在何处？

```cpp
(a) *iter++;  // 合法，执行*iter, 然后++iter
(b) (*iter)++;  // 非法，*iter为string，没有递增
(c) *iter.empty();  // 非法，iter为迭代器，不能使用点操作符，应该使用'->'
(d) iter->empty();  // 合法，iter指向string对象
(e) ++*iter;  // 非法，string没有递增
(f) iter++->empty();  // 合法，执行iter->empty(), 然后++iter
```

## 练习4.23

> 因为运算符的优先级问题，下面这条表达式无法通过编译。根据4.12节中的表（第147页）指出它的问题在哪里？应该如何修改？

```cpp
string s = "word";
string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
```

由于条件运算符优先级比算术运算符优先级低，故该语句等同于

```cpp
string p1 = s + s[size() - 1];
p1 == 's' ? "" : "s";
```

修改为

```cpp
string s = "word";
string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
```

**Note**

猜一猜为什么使用单引号`'s'`, 因为p1为string类型，`'s'`为char类型，若为`"s"`，则类型为字符串，原式可通过编译。

## 练习4.24

> 本节的示例程序将成绩划分为high pass、pass 和fail三种，它的依据是条件运算符满足右结合律。假如条件运算符满足的是左结合律，求值过程将是怎样的？

```cpp
finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
```

等同于

```cpp
finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
```

如果`grade > 90`， 结果为`high pass`.否则执行失败，因为`?`两边的类型不同。

## 练习4.25

> 如果一台机器上`int`占32位、`char`占8位，用的是`Latin-1`字符集，其中字符`q`的二进制形式是`01110001`， 那么表达式`~q<<6`的值是什么？

**不会，没看懂，以后填坑吧，僵**

## 练习4.26

> 在本节关于测验成绩的例子中，如果使用unsigned int作为quiz1的类型会发生什么情况？

因为学生共有30人，`unsigned long`至少能够保证有32位，因此能够保证所有学生使用，而`unsigned int`只能保证最少16位，可能会导致未定义的行为。

## 练习4.27

> 下列表达式的结果是什么？

```cpp
unsigned long ul1 = 3, ul2 = 7;
(a) ul1 & ul2  // 3
(b) ul1 | ul2  // 7
(c) ul1 && ul2  // True
(d) ul1 || ul2  // True
```

## [练习4.28](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_4/ex4_28.cpp)

## 练习4.29

> 推断下面代码的输出结果并说明理由。实际运行这段程序，结果和你想象的一样吗？如果不一样，为什么？

```cpp
int x[10]; int *p = x;
cout << sizeof(x) / sizeof(*x) << endl;  // Output: 10
cout << sizeof(p) / sizeof(*p) << endl;  // Output: 2
```

不一样，第一个结果为10，通过整个数组的大小，除以单个元素的大小，得到元素的个数。第二个结果为2， 因为p为指针类型，故在64位机器占8个字节，而`*p`为int类型，占4字节，故结果为2

**Reference**

[Why the size of a pointer is 4bytes in C++](http://stackoverflow.com/a/2428809)

[C/C++ 刁钻问题各个击破之细说 sizeof](http://blog.jobbole.com/107863/)

## 练习4.30

> 根据4.12节中的表（第147页），在下述表达式的适当位置加上括号，使得加上括号之后表达式的含义与原来的含义相同

```cpp
(a) sizeof x + y    // sizeof (x) + y. sizeof 有更高的优先级比 + 
(b) sizeof p->men[i]    // sizeof (p->mem[i])
(c) sizeof a < b    // sizeof (a) < b
(d) sizeof f()    // 如果函数返回类型为void, 则报错。否则返回函数返回类型的大小
```

**Reference**

[sizeof运算符](http://zh.cppreference.com/w/cpp/language/sizeof)

## 练习4.31

> 本节的程序使用了前置版本的递增运算符和递减运算符，解释为什么要用前置版本而不用后置版本。要想使用后置版本的递增递减运算符需要做那些改动？使用后置版本重写本节的程序。

我们使用前置而不是用后置的原因是在`4.5节 递增和递减运算符`中的建议

>建议：除非必须，否则不用递增递减运算符的后置版本
>
>有C语言北京的读者可能对优先使用前置版本递增运算符有所疑问，其实原因非常简单：前置版本的递增运算符避免了不必要的工作，他把值加1后直接返回改变了的运算对象。与之相比，后置版本需要将原始值存储下来以便返回这个未修改的内容。如果我们不需要修改前的值，那么后置版本的操作就是一种浪费。
>
>对于整数和指针类型来说，编译器可能对这种额外的工作进行一定的优化；但是对于相对复杂的迭代器类型，这种额外的工作就消耗巨大了。建议养成使用前置版本的习惯，这样不仅不需要担心性能的问题，而且更重要的是写出的代码会更符合变成的初衷。

所以，这只是一个好习惯，对于本题代码来说，无需改动，如果需要后置版本的话

```cpp
for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
    ivec[ix] = cnt;
```

这不是一个讨论前置后置的恰当例子，详情阅读[其他运算符](http://zh.cppreference.com/w/cpp/language/operator_other)

**Reference**: [Usage of the Built-in Comma Operator](http://stackoverflow.com/questions/22591387/usage-of-the-built-in-comma-operator)

## 练习4.32

> 解释下面这个循环的含义。

```cpp
constexpr int size = 5;
int ia[size] = {1, 2, 3, 4, 5};
for(int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr){/* ...*/}
```

`ptr`和`ix`的作用都是遍历`ia`数组，只不过`ptr`用的是指针，而`ix`用的是数组下标的方式

## 练习4.33

> 根据4.12节中的表（第147页）说明下面这条表达式的含义。

```cpp
someValue ? ++x, ++y : --x, --y
```

由于逗号运算符的优先级最低，故该表达式等同于

```cpp
(someValue ? ++x, ++y : --x), --y 
```

如果`someValue`为真的haunted，执行`++x, ++y`, 然后执行`--y`,即`y`不变；若`someValue`为假的话，执行`--x`, 然后执行`--y`,故也等同于

```cpp
someValue ? ++x, y : (--x, --y);
```

即使最后结果与`x`没关系，但是`someValue`的真假也改变了对`x`

## 练习4.34

> 根据本节给出的变量定义，说明在下面的表达式中将发生什么样的类型转换。

```cpp
(a) if (fval)  // fval 不为0， 转化为true， 否则为false
(b) dval = fval + ival;  // ival 转化为float， 与ival相加的结果转化为double
(c) dval + ival * cval; // cval转化为int， 乘积转化为double与dval相加
```

**Note** ： 表达式中既有浮点类型也有整数类型shi

## 练习4.35

> 假设有如下的定义，

```cpp
char cval;     int ival;    unsigned int ui;    float fval;    double dval;
```

请回答在下面的表达式中发生了隐式类型转换吗？如果有，指出来。

```cpp
(a) cval = 'a' + 3;  // 发生了，'a' 首先转化为int， 相加结果转化为char
(b) fval = ui - ival * 1.0;  // 发生了，ival 转化为double，ui转化为double，相减结果转化为float
(c) dval = ui * fval;  // ui转化为float，然后转化为double
(d) cval = ival + fval + dval;  // ival转化为float， 相加结果转化为double后与dval相加， 然后转化为char
```

## 练习4.36

> 假设`i`是`int`类型，`d`是`double`类型，书写表达式`i *= d`使其执行整数类型的乘法而非浮点类型的乘法。

```cpp
i *= static_cast<int>(d)
```

## 练习4.37

> 用命名的强制类型转换改写下列旧式的转换语句。

```cpp
int i;  double d;  const string *ps;  char *pc;  void *pv;
(a) pv = (void*) ps;  // pv = const_cast<string*>(ps); or pv = static_cast<void*>(const_cast<string*>(ps));
(b) i = int(*pc);  // i = static_cast<int>(*pc)
(c) pv = &d;  // pv = static_cast<void*>(&d)
(d) pc = (char*) pv; // pc = reinterpret_cat<char*>(pv)
```

## 练习4.38

> 说明下面这条表达式的含义。

```cpp
double slope = static_cast<double>(j/i);
```

将`j/i`的结果强制转化为`double`，然后赋值给`slope`.