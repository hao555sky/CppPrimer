## 练习9.1

>(a) 读取固定数量的单词，将他们按字典序插入到容器中。我们将在下一章看到，关联容易更适合这个问题。
>
>(b) 读取未知数量的单词，总是将新单词插入到末尾。删除操作在头部进行。
>
>(c) 从一个文件读取未知数量的整数。将这些数排序，然后将他们打印到标准输出。

(a) `set` 最好，其次是`list`，比`vector`和`deque`好，因为我们需要频繁的以字典序在中间插入元素

(b) `deque`，因为需要在头尾部进行插入删除操作

(c) `vector`, 不需要在头尾部进行插入删除，并且因为需要小元素和空间消耗问题，故不用`list`和`forward_list`

## 练习9.2

```cpp
list<deque<int>> ldi;
```

## 练习9.3

> 构成迭代器范围的迭代器有何限制？

如果满足如下条件，两个迭代器`begin`和`end`构成一个迭代器范围：

* 他们指向同一个容器中的元素
* 我们可以通过反复递增 begin 来到达 end，即 end 不在 begin 之前。

## 练习9.4

> 编写函数，接受一对指向 vector<int> 迭代器和一个 int 值。在两个迭代器指定的范围中查找给定的值，返回一个布尔值来指出是否找到。

```cpp
bool find(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
	while(beg != end)
	{
		if (*beg == val)
			return true;
		beg++;
	}
	return false;
}
```

## 练习9.5

> 重写上一题的函数，返回一个迭代器指向找到的元素。注意，程序必须处理未找到给定值的情况。

```cpp
vector<int>::iterator find2(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
	while(beg != end)
	{
		if (*beg == val)
			return beg;
		beg++;
	}
	return end;
}
```

## 练习9.6

> 下面程序又和错误？你应该如何修改它？

```cpp
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
while(iter1 < iter2) /* ... */
```

修改

```cpp
while (iter1 != iter2)
```

`list`迭代器属于`bidirectional iterator`， 不支持迭代器之间的不等式比较（`<`, `>`, `<= `和 `>+`）

[Iterator](http://www.cplusplus.com/reference/iterator/)

## 练习9.7

> 为了索引 int 的 vector 中的元素，应该使用什么类型？

```cpp
vector<int>::value_type;
```

## 练习9.8

> 为了读取 string 的 list 中的元素，应该使用什么类型？如果写入 list ，又该使用什么类型？

```cpp
list<string>::const_iterator; // read
list<string>::iterator;  // write
```





