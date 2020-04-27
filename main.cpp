// test szablonu wektora -> kompilowac tylko vect_s.cpp, complex.cpp, main.cpp 

#include "vect.hh"
#include "complex.hh"

using std::cout;
using std::cin;

int main(void)
{
  Vector<int,3> x;
  Vector<complex,2> y;
  cin>>x>>y;
  cout<<x<<y;
}
