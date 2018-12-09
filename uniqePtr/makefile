CC=g++
prog: main.o Person.o

new_delete.o:Person.h
	$(CC) -c -pedantic -Wall -Werror -Wconversion -ansi Person.cpp
main.o: main.cpp Person.h uniqePtr.h
	 $(CC) -c -pedantic -Wall -Werror -Wconversion -ansi main.cpp         
