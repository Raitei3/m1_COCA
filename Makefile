CFLAGS = -std=c99 -Wall -g
CC = gcc

all :	c10 sierp3

c10 : c10.c main.c graphUtility.c
			$(CC) $(CFLAGS)  -o c10 main.c c10.c graphUtility.c

sierp3 : sierp3.c main.c graphUtility.c
			$(CC) $(CFLAGS)  -o sierp3 main.c sierp3.c graphUtility.c


clean :
	rm -f *.o c10 sierp3
