/* Escribir un programa C++ que busque dos números entre 1 y 1.000 tales que el primero
multiplicado por el segundo al revés sea igual al primero al revés multiplicado por el segundo.
Utilizar el subalgoritmo implementado en el ejercicio 6. */

#include <iostream>
#include <cmath>
using namespace std;

unsigned ud(unsigned x);

int main() {
    unsigned a, b;
    for(a=1; a<=1000; ++a) {
        for(b=a; b<=1000; ++b) {
            if(a*ud(b)==b*ud(a)) {
                cout<<a<<", "<<b<<endl;
            }
        }
    }
}

unsigned ud(unsigned x) {
    unsigned i, aux=x, num=0;
    for(i=0; aux!=0; ++i, aux/=10) {}
    for(i; i>0; --i) {
        num+=(x%10)*pow(10, (i-1)); x/=10;
    }
    return num;
}