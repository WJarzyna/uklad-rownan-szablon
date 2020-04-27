#include "matrix.hh"

class lin_eq
{
  Matrix mat;
  Vector free,solution;
public:
  bool solve();
  Vector& set_free () { return free; }
  Matrix& set_mat () { return mat; }
  const Vector get_free () const { return free; }
  const Vector get_sol () const { return solution; }
  const Matrix get_mat () const { return mat; }
  Vector err();
};

std::ostream& operator << (std::ostream& str, const lin_eq leq);
