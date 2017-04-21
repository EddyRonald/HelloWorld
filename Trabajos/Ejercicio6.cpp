#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float b,c,d;
	char a;
	cout<<"Ingrese el operador:";cin>>a;
	switch(a){
		case '+':
			cout<<"Ingrese el valor del primer operador:";cin>>b;
			cout<<"Ingrese el valor del segundo operador:";cin>>c;
			d = b + c;
			cout<<d;break;
		case '*':
			cout<<"Ingrese el valor del primer operador:";cin>>b;
			cout<<"Ingrese el valor del segundo operador:";cin>>c;
			d = b * c;
			cout<<d;break;
	}
}


