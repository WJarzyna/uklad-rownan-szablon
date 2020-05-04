#include "lineq.cpp"

#define SIZE_INT 5
#define SIZE_C 5

template class lin_eq<double,SIZE_INT>;
template std::ostream& operator << (std::ostream& str, const lin_eq<double,SIZE_INT> leq);


template class lin_eq<complex,SIZE_C>;
template std::ostream& operator << (std::ostream& str, const lin_eq<complex,SIZE_C> leq);
