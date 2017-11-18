## 练习8.1

>编写函数，接受一个istream& 参数，返回值类型也是istram&。 此函数须从给定流中读取数据，直至遇到文件结束标识时停止。它将读取的数据打印在标准输出上。完成这些操作后，在返回流之前，对流进行复位，使其处于有效状态。

```cpp
istream& read(istream& is)
{
    string str;
    while(is >> str)
        cout << str << endl;
    is.clear();
    return is;
}
```

## 练习8.2

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_8/ex8_2.cpp)

## 练习8.3

> 什么情况下，下面的`while`循环会终止？

```cpp
while (cin >> i) /* ... */
```

如果`cin`流发生错误就会终止，比如`badbit`、`failbit`和`eofbit`

## 练习8.4

> 编写函数，以读模式打开一个文件，将其内容读入到一个string的vector中，将每一行作为一个独立的元素存于vector中。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_8/ex8_4.cpp)

## 练习8.5

> 重写上面的程序，将每个单词作为一个独立的元素j进行存储。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_8/ex8_5.cpp)

## 练习8.6

> 重写7.1.1节中的书店程序（第229页）， 从一个文件中读取交易记录。将文件名作为一个参数传递给main（参见6.2.5节，第196页）

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_8/ex8_6.cpp)

## 练习8.7

> 修改上一节的书店程序，将结果保存到一个文件中。将输出文件名作为第二个参数传递给main函数。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_8/ex8_7.cpp)

## 练习8.8

> 修改上一题的程序，将结果追加到给定的文件末尾。对同一个输出文件，运行程序至少两次，检验数据是否得以保留。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_8/ex8_8.cpp)

## 练习8.9

> 使用你为8.1.2节（第281页）第一个练习所编写的函数打印一个istringstream对象的内容。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_8/ex8_9.cpp)

## 练习8.10

> 编写程序，将来一个文件中的行保存在一个vector<string>中。然后使用istringstream对象从vector中读取数据元素，每次读取一个单词。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_8/ex8_10.cpp)

## 练习8.11

> 本节的程序在外层while循环中定义了istringstream对象。如果record对象定义在while循环之外，你需要对程序进行怎样的修改？重写程序，将record的定义移到while循环之外，验证你设想的修改方法是否正确。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_8/ex8_11.cpp)

## 练习8.12

> 我们为什么没有在PersonInfo中使用类内初始化？

因为这次使用的聚合类，没有类内初始化。

## 练习8.13

> 重写本节的电话号码程序，从一个命名文件而非cin读取数据。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_8/ex8_13.cpp)

## 练习8.14

> 我们为什么将entry和nums定义为const auto &?

因为他们都是类类型，引用比较高效，并且不会改变其值，故用`const`

