#include "complex.hh"

std::ostream & operator << (std::ostream &str, const complex in)
{
  str << '(' << in.re << std::showpos << in.im << std::noshowpos << "i)";
  return str;
}


std::istream & operator >> (std::istream &str,complex &in)
{
  char znak;
  str>>znak;
  if(znak!='(')str.setstate(std::ios::failbit);
  str>>in.re;
  str>>in.im;
  str>>znak;
  if(znak!='i')str.setstate(std::ios::failbit);
  str>>znak;
  if(znak!=')')str.setstate(std::ios::failbit);
  return str;
}

complex complex:: operator =(const double a)
{
  re=a;
  im=0;
  return *this;
}

bool operator == (const complex arg1, const complex arg2)
{
  if(arg1.re==arg2.re&&arg1.im==arg2.im) return true;
  else return false;
}





complex make(const double re,const double im)
{
  complex out;
  out.re=re;
  out.im=im;
  return out;
}

complex  operator + (const complex  Skl1,const   complex  Skl2)
{
  complex  Wynik;
  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

complex  operator - (const complex  Skl1, const  complex  Skl2)
{
  complex  Wynik;
  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

complex  operator * (const complex  Skl1,const double a)
{
  complex  Wynik;
  Wynik.re = Skl1.re*a;
  Wynik.im = Skl1.im*a;
  return Wynik;
} 
complex  operator * (const complex  Skl1,const   complex  Skl2)
{
  complex  Wynik;
  Wynik.re = Skl1.re*Skl2.re-Skl1.im*Skl2.im;
  Wynik.im = Skl1.im*Skl2.re+Skl2.im*Skl1.re;
  return Wynik;
}

complex  operator += ( complex  &Skl1,const   complex  Skl2)
{
  Skl1.re += Skl2.re;
  Skl1.im += Skl2.im;
  return Skl1;
}

complex sprzeg(complex in)
{
  in.im=-in.im;
  return in;
}

double modul(const complex in)
{
  return sqrt(in.re*in.re+in.im*in.im);
}

complex  operator / (const complex  Skl1,const  double  div)
{
  complex out;
  out.re=Skl1.re/div;
  out.im=Skl1.im/div;
  return out;
}


complex  operator / (complex  Skl1,  complex  Skl2)
{
  return ( Skl1 * sprzeg(Skl2)  ) / ( modul(Skl2) * modul(Skl2) );
}
