CC=gcc
CFLAGS=-I.

calculadora: main.o stack.o
	$(CC) -o calculadora main.o stack.o

clean:
	rm -f *.o calculadora