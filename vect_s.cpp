#include "vect.cpp"

#define SIZE_INT 3
#define SIZE_C 2

template class Vector<int,SIZE_INT>;

template std::ostream& operator << (std::ostream &str, const Vector<int,SIZE_INT> &V);
template std::istream& operator >> (std::istream &str, Vector<int,SIZE_INT> &V);

template class Vector<complex,SIZE_C>;

template std::ostream& operator << (std::ostream &str, const Vector<complex,SIZE_C> &V);
template std::istream& operator >> (std::istream &str, Vector<complex,SIZE_C> &V);


