#include "matrix.hh"

template <class TYPE, unsigned SIZE>
std::ostream& operator << (std::ostream& str, const Matrix<TYPE,SIZE> &A)
{
  for (unsigned i=0; i<SIZE; i++) str<<A[i]<<'\n';
  return str;
}

template <class TYPE, unsigned SIZE>
std::istream& operator >> (std::istream &str, Matrix<TYPE,SIZE> &A)
{
  for(unsigned i=0; i<SIZE; i++) str>>A[i];
  return str;
}

template <class TYPE, unsigned SIZE>
TYPE Matrix<TYPE,SIZE>::det_sar()
{
  return V[0][0]*V[1][1]*V[2][2]+V[0][1]*V[1][2]*V[2][0]+V[0][2]*V[1][0]*V[2][1]-V[2][0]*V[1][1]*V[0][2]-V[2][1]*V[1][2]*V[2][2]-V[2][2]*V[1][0]*V[1][2];
}

template <class TYPE, unsigned SIZE>
void Matrix<TYPE,SIZE>::transpose()
{
  for(unsigned i=0; i<SIZE; i++)
    {
      for(unsigned j=0; j<i; j++)
	{	  
	  std::swap(V[i][j],V[j][i]);
	}
    }
}

template <class TYPE, unsigned SIZE>
void Matrix<TYPE,SIZE>::colswap(int cnum, const Vector<TYPE,SIZE> &col)
{
  for(unsigned i=0; i<SIZE; i++)
    { 
      V[cnum][i]=col[i];
    }
}

template <class TYPE, unsigned SIZE>
Vector<TYPE,SIZE> Matrix<TYPE,SIZE>::operator * (const Vector<TYPE,SIZE> &X)
{
  Vector<TYPE,SIZE> result;
  for (unsigned i=0; i<SIZE; i++)
    {
      TYPE res;
      res=0;
      for (unsigned j=0; j<SIZE; j++)res+=V[j][i]*X[j];
      result[i]=res;
    }
  return result;
}

template <class TYPE, unsigned SIZE>
void Matrix<TYPE,SIZE>::operator = (const Matrix<TYPE,SIZE> &B)
{
  for (unsigned i=0; i<SIZE; i++)
    {
      for (unsigned j=0; j<SIZE; j++)
	{
	  V[i][j]=B[i][j];
	}
    }
}
