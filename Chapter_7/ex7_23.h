#ifndef CP5_EX7_23_H
#define CP5_EX7_23_H

#include <string>

class Screen
{
public:
	using pos = string::size_type;

	Screen() = default;
	Screen(pos ht, pos wd, char c): height(ht), width(wd), content(ht * wd, c) {}

	char get() { return content[cursor]; }
	inline char get(pos ht, pos wd) { return content[ht * width + wd]; }
	Screen& move(pos ht, pos wd) { cursor = ht * width + wd; return * this;}

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string content;
};

#endif