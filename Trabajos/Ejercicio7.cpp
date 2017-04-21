#include<iostream>
#include<conio.h>

using namespace std;
int cambio(int *x,int *y){
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
	cout<<"El valor del primer digito es:"<<*x<<endl;
	cout<<"El valor del segundo digito es:"<<*y<<endl;
}
int main(){
	int a,b;
	cout<<"Ingrese el valor del primer digito:";cin>>a;
	cout<<"Ingrese el valor del segundo digito:";cin>>b;
	cambio(&a,&b);
	
	getch();
	return 0;
}


