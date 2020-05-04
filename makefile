CC=g++
CFLAGS=-pedantic -Wall -std=c++17 -iquote inc

DEPS= vect.hh #lineq.hh matrix.hh

OBJ=main.o vect.o #lineq.o matrix.o

PROGNAME=urown.x

%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testz: $(OBJ) 
	$(CC) -o $(PROGNAME) $(OBJ)

clean:
	rm *.o *~

del:
	rm $(PROGNAME)
