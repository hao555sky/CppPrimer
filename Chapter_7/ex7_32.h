#ifndef CP5_EX7_32_H
#define CP5_EX7_32_H

#include <string>
#include <vector>

using std::string;
using std::vector;

class Screen;

class Window_mgr
{
public:
	using ScreenIndex = vector<Screen>::size_type;

	void clear(ScreenIndex);

private:
	vector<Screen> screens;
};

class Screen
{
	friend void Window_mgr::clear(ScreenIndex);

public:
	using pos = string::size_type;

	Screen() = default;
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {}

	char get() const { return contents[cursor]; }
	char get(pos ht, pos wd) const { return contents[ht * width + wd]; }

	Screen& move(pos ht, pos wd);
	Screen& set(char);
	Screen& set(pos, pos, char);

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};

void Window_mgr::clear(ScreenIndex i)
{
	Screen& s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

Screen& Screen::move(pos ht, pos wd)
{
	cursor = ht * width + wd;
	return *this;
}

Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

Screen& Screen::set(pos ht, pos wd, char c)
{
	contents[ht * width + wd] = c;
	return *this;
}

#endif