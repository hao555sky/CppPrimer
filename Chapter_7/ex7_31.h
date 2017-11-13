#ifdef CP5_EX7_31_H
#define CP5_EX7_31_H

struct Y;

struct X
{
	Y *y = nullptr;
};

struct Y
{
	X x;
};

#endif