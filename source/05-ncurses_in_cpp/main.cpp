/**
 * Author - BackToTheDrawignBoard
 *   Date - 2017/04/07
 *   File - main.cpp
 */

#include <ncurses.h>
#include "__05_static_strings.h"
#include "ListBox.h"

int main(int argc, char ** argv){
	// Setup ncurses
	initscr();
	noecho();
	cbreak();
	keypad(stdscr, true);

	// Center-print the welcome message and wait for input
	mvprintw(LINES/2, (COLS-(sizeof(welcome_message)/sizeof(welcome_message[0])))/2,
		"%s\n", welcome_message);
	refresh();
	getch();

	ListBox t = ListBox(10, 10, 0, 0);
	ListBox t2 = ListBox(LINES - 10, 10, 10, 0);

	t.add_string(std::string("One"));
	t.add_string(std::string("Two"));
	t.add_string(std::string("Three"));

	t.refresh();
	t2.refresh();
	getch();

	t.select(2, 1);
	t.refresh();
	getch();

	// Exit ncurses
	endwin();
	return 0;
}