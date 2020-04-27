#include "lineq.hh"


bool lin_eq::solve()
{
  double main_det=det_sar(mat);

  if (main_det==0) return false;

  for (int i=0; i<SIZE; i++)
    {
      Matrix matx=mat;
      matx.colswap(i, free);
      
      solution[i]=det_sar(matx)/main_det;
    }
  return true;
}
    
std::ostream& operator << (std::ostream& str, const lin_eq leq)
{
  int pos=(SIZE%2?SIZE-1:SIZE)/2;
  for(int i=0; i<SIZE; i++)
    {
      
      
      str<<'|'<<'\t';
      for(int j=0; j<SIZE; j++) str<<leq.get_mat()[j][i]<<'\t';
      str<<"| "<<"|x"<<i+1<<'|'<<(i==pos?'=':' ')<<'|'<<leq.get_free()[i]<<'|'<<'\n';
    }
  return str;
}
	  
Vector lin_eq::err()
{
  return mat*solution-free;
}
