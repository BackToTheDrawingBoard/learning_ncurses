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

class ListBox : public Box
{
public:
	virtual void refresh();
protected:
	std::string leader;
	std::list<std::string> entries;
	void write_line(std::string);
};