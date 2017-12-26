CC=gcc
CFLAGS=-Wall
LDFLAGS=-lwiringPi
DEPS=pca9685.h

all:pca9685.c main.c
	$(CC) -o test pca9685.c main.c $(DEPS) $(CFLAGS) $(LDFLAGS) 

.PHONY: clean
clean:
	rm -f *~ *.o test

