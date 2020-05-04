#include "matrix.cpp"

#define SIZE_INT 5
#define SIZE_C 5

template class Matrix<double,SIZE_INT>;


template std::ostream& operator << (std::ostream &str, const Matrix<double,SIZE_INT> &V);
template std::istream& operator >> (std::istream &str, Matrix<double,SIZE_INT> &V);


template class Matrix<complex,SIZE_C>;

template std::ostream& operator << (std::ostream &str, const Matrix<complex,SIZE_C> &V);
template std::istream& operator >> (std::istream &str, Matrix<complex,SIZE_C> &V);
