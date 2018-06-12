#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <vector>

class Screen;

class Window_mgr
{
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex i);
// private:
	std::vector<Screen> screens;
	// std::vector<Screen> screens{Screen(24, 80, ' ')};
};

class Screen
{
	friend void Window_mgr::clear(ScreenIndex i);

public:
	using pos = std::string::size_type;

	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd),
	contents(ht * wd, ' '){}
	Screen(pos ht, pos wd, char c): height(ht), width(wd), 
	contents(ht * wd, c){}

	char get() const {return contents[cursor];}
	char get(pos ht, pos wd) const;
	Screen move(pos r, pos c);
	Screen set(char ch);
	Screen set(pos row, pos col, char ch);
	Screen display(std::ostream &os);
	const Screen display(std::ostream &os) const;
	pos size() const;

private:
	void do_display(std::ostream &os) const { os << contents; }
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

inline char Screen::get(pos ht, pos wd) const
{
	return contents[ht * width + wd];
}

inline Screen Screen::move(pos r, pos c)
{
	cursor = r * width + c;
	return *this;
}

inline Screen Screen::set(char ch)
{
	contents[cursor] = ch;
	return *this;
}

inline Screen Screen::set(pos row, pos col, char ch)
{
	contents[row * width + col] = ch;
	return *this;
}

inline Screen Screen::display(std::ostream &os)
{
	do_display(os);
	return *this;
}

inline const Screen Screen::display(std::ostream &os) const
{
	do_display(os);
	return *this;
}

inline Screen::pos Screen::size() const
{
	return height * width;
}

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}


#endif