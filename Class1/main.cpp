#include <iostream>
#include "Complejitos.h"
using namespace std;

int main()
{
   Complejitos comp1(1,4);
   Complejitos comp2(2,7);
   Complejitos comp3=comp1.sum(comp2);
   comp3.imprimir();
   Complejitos comp4(2,4);
   Complejitos comp5(1,5);
   Complejitos comp6=comp4.multi(comp5);
   comp6.imprimir();


   if (comp3.igual(comp6)==true)
       cout<<"Es igual ctrm";
   else
    cout<<"no pe";
    return 0;
}
