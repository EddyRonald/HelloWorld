#include "Complejitos.h"
#include<iostream>

using namespace std;



Complejitos::Complejitos(double x,double y){
real=x;
imaginario=y;
}
Complejitos Complejitos::sum(Complejitos a)
{
Complejitos c(real+a.real,imaginario+a.imaginario);
return c;
}
Complejitos Complejitos::multi(Complejitos a)
{
Complejitos c(real*a.real,imaginario*a.imaginario);
return c;
}
bool Complejitos::igual(Complejitos a)
{
    if((real==a.real) && (imaginario==a.imaginario))
        return true;
    return false;
}
void Complejitos::imprimir(){
cout<<"("<<real<<";"<<imaginario<<")";}
