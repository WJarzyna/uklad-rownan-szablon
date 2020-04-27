CC=g++
CFLAGS=-pedantic -Wall -std=c++17 -iquote inc

DEPS=lineq.hh matrix.hh vect.hh

OBJ=main.o matrix.o vect.o lineq.o

PROGNAME=urown.x

%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testz: $(OBJ) 
	$(CC) -o $(PROGNAME) $(OBJ)

clean:
	rm *.o *~

del:
	rm $(PROGNAME)
