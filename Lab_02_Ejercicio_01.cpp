//1.Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.
//  Tamaño del arreglo 1000000. (Iterativa y recursiva).

#include <iostream>
using namespace std;
long long int sum(long long int n,long long int suma,int arreglo[1000000]){
    if(n==0)
        return suma;
    else{
        suma=suma+arreglo[n-1];
        n--;
        return sum(n,suma,arreglo);
    }
}
int main()
{
    long long int s=0;
    int t;
    cout<<"TAMAÑO ARREGLO:";
    cin>>t;
    int A[t];
    for(int i=0;i<t;i++){
        cin>>A[i];
    }
    cout<<sum(t,s,A);
    return 0;
}
