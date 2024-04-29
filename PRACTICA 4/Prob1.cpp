// Dos números a y b se dice que son amigos si la suma de los divisores de a (salvo él mismo) coincide con b y viceversa. 
// Escribir un subalgoritmo Suma_de_divisores que calcule la suma de los divisores 
// de un número excepto él mismo. Escribir un programa que lea dos números enteros positivos n y m y muestre por pantalla todas 
// las parejas de números amigos que existan en el intervalo determinado
// por n y m, utilizando el subalgoritmo Suma_de_divisores.

#include <iostream>
using namespace std;

unsigned suma_divisores(unsigned a);
bool amigos(unsigned a, unsigned b);

int main() {
    unsigned A, B;
    cout<<"Introduzca dos números naturales: ";
    cin>>A>>B;
    cout<<"Las parejas de números amigos comprendidos entre "<<A<<" y "<<B<<" son: "<<endl;
    for(unsigned a=A; a<B; ++a) {
        for(unsigned b=A; b<B; ++b) {
            if(amigos(a, b)) {
                cout<<a<<" y "<<b<<endl;
            }
        }
    }
    return 0;
}

unsigned suma_divisores(unsigned a) {
    unsigned suma=0, cont;
    for(cont=2; cont<a; ++cont) {
        if(a%cont==0) {
            suma=suma+cont;
        }
    }
    return suma;
}

bool amigos(unsigned a, unsigned b) {
    bool cond;
    if(suma_divisores(a)==b && suma_divisores(b)==a) {
        cond=true;
    }
    return cond;
}