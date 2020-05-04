#include "matrix.hh"

using std::cout;
using std::cin;

int main(void)
{
  Matrix<int,3> x;
  Matrix<complex,2> y;
  cin>>x>>y;
  cout<<x<<y;
}
