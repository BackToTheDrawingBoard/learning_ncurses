#include <ncurses.h>

int main () {
	// Start ncurses
	initscr();
	// Write message
	printw("Hello world!");
	// Write out to the terminal
	refresh();
	// Wait for input
	getch();
	// Close window
	endwin();

	return 0;
}

