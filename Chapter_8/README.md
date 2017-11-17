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

