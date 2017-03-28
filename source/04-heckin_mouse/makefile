CC=gcc
CFLAGS=-c -Wall
CLIBS=-lncurses

SOURCES=interface.c main.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=b.out

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	echo $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(CLIBS)

.c.o:
	$(CC) $(CFLAGS) $< -o $@ $(CLIBS)

clean: 
	rm -f $(EXECUTABLE) *.o
