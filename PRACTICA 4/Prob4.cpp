/* Escribir un programa C++ que lea dos números enteros positivos "N" e "i", e imprima en pantalla
el dígito que ocupa la posición i-ésima del número N (contando de derecha a izquierda). Si i es
mayor que el número de dígitos de N, se escribirá en pantalla -1.
Por ejemplo, para N = 25064 e i = 2, el resultado es el dígito 6, y para i = 7, el resultado es -1.
Para ello, implementar un subalgoritmo que tenga como parámetros de entrada “N” e “i” y devuelva
al programa principal el dígito solicitado. */

#include <iostream>
#include <cmath>
using namespace std;

unsigned digitos(unsigned &x);
void pos(unsigned x, unsigned &y);

int main() {
    unsigned N, i;
    cout<<"Introduzca dos números naturales N e i: ";
    cin>>N>>i;
    pos(N, i);
    cout<<N;
}

unsigned digitos(unsigned &x) {
    unsigned dig;
    for(dig=0; x!=0; x/=10, ++dig) {}
    return dig;
}

void pos(unsigned x, unsigned &y) {
    if(y>digitos(x)) {x=-1;}
    else {
        x/=pow(10, y-1);
        x%=10;
    }
}