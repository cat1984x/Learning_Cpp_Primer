#ifndef SCREEN_H
#define SCREEN_H

#include <string>

class Screen
{
public:
	using pos = std::string::size_type;

	char get() const {return contents[cursor];}
	char get(pos ht, pos wd) const;

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

inline char Screen::get(pos ht, pos wd) const
{
	return contents[ht * width + wd];
}

#endif