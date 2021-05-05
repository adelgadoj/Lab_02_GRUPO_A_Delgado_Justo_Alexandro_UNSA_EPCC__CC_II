//Implemente una función que reciba un arreglo de cadenas y su tamaño y ordene lexicográficamente dicho arreglo.
//Tamaño del arreglo 1000000.

#include <iostream>
using namespace std;
int tam(char _cadena[], int _i, int _sum){

    if(_cadena[_i]=='\0') //Fin de cadena
        return _sum;

    return _sum+1+tam(_cadena,_i+1,_sum) ;
}
void ordenar(char _arreglo[1000000], int _t){
    char temp;
    for(int i=0 ; i<_t ; i++){
            for(int j=0 ; j< _t-1 ; j++){
                if( _arreglo[j]>_arreglo[j+1]){
                    temp=_arreglo[j];
                    _arreglo[j]=_arreglo[j+1];
                    _arreglo[j+1]=temp;
                }
            }
    }

}
int main()
{
    char cadena[1000000];
    cout<<"INGRESE CADENA: ";
    cin>>cadena;
    int cons=0 ,sum=0,t;
    t=tam(cadena,cons,sum);
    ordenar(cadena,t);
    cout<<"CADENA ORDENADA: "<<cadena;
    return 0;
}
