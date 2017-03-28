/**
 * Author - BackToTheDrawingBoard
 *   Date - 2017/03/28
 * Indent - Tabs (4 space width)
 */


#include <ncurses.h>
#include "interface.h"

int main (int argc, char ** argv){

	char * intro_message = "BackToTheDrawingBoard";

	initscr();				// Start the curses system
	
	/*  <- add/remove an extra slash here to use the comment switch
	raw();					// Turn off buffering and receive all keystrokes
	/*/						// (even keystrokes like C-c and C-x
	cbreak();				// Turn off buffering and receive signals normally
	//*/
	noecho();				// Don't echo with getch()
	keypad(stdscr, true);	// Get keypad input

	// Write welcome message

	mvprintw(LINES/2, (COLS-(sizeof(intro_message)/sizeof(intro_message[0])))/2,
		"%s\n", intro_message);
	refresh();
	getch();

	// Call into interface to start real program execution
	interface_main();

	getch();
	endwin();

	return 0;
}
