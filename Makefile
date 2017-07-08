all:main.o show.o input.o get_random.o 
	gcc -o all main.o show.o input.o get_random.o
main.o:main.c common.h
	gcc -c main.c
show.o:show.c show.h common.h
	gcc -c show.c
input.o:input.c input.h common.h
	gcc -c input.c
get_random.o:get_random.c get_random.h common.h
	gcc -c get_random.c

clean:
	rm -f *.o all

