#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int c;
	
	cout<<"Digite un numero entro 1 y 9";cin>>c;
	
	
		switch(c){
			case -1:break;
			case 0:cout<<"El numero ingresado es cero";break;
			case 1:cout<<"El numero ingresado es uno";break;
			case 2:cout<<"El numero ingresado es dos";break;
			case 3:cout<<"El numero ingresado es tres";break;
			case 4:cout<<"El numero ingresado es cuatro";break;
			case 5:cout<<"El numero ingresado es cinco";break;
			case 6:cout<<"El numero ingresado es seis";break;
			case 7:cout<<"El numero ingresado es siete";break;
			case 8:cout<<"El numero ingresado es ocho";break;
			case 9:cout<<"El numero ingresado es nueve";break;
			default:cout<<"numero no permitido";break;
		}
	}


