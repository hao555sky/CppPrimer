## 练习5.1

> 什么是空语句？什么时候会用到空语句》

只有一个单独分号的语句；

```cpp
;
```

如果在程序的某个地方，语法上需要一条语句，但是逻辑上并不需要，可以用空语句。比如，当循环的全部工作在条件部分就可以完成时，我们通常使用空语句。

```cpp
while(cin >> s && s != sought)
  ;
```

## 练习5.2

> 什么是块？什么时候会用到块？

复合语句是指用花括号括起来的（可能为空的）语句和生命的序列，也称作块

如果在程序的某个地方，语法上需要一条语句，但是逻辑上需要多条语句，则应该使用复合语句。比如`while`或者`for`循环的循环体必须是一条语句，但是我们经常要在循环体内组很多事情，此时就需要将多条语句用括号括起来，从而把语句序列转变成块。

```cpp
while(val <= 10){
    sum += val;
    ++val;
}
```

## 练习5.3

> 使用逗号操作符（参见4.10节，第140页）重写1.4.1节（第10页）的while循环，使它不再需要块，观察改写之后的代码的可读性提高了还是降低了。

```cpp
#include <iostream>

using std:: cout;
using std:: endl;

int main()
{
	int index = 50, sum = 0;
	while(index < 100)
		sum += index, ++index;
	cout << sum << endl;
	return 0;
}
```

## 练习5.4

> 说明下列例子的含义，如果存在问题，试着修改它。

```cpp
(a) while(string::iterator iter != s.end()){ /* ... */ }
(b) while(bool status = find(word)) {/* ... */}
       if (!status) {/* ... */}
```

(a) iter未初始化，导致未定义行为

```cpp
string::iterator iter = s.begin();
while(iter != s.end()) { /* ... */ }
```

(b) status的生命周期到while语句块结束，外部无法调用；或者把if语句放进while语句块内。

```cpp
bool status;
while(bool status = find(word)) {/* ... */}
if (!status) {/* ... */}
```

## [练习5.5](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_5/ex5_5.cpp)

## [练习5.6](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_5/ex5_6.cpp)

## 练习5.7

> 改正下列代码段的错误。

```cpp
(a) if (ival1 != ival2)
        ival1 = ival2 
    else ival1 = ival2 = 0;
(b) if (ival < minval)
        minval = ival;
        occurs = 1;  
(c) if (int ival = get_value())
        cout << "ival = " << ival << endl;
    if (!ival)
        cout << "ival = 0\n";
(d) if (ival = 0)
        ival = get_value();
```

```cpp
(a) if (ival1 != ival2)
        ival1 = ival2;
    else ival1 = ival2 = 0;
(b) if (ival < minval){
    	minval = ival;
        occurs = 1; 
	}  
(c) int val;
	if (ival = get_value())
        cout << "ival = " << ival << endl;
    if (!ival)
        cout << "ival = 0\n";
(d) if (ival == 0)
        ival = get_value();
```

## 练习5.8

> 什么是“悬垂else”？C++ 语言是如何处理else子句的？

当一个if语句嵌套在另一个if语句内部时，很可能if分支会多于else分支，如果知道某个给定的else和哪个if匹配，这个问题被称作悬垂else。 C++ 规定else与离他最近的尚未匹配的if匹配。

##练习5.9

> 编写一段程序，使用一系列if语句统计从cin读入的文本中有多少元音字母。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_5/ex5_9.cpp)

##[练习5.10

> 我们之前实现的统计元音字母的程序存在一个问题：如果元音字母以大写形式出现，不会被统计在内。编写一段程序，既统计元音字母的小写形式，也统计大写形式，也就是说，新程序遇到`a`和`A`都应该递增`aCnt`的值，以此类推。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_5/ex5_10.cpp)

##练习5.11

> 修改统计元音字母的程序，使其也能统计空格、制表符和换行符的数量。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_5/ex5_11.cpp)

## 练习5.12

> 修改统计元音字母的程序，使其能统计以下含有两个字符的字符序列的数量：`ff`、`fl`和`fi`。

[code](https://github.com/hao555sky/CppPrimer/blob/master/Chapter_5/ex5_12.cpp)

## 练习5.13

> 下面显示的每个程序都含有一个常见的编程错误，指出错误在哪里，然后修改它们。

```cpp
(a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch(ch){
        case 'a': aCnt++;
        case 'e': eCnt++;
        default: iouCnt++;
    }
(b) unsigned index = some_value();
    switch(index){
        case 1:
            int ix = get_value();
        	ivec[ix] = index;
        	break;
        default:
        	ix = ivec.size() - 1;
        	ivec[ix] = index;
    }
(c) unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch(digit){
        case 1, 3, 5, 7, 9:
            oddCnt++;
            break;
        case 2, 4, 6, 8, 10:
            evenCnt++;
            break;
    }
(d) unsigned ival = 512, jval = 1024, kval = 4096;
	unsigned bufsize;
	unsigned swt = get_bufCnt();
	switch(swt){
        case ival:
        	bufsize = ival * sizeof(int);
        	break;
        case jval:
        	bufsize = jval * sizeof(int);
        	break;
        case kval:
        	bufsize = kval * sizeof(int);
        	break;
    }
```

```cpp
(a) // Error: 应该添加break语句
	unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch(ch){
        case 'a': aCnt++; break;
        case 'e': eCnt++; break;
        default: iouCnt++; break;
    }
(b) // Error: ix 变量生命周期在case 1就结束了
	unsigned index = some_value();
	int ix;
    switch(index){
        case 1:
            ix = get_value();
        	ivec[ix] = index;
        	break;
        default:
        	ix = ivec.size() - 1;
        	ivec[ix] = index;
    }
(c) // Error: case 标签语法错误
	unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch(digit){
        case 1: case 3: case: 5 case: 7 case 9:
            oddCnt++;
            break;
        case 2: case 4: case 6: case 8: case 10:
            evenCnt++;
            break;
    }
(d) // Error: case标签必须是常量表达式。
	const unsigned ival = 512, jval = 1024, kval = 4096;
	unsigned bufsize;
	unsigned swt = get_bufCnt();
	switch(swt){
        case ival:
        	bufsize = ival * sizeof(int);
        	break;
        case jval:
        	bufsize = jval * sizeof(int);
        	break;
        case kval:
        	bufsize = kval * sizeof(int);
        	break;
    }
```

