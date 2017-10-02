CC = gcc
CFLAGS = -O -Wall -std=c99

clean:
	rm -f *.out test

test:
	$(CC) $(CFLAGS) -o test test.c reverse_array.c whitespace_separated_word.c endian.c
