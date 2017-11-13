#ifndef CP5_EX7_27_H
#define CP5_EX7_27_H

#include <string>
#include <ostream>

using std::string;
using std::ostream;

class Screen
{
public:
	using pos = string::size_type;

	Screen() = default;
	Screen(pos nht, pos nwd, char c): height(nht), width(nwd), contents(nht * nwd, c) {}

	char get() const { return contents[cursor]; }
	char get(pos ht, pos wd) const { return contents[ht * width + wd]; }

	Screen& set(char c);
	Screen& set(pos ht, pos wd, char c);

	Screen& move(pos ht, pos wd);

	const Screen& display(ostream& os) const 
	{ 
		os << contents; 
		return *this; 
	}
	Screen& display(ostream& os) { 
		os << contents; 
		return *this; 
	}


private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};

inline Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen& Screen::set(pos ht, pos wd, char c)
{
	contents[ht * width + wd] = c;
	return *this;
}

inline Screen& Screen::move(pos ht, pos wd)
{
	cursor = ht * width + wd;
	return *this;
}

#endif