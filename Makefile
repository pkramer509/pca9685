CC=gcc
CFLAGS=-Wall
LDFLAGS=-lwiringPi
DEPS=pca9865.h

.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(OBJECTS) $(LDFLAGS)

all:pca9685.c main.c
	$(CC) -o pca9685 pca9685.c main.c $(CFLAGS) $(LDFLAGS) 

.PHONY: clean
clean:
	rm -f *~ *.o pca9685

