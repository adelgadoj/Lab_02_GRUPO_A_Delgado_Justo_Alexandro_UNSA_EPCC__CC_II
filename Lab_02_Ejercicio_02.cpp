//2. Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).
//   Tamaño del arreglo 1000000.
#include <iostream>
using namespace std;
int invertir(int t, int arreglo[1000000], int cont,int v){
    int aux=arreglo[cont];
    if(t<=v){
        return 0;
    }
    else{
        arreglo[cont]=arreglo[t-1];
        arreglo[t-1]=aux;
        t--;
        cont++;
        return invertir(t,arreglo,cont,v);
    }
}
void mostrar(int arreglo[1000000], int t){
    cout<<"EL ARREGLO ES:"<<endl;
    for(int i=0; i<t ; i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int c=0,tam;
    cout<<"ingrese tamaño arreglo:";
    cin>>tam;
    int A[tam];
    for(int i=0; i<tam ; i++){
        cin>>A[i];
    }
    int var=tam/2;
    mostrar(A,tam);
    invertir(tam,A,c,var);
    mostrar(A,tam);
    return 0;
}
