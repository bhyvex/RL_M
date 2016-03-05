CC=gcc
LIBS= -Os -Wall -fomit-frame-pointer -DWINDOWS -DMULTIPLE_SCORE_ENTRY -Wl,-O1 -lm win/pdcurses.a
DEPS=*.h
STRIP_BINARY=yes
larn: $(DEPS) *.c
	$(CC) *.c -o larn13_win32 $(LIBS)