all: lists.c
		gcc -o all lists.c main.c

clean:
		rm *.o

run: all
		./all
