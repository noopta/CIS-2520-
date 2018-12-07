run: main ackermans nonrecursive recursive carbon
	gcc -Wall -pedantic main.o ackermans.o recursive.o nonrecursive.o carbon.o -o run

main: main.c
	gcc -Wall -ansi -pedantic -c main.c -o main.o

ackermans: ackermans.c
	gcc -Wall -ansi -pedantic -c ackermans.c -o ackermans.o

recursive: recursive.c
	gcc -Wall -ansi -pedantic -c recursive.c -o recursive.o

nonrecursive: nonrecursive.c
	gcc -Wall -ansi -pedantic -c nonrecursive.c -o nonrecursive.o

carbon: carbon.c
	gcc -Wall -ansi -pedantic -c carbon.c -o carbon.o
