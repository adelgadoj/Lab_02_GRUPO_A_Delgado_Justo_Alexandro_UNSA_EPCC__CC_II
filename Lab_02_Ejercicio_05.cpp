//Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).
#include <iostream>
#include <string>
using namespace std;
string concatenar(string _b, string _a){
        return _b+_a;
}
int main()
{
    string a,b;
    cout<<"INGRESE CADENA 'a' : ";
    cin>>a;
    cout<<"INGRESE CADENA 'b' : ";
    cin>>b;
    cout<<concatenar(b,a);

    return 0;
}
