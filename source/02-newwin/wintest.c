/**
 * Author - BackToTheDrawingBoard
 *   Date - 2017/03/28
 * Indent - Tabs (4 space width)
 */


#include <ncurses.h>

int main (int argc, char ** argv){
	char gc;
	initscr();				// Start the curses system
	
	/*  <- add/remove an extra slash here to use the comment switch
	raw();					// Turn off buffering and receive all keystrokes
	/*/						// (even keystrokes like C-c and C-x
	cbreak();				// Turn off buffering and receive signals normally
	//*/
	noecho();				// Don't echo with getch()
	keypad(stdscr, true);	// Get keypad input
	printw("Going to create a new window...\n");
	getch();

	WINDOW * w = newwin(LINES,10,0,0);
	attron(A_REVERSE);
	box(w, 0, 0);
	attroff(A_REVERSE);
	wrefresh(w);

	printw("Just made and tried to print!\n");

	getch();

	delwin(w);

	getch();
	endwin();

	return 0;
}
