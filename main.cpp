#include "lineq.hh"

using std::cout;
using std::cin;
using std::cerr;

int main(void)
{
  char znak;
  cin>>znak;
  if(znak=='z')
    {
      lin_eq<complex,5> arr;
      cin>>arr.set_mat()>>arr.set_free();
      cout<<arr;
      if(!arr.solve())cout<<"Brak rozwiazan"<<'\n';
      else
	{
	  cout<<"Rozwiazanie: "<<arr.get_sol()<<'\n';
	  cout<<"Wektor bledu: "<<arr.err()<<'\n';
	  cout<<"Dl. wekt. bledu: "<<arr.err().len()<<'\n';
	}
    }
  else if (znak=='r')
    {
      lin_eq<double,5> arr;
      cin>>arr.set_mat()>>arr.set_free();
      cout<<arr;
      if(!arr.solve())cout<<"Brak rozwiazan"<<'\n';
      else
	{
	  cout<<"Rozwiazanie: "<<arr.get_sol()<<'\n';
	  cout<<"Wektor bledu: "<<arr.err()<<'\n';
	  cout<<"Dl. wekt. bledu: "<<arr.err().len()<<'\n';
	}
    }
  else cerr<<"Bledna opcja";
}
