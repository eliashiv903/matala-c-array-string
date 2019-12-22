CC = gcc
FLAGS = -Wall -g

all:isort txtfind

isort: main_sort.o Arr.o Arr.h 
	$(CC) -Wall -o isort main_sort.o Arr.o 
txtfind: main_txt.o Text.o Text.h
	$(CC) -Wall -o txtfind main_txt.o Text.o 
main_txt.o: main_txt.c Text.c
	$(CC) -Wall -c -fPIC -c main_txt.c Text.c 
main_sort.o: main_sort.c Arr.c
	$(CC) -Wall -c -fPIC -c main_sort.c Arr.c 
.PHONY:clean all

clean:
	rm -f *.o *.a *.so isort txtfind
