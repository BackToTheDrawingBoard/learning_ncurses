#pragma once

/**
 * Author - BackToTheDrawingBoard
 *   Date - 2017/04/07
 *   File - ListBox.h
 */

#include "Box.h"

#include <ncurses.h>
#include <list>
#include <string>
#include <iterator>
#include <stdexcept>

class ListBox : public Box
{
public:
	ListBox(unsigned int _y, unsigned int _x, unsigned int _pos_y, unsigned int _pos_x) :
		Box(_y, _x, _pos_y, _pos_x) {}
	virtual void refresh();
	void add_string(std::string);
	std::string select(unsigned int y, unsigned int x);
protected:
	std::string leader;
	std::list<std::string> entries;
	void write_line(std::string);
};