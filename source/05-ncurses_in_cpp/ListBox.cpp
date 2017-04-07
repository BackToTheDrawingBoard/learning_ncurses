/**
 * Author - BackToTheDrawingBoard
 *   Date - 2017/4/07
 *   File - ListBox.cpp
 */

#include "ListBox.h"

void ListBox::write_line(std::string s) {
	waddnstr(this->window, s.c_str(), this->width - 2);
	++this->cursor_y;
	this->cursor_x = 1;
	wmove(this->window, this->cursor_y, this->cursor_x);
}

void ListBox::refresh() {
	std::list<std::string>::iterator i;
	box(this->window, 0, 0);
	this->cursor_reset();

	for(i = this->entries.begin(); i != this->entries.end() && this->cursor_y < (this->height - 1); ++i){
		this->write_line(* i);
	}

	wrefresh(this->window);
}

void ListBox::add_string(std::string s){
	this->entries.push_back(s);
}

// TODO - update with exception?
std::string ListBox::select(unsigned int y, unsigned int x) {
	unsigned int i;
	std::string s;
	std::list<std::string>::iterator iter;
	if(y > this->height || x > this->width || y < 1)
		return std::string("");
		// throw out_of_range("select() received an out of range argument");
	iter = this->entries.begin();

	for(i = 0; i < y - 1; ++i)
		if(++iter == this->entries.end())
			return std::string("");
	

	s = * iter;
	this->entries.erase(iter);
	this->entries.push_front(s);
	this->refresh();
	return s;
}