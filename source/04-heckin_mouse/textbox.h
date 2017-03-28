#include <ncurses.h>

#define INPUT_FRAGMENT_SIZE 1024
#define INPUT_FRAGMENT_CAP  1020

struct _if_st {
	struct _if_st * next;
	char * text;
	unsigned int num_chars;
} input_fragment;


struct _tib_st {
	WINDOW * window;
	size_t row_lim, col_lim, textwidth, textheight;
	input_fragment * first_fragment;
} text_input_box;

input_fragment * if_init();
int if_destroy(input_fragment * target);
size_t if_length(input_fragment * head);

text_input_box * tib_init();
int tib_destroy(text_input_box * target);
int tib_clear(text_input_box * target);
int tib_extract_message(char * dest, size_t length);
