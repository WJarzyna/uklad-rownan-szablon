#include "matrix.cpp"

#define SIZE_INT 3
#define SIZE_C 2

template class Matrix<int,SIZE_INT>;


template std::ostream& operator << (std::ostream &str, const Matrix<int,SIZE_INT> &V);
template std::istream& operator >> (std::istream &str, Matrix<int,SIZE_INT> &V);


template class Matrix<complex,SIZE_C>;

template std::ostream& operator << (std::ostream &str, const Matrix<complex,SIZE_C> &V);
template std::istream& operator >> (std::istream &str, Matrix<complex,SIZE_C> &V);
