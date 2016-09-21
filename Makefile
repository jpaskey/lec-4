# Simple Makefile for 2113 Lec 4

CFLAGS=-g
DEPS=tests.h

cleaner: tests.o clean_newline.o
	gcc clean_newline.o tests.o -o cleaner $(CFLAGS)

tests.o: tests.c $(DEPS)
	gcc -c tests.c $(CFLAGS)

clean_newline.o: clean_newline.c $(DEPS)
	gcc -c clean_newline.c $(CFLAGS)
