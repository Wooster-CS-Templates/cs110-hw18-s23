CFLAGS=-std=c99 -Wall
CC=gcc

random-sequence: sequence.o main.c
	$(CC) $(CFLAGS) sequence.o main.c -o random_sequence

test: test.o sequence.o
	$(CC) $(CFLAGS) test.o sequence.o -o test

sequence.o: sequence.h sequence.c
	$(CC) $(CFLAGS) -c sequence.c

test.o: tests/test.c sequence.h
	$(CC) $(CFLAGS) -c tests/test.c

gh-test-sequence: clean test
	./test

clean:
	rm -f random-sequence test *.o a.out
