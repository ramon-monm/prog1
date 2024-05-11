/* Escribir un programa C++ que lea dos números enteros positivos "N" e "i", e imprima en pantalla
el dígito que ocupa la posición i-ésima del número N (contando de derecha a izquierda). Si i es
mayor que el número de dígitos de N, se escribirá en pantalla -1.
Por ejemplo, para N = 25064 e i = 2, el resultado es el dígito 6, y para i = 7, el resultado es -1.
Para ello, implementar un subalgoritmo que tenga como parámetros de entrada “N” e “i” y devuelva
al programa principal el dígito solicitado. */

#include <iostream>
using namespace std;

int pos(unsigned &x, unsigned &y);

int main() {
    unsigned N, i;
    cout<<"Introduzca dos números naturales N e i: ";
    cin>>N>>i;
    cout<<pos(N, i);
}

int pos(unsigned &x, unsigned &y) {
    unsigned cont, op=x;
    int cons;
    for(cont=0; op!=0; ++cont, op/=10) {}
    if(y>cont) {cons=-1;}
    else {
        if(y>1) {
            cons=(x%((x/10*y)*10*y))/(10*(y-1));
        }
        else if(y==1) {
            cons=x%((x/10*y)*10*y);
        }
    }
    return cons;
}