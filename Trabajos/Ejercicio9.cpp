#include<iostream>
#include<conio.h>

using namespace std;

int insertion_sort(int array[],const int longth){
    for(int i=0;i<longth;i++){
        int temp;
        for(int j=0;j<longth-1;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1]=temp;
            }
        }
    }
   for(int i=0;i<longth;i++){
        cout<<i<<"->"<<array[i]<<endl;
}
}
int main()
{
    int x ;
    cout<<"Ingrese la dimension de su arreglo:";cin>>x;
    int arreglo[x];
    for(int i=0;i<x;i++){
        cout<<"Ingrese el digito:";cin>>arreglo[i];
    }
    cout<<"insertion sort:"<<insertion_sort(arreglo,x)<<endl;
    
    getch();
    return 0;

}
    
