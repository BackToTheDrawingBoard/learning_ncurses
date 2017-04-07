CC=g++
CFLAGS=-c -Wall
CLIBS=-lncurses

SOURCES=main.cpp TextInput.cpp Box.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=b.out

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	echo $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(CLIBS)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@ $(CLIBS)

clean: 
	rm -f $(EXECUTABLE) *.o
