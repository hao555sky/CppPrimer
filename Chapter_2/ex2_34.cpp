#include <iostream>

int main()
{
	int i = 0, &r = i;
	const int ci = i, &cr = ci;
	auto a = r;  // a为一个整数（r是i的别名，而i是一个整数）
	auto b = ci; // b是一个整数（ci的顶层const 特性被忽略掉了）
	auto c = cr; // c是一个整数（cr是ci的别名，ci本身是一个顶层const）
	auto d = &i; // d是一个整型指针（整数的地址就是指向整数的指针）
	auto e = &ci; // e是一个指向整数常量的指针（对常量对象取地址是一种底层const）
	auto &g = ci;

	a = 42;
	b = 42;
	c = 42;
	*d = 42;
	e = &c;
	// g = 42; // 非法，g为整型常量引用，已绑定整型常量

	return 0;
}