#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float c,km,x=1.609344;
	
	cout<<"Digite el numero de millas:";cin>>c;
	
	km = (x*c);
	
	cout<<"el numero de km es:"<<km<<endl;
	
	getch();
	return 0;
	
}
