//Implementar una función que ordene los elementos de un arreglo: ascendente. Tamaño del arreglo 1000000.
#include <iostream>
#include <stdlib.h>
using namespace std;
void ingresar(int _arreglo[1000000], int _t){
    for(int i=0; i<_t ; i++)
        cin>>_arreglo[i];

}
void mostrar(int _arreglo[1000000], int _t){
    cout<<"A={";
    for(int i=0 ; i<_t ; i++){
        cout<<_arreglo[i]<<" ";
    }
    cout<<"}"<<endl;

}
void ordenar(int _arreglo[1000000], int _t){
    int temp;
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
    int t;
    cout<<"TAMANIO ARREGLO:";
    cin>>t;
    int arreglo[t];
    ingresar(arreglo,t);
    mostrar(arreglo,t);
    ordenar(arreglo,t);
    mostrar(arreglo,t);
    return 0;
}
