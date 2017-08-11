#SMB2CNV
#Flags
CC=gcc
CFLAGS=-c -Wall
SOURCES=main.c global.c cmpr/cmpr.c common/common.c obj/obj.c xml/xml.c
OBJECTS=$(SOURCES:.c=.o)
PROGRAM=../bin/smb2cnv
FLAGS=-lm -std=c99

#Make program
all: $(OBJECTS)
	$(CC) $(OBJECTS) -o $(PROGRAM) $(FLAGS)

#Dependencies
%.o: %.c
	$(CC) -c $< -o $@

#Clean up
.PHONY: clean
clean:
	rm $(OBJECTS) $(PROGRAM)
