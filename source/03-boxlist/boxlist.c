/**
 * Author - BackToTheDrawingBoard
 *   Date - 2017/03/28
 * Indent - Tabs (4 space width)
 */


#include <ncurses.h>

int main (int argc, char ** argv){
	int i;
	char * carr[] = {
		"name 1",
		"this is a name that's probably too long",
		"name 3",
		"Sibek the Gryph"
	};
	char gc;
	initscr();				// Start the curses system
	
	/*  <- add/remove an extra slash here to use the comment switch
	raw();					// Turn off buffering and receive all keystrokes
	/*/						// (even keystrokes like C-c and C-x
	cbreak();				// Turn off buffering and receive signals normally
	//*/
	noecho();				// Don't echo with getch()
	keypad(stdscr, true);	// Get keypad input
	getch();
	addch(' ');


	WINDOW * w = newwin(LINES,20,0,0);
	box(w, 0, 0);
	
	// print names in box
	for(i = 0; i < sizeof(carr)/sizeof(carr[0]); ++i)
		mvwprintw(w, i+1, 1, "%s\n", carr[i]);

	wrefresh(w);

	getch();

	delwin(w);

	getch();
	endwin();

	return 0;
}
