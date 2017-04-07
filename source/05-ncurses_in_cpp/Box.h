#pragma once

/**
 * Author - BackToTheDrawingBoard
 *   Date - 2017/04/07
 *   File - Box.h
 */

/**
 * class prototype for a C++ object that manages an ncurses window
 */

#include <ncurses.h>

class Box
{
public:
	Box();
	Box(unsigned int _y, unsigned int _x, unsigned int _pos_y, unsigned int _pos_x);
	~Box();
	virtual void refresh();

protected:
	WINDOW * window;
	unsigned int width, height, pos_x, pos_y, cursor_x, cursor_y;
	void cursor_reset();
};
