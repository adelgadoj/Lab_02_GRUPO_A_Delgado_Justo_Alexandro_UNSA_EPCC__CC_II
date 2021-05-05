//4. Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)
#include <iostream>
using namespace std;
int tam(char _cadena[], int _i, int _sum){

    if(_cadena[_i]=='\0') //Fin de cadena
        return _sum;

    return _sum+1+tam(_cadena,_i+1,_sum) ;
}

int main()
{
    char cadena[100];
    int indice=0;
    int sum=0;
    cout<<"Introduce cadena: ";
    cin>>cadena;
    cout<<"TAMANIO: "<<tam(cadena,indice,sum);
    return 0;
}
