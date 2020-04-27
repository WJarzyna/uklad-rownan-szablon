#include "vect.hh"

class Matrix
{
  Vector V[SIZE];
public:
  
  const Vector operator [] (int arg) const { return V[arg]; }
  Vector& operator [] (int arg) { return V[arg]; }
  void transpose();
  void operator = (const Matrix B);
  void colswap(int cnum, const Vector col);
};

std::ostream& operator << (std::ostream& str, const Matrix &A);
std::istream& operator >> (std::istream &str, Matrix &A); 
double det_sar(const Matrix &A);
Vector operator * (const Matrix A, const Vector X);

