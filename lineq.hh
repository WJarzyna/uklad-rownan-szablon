#include "matrix.hh"

template <class TYPE, unsigned SIZE>
class lin_eq
{
  Matrix<TYPE,SIZE> mat;
  Vector<TYPE,SIZE> free,solution;
public:
  bool solve();
  Vector<TYPE,SIZE>& set_free () { return free; }
  Matrix<TYPE,SIZE>& set_mat () { return mat; }
  const Vector<TYPE,SIZE> get_free () const { return free; }
  const Vector<TYPE,SIZE> get_sol () const { return solution; }
  const Matrix<TYPE,SIZE> get_mat () const { return mat; }
  Vector<TYPE,SIZE> err();
};

template <class TYPE, unsigned SIZE>
std::ostream& operator << (std::ostream& str, const lin_eq<TYPE,SIZE> leq);
