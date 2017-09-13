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

