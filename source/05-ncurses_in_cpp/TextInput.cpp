/**
 * Author - BackToTheDrawingBoard
 *   Date - 2017/04/07
 *   File - TextInput.cpp
 */

#include "TextInput.h"

TextInput::TextInput() : contents(), full(false) {}

std::string TextInput::getLine() {
	this->cursor_reset();
	char gc;
	while((gc = getch()) != '\n'){
		if (this->putChar(gc) == -1) {
			return this->contents;
		}
	}
	return this->contents;
}

int TextInput::putChar(char c){
	unsigned int y, x;
	contents += c;
	// Get coords and check
	getyx(this->window, y, x);
	if(x >= this->width - 1){
		if(y >= this->height - 2){
			// Cannot write any more to the window
			return -1;
		}
		// Move cursor to start of new line
		wmove(this->window, y + 1, 1);
	}


	waddch(this->window, c);
	wrefresh(this->window);

	return 0;
}