/* Diseñar un programa C++ que determine si un número entero positivo introducido por teclado es
capicúa (es decir, se lee exactamente igual de izquierda a derecha que de derecha a izquierda),
utilizando el subalgoritmo escrito en el problema 6. Ejemplos de números capicúas: 23432, 11,
789987. */

#include <iostream>
#include <cmath>
using namespace std;

unsigned ud(unsigned &x);

int main() {
    unsigned n;
    cout<<"Introduzca un número natural: ";
    cin>>n;
    cout<<(n==ud(n))<<endl;
    return 0;
}

unsigned ud(unsigned &x) {
    unsigned i, aux=x, num=0;
    for(i=0; aux!=0; ++i, aux/=10) {}
    for(i; i>0; --i) {
        num+=(x%10)*pow(10, (i-1)); x/=10;
    }
    return num;
}