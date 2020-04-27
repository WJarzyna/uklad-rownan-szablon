#include "matrix.hh"

std::ostream& operator << (std::ostream& str, const Matrix &A)
{
  for (int i=0; i<SIZE; i++) str<<A[i]<<'\n';
  return str;
}

std::istream& operator >> (std::istream &str, Matrix &A)
{
  for(int i=0; i<SIZE; i++) str>>A[i];
  return str;
}


double det_sar(const Matrix &A)
{
  return A[0][0]*A[1][1]*A[2][2]+A[0][1]*A[1][2]*A[2][0]+A[0][2]*A[1][0]*A[2][1]-A[2][0]*A[1][1]*A[0][2]-A[2][1]*A[1][2]*A[2][2]-A[2][2]*A[1][0]*A[1][2];
}
	  
void Matrix::transpose()
{
  for(int i=0; i<SIZE; i++)
    {
      for(int j=0; j<i; j++)
	{	  
	  std::swap(V[i][j],V[j][i]);
	}
    }
}

void Matrix::colswap(int cnum, const Vector col)
{
  for(int i=0; i<SIZE; i++)
    { 
      V[cnum][i]=col[i];
    }
}

Vector operator * (const Matrix A, const Vector X)
{
  Vector result;
  for (int i=0; i<SIZE; i++)
    {
      double res=0;
      for (int j=0; j<SIZE; j++)res+=A[j][i]*X[j];
      result[i]=res;
    }
  return result;
}

void Matrix::operator = (const Matrix B)
{
  for (int i=0; i<SIZE; i++)
    {
      for (int j=0; j<SIZE; j++)
	{
	  V[i][j]=B[i][j];
	}
    }
}
