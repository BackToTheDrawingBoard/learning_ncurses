/**
 * Author - BackToTheDrawingBoard
 *   Date - 2017/4/07
 *   File - ListBox.cpp
 */

#include "ListBox.h"

void ListBox::write_line() {
	
}

void ListBox::refresh() {
	int i;
	box(this->window, 0, 0);
	this->cursor_reset();

	for(i = 0; i < this->entries.size() && t < (this->height - 2); ++i){
		write_line(entires[i]);
	}

	wrefresh(this->window);
}