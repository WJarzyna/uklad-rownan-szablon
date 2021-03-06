#include "vect.cpp"

#define SIZE_INT 5
#define SIZE_C 5

template class Vector<double,SIZE_INT>;

template std::ostream& operator << (std::ostream &str, const Vector<double,SIZE_INT> &V);
template std::istream& operator >> (std::istream &str, Vector<double,SIZE_INT> &V);


template <>
double Vector<complex,SIZE_C>::len()
{
  complex z;
  z=0;
  for (unsigned i=0;i<SIZE_C;i++)  z+=x[i]*sprzeg(x[i]);
  return sqrt(z.re);
}


template class Vector<complex,SIZE_C>;

template std::ostream& operator << (std::ostream &str, const Vector<complex,SIZE_C> &V);
template std::istream& operator >> (std::istream &str, Vector<complex,SIZE_C> &V);


