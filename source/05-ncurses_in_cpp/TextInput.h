#pragma once

/**
 * Author - BackToTheDrawignBoard
 *   Date - 2017/04/07
 *   File - TextInput.h
 */

/**
 *	TextInput - generic class for describing texual inputs of any sort
 */

#include <ncurses.h>
#include <string>
#include "Box.h"

class TextInput : public Box
{
public:
	TextInput();
	std::string getLine();
protected:
	std::string contents;
	bool full;
	int putChar(char);
};