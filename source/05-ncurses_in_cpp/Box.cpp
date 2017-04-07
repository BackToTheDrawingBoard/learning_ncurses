#include "Box.h"

/**
 * Remember, this is just a skeleton class, and should be implemented. Might
 * add a pure virtual function just to be obnoxious about it.
 */

Box::Box() : 	
		width(16), height(3), 
		pos_x(0), pos_y(0), 
		cursor_row(1), cursor_height(1)
{
	this->window = newwin(this->height, this->width, this->pos_y, this->pos_x);
	wmove(this->window, this->cursor_height, this->cursor_row);
}

Box::Box(unsigned int _y, unsigned int _x, unsigned int _pos_y, unsigned int _pos_x) :
		width(_x), height(_y), 
		pos_x(_pos_x), pos_y(_pos_y), 
		cursor_row(1), cursor_height(1)
{
	this->window = newwin(this->height, this->width, this->pos_y, this->pos_x);
	wmove(this->window, this->cursor_height, this->cursor_row);
}

Box::~Box () {
	delwin(this->window);
}

void Box::refresh() {
	box(this->window, 0, 0);
	wrefresh(this->window);
}

void Box::cursor_reset(){
	this->cursor_row = 1;
	this->cursor_height = 1;
	wmove(this->window, cursor_height, cursor_row);
}