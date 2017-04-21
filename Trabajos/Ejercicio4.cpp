#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int x,y;
	
	cout<<"Potenciacion de un numero"<<endl;
	cout<<"Ingrese la base:";cin>>x;
	cout<<"Ingrese el exponente:";cin>>y;
	
	if(y==0){
		cout<<1;
	}
	else if(y<0){
		int p=1;
		for(int i=-1;i>=y;i--){
			p*=-x;
		}
		return(p);
	}
	/*Profesor intente hacer con potencia negativa pero falla cuando 
	el exponente es impar pero cuando es par funaiona normal*/	
	else {
		int z=1;
		for(int i=1;i<=y;i++){
			z*=x;
		}
		return(z);
	}
	getch();
	return 0;
}
