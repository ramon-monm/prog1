/* Escribir un subalgoritmo que, dado un número entero positivo, calcule el valor de dicho número
escrito al revés utilizando la técnica de divisiones sucesivas. Por ejemplo, para 123 la función
calcularía 321. */

#include <iostream>
#include <cmath>
using namespace std;

unsigned ud(unsigned &x);
    
int main() {
    unsigned n;
    cout<<"Introduzca un número entero positivo: ";
    cin>>n;
    cout<<ud(n)<<endl;
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