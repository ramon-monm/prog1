// Diseñar un programa C++ que calcule el factorial de un número entero positivo, a, introducido por teclado.

#include <iostream>
using namespace std;

int main() {
    unsigned a, n;
    cout<<"Introduzca un número entero positivo: ";
    cin>>a;
    n=a;
    while(n>1 || n==0) {
        if(a>0) {
            --n;
            a=a*n;
        }
        else if(a==0) {
            a=1; break;
        }
    }
    cout<<"El resultado es "<<a<<"."<<endl;
    return 0;
}