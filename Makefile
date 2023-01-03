main: main.o fibonacci.o
	cc -o main main.o fibonacci.o

main.o: main.c fibonacci.h
	cc -c main.c

fibonacci.o: fibonacci.c
	cc -c fibonacci.c

.PHONY: clean

clean:
	rm main main.o fibonacci.o