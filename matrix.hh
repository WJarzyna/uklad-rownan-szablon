#include "vect.hh"

template <class TYPE, unsigned SIZE>
class Matrix
{
  Vector<TYPE,SIZE> V[SIZE];
public:
  
  const Vector<TYPE,SIZE> operator [] (int arg) const { return V[arg]; }
  Vector<TYPE,SIZE>& operator [] (int arg) { return V[arg]; }

  
  void transpose();
  void operator = (const Matrix<TYPE,SIZE> &B);
  void colswap(int cnum, const Vector<TYPE,SIZE> &col);

  
  TYPE det_sar();
  Vector<TYPE,SIZE> operator * (const Vector<TYPE,SIZE> &X);
};

template <class TYPE, unsigned SIZE>
std::ostream& operator << (std::ostream& str, const Matrix<TYPE,SIZE> &A);

template <class TYPE, unsigned SIZE>
std::istream& operator >> (std::istream &str, Matrix<TYPE,SIZE> &A);

