CC=g++
CFLAGS=-pedantic -Wall -std=c++17 -iquote inc

DEPS=complex.hh vect.hh lineq.hh matrix.hh

OBJ=main.o vect_s.o lineq_s.o matrix_s.o complex.o

PROGNAME=urown.x

%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testz: $(OBJ) 
	$(CC) -o $(PROGNAME) $(OBJ)

clean:
	rm *.o *~

del:
	rm $(PROGNAME)
