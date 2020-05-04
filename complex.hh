#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

#include <iostream>

using std::cout;
using std::cin;

#include <cmath>

struct  complex {
  double   re;   
  double   im;
  complex operator =(const double a);
};


std::ostream & operator << (std::ostream &str,const  complex in);
std::istream & operator >> (std::istream &str,complex &in);

bool operator == (const complex arg1,const  complex arg2);
bool operator == (const complex arg1,double arg2);


complex make(const double re,const  double im);
complex  operator + (const complex  Skl1,const   complex  Skl2);
complex  operator - (const complex  Skl1,const   complex  Skl2);
complex  operator * (const complex  Skl1,const   complex  Skl2);
complex  operator += (complex  &Skl1,const   complex  Skl2);

complex  operator * (const complex  Skl1,const double a);
complex sprzeg(complex in);
double modul(const complex in);
complex  operator / (const complex  Skl1,const  double  div);
complex  operator / (const complex  Skl1,const   complex  Skl2);



#endif
