#include <ncurses.h>
#include "interface.h"

void interface_main() {
	int sidebar_width = 20, textinput_height = 4;
	// Create sidebar
	WINDOW * sidebar = newwin(LINES, sidebar_width, 0, 0);
	box(sidebar, 0, 0);

	WINDOW * main_window = newwin(LINES - textinput_height, COLS - sidebar_width, 0, sidebar_width);
	box(main_window, 0, 0);

	WINDOW * text_input = newwin(textinput_height, COLS - sidebar_width, LINES - textinput_height, sidebar_width);
	box(text_input, 0, 0);

	wrefresh(sidebar);
	wrefresh(main_window);
	wmove(text_input, 1, 1);
	wrefresh(text_input);

	char gc;
	while((gc = getch()) != '\n'){
		waddch(text_input, gc);
		wrefresh(text_input);
	}
}
