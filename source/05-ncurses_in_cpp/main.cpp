/**
 * Author - BackToTheDrawignBoard
 *   Date - 2017/04/07
 *   File - main.cpp
 */

#include <ncurses.h>
#include "__05_static_strings.h"
#include "TextInput.h"

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

	TextInput t = TextInput();
	std::string s;

	t.refresh();
	s = t.getLine();

	mvprintw(LINES/2, (COLS-(sizeof(s.c_str())/sizeof(s.c_str()[0])))/2,
		"%s\n", s.c_str());
	refresh();
	getch();

	// Exit ncurses
	endwin();
	return 0;
}