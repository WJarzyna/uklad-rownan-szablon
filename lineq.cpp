#include "lineq.hh"

template <class TYPE, unsigned SIZE>
bool lin_eq<TYPE,SIZE>::solve()
{
  TYPE main_det=mat.det_lap();

  if (main_det==0.0) return false;

  for (unsigned i=0; i<SIZE; i++)
    {
      Matrix<TYPE,SIZE> matx=mat;
      matx.colswap(i, free);
      
      solution[i]=matx.det_lap()/main_det;
    }
  return true;
}



template <class TYPE, unsigned SIZE>
std::ostream& operator << (std::ostream& str, const lin_eq<TYPE,SIZE> leq)
{
  int pos=(SIZE%2?SIZE-1:SIZE)/2;
  for(unsigned i=0; i<SIZE; i++)
    {
      
      
      str<<'|'<<'\t';
      for(unsigned j=0; j<SIZE; j++) str<<leq.get_mat()[j][i]<<'\t';
      str<<"| "<<"|x"<<i+1<<'|'<<(i==pos?'=':' ')<<'|'<<leq.get_free()[i]<<'|'<<'\n';
    }
  return str;
}


template <class TYPE, unsigned SIZE>
Vector<TYPE,SIZE> lin_eq<TYPE,SIZE>::err()
{
  return mat*solution-free;
}
