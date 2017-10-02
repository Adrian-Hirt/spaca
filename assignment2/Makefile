CC = gcc
CFLAGS = -O -Wall -std=c99

clean:
	rm -f *.out test bst

test:
	$(CC) $(CFLAGS) -o test test.c reverse_array.c whitespace_separated_word.c endian.c

bst:
	$(CC) $(CFLAGS) -o bst bst.c test_bst.c
