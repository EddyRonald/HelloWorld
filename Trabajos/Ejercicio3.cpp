#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int a;
	cout<<"Ingrese un digito:";cin>>a;
	while(a!=-1){
		if(a%2==0){
			cout<<"El numero ingresado es par";break;
		}
		else{
			cout<<"El numero ingresado es impar";break;
		}
	}
	
	getch();
	return 0;
}
