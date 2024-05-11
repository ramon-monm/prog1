/* Diseñar un programa C++ que calcule y presente en pantalla la suma de los cuadrados de los N
primeros números naturales, siendo N un valor dado por teclado. La suma de cuadrados debe
resolverse mediante un subprograma. Escribir 2 subprogramas distintos, que se llamarán desde el
programa principal de forma sucesiva. Los prototipos de esto subprogramas son los siguientes:
Mediante el valor devuelto del subalgoritmo: 
 unsigned int suma_cuad_1 (const unsigned int n);
Mediante un parámetro de entrada/salida:
 void suma_cuad_2 (const unsigned int n, unsigned int &sum); */

#include <iostream>
#include <cmath>
using namespace std;

unsigned int suma_cuad_1(const unsigned int n);
void suma_cuad_2(const unsigned int n, unsigned int &suma);

int main() {
    unsigned N, suma;
    cout<<"Introduzca un número natural N: ";
    cin>>N;
    cout<<"La suma de los cuadrados de los números naturales hasta N es: "<<suma_cuad_1(N)<<endl;
    suma_cuad_2(N, suma); cout<<"La suma de los cuadrados de los números naturales hasta N es: "<<suma<<endl;
}

unsigned int suma_cuad_1(const unsigned int n) {
    unsigned int suma=0;
    for(unsigned i=1; i<=n; ++i) {
        suma+=pow(i, 2);
    }
    return suma;
}

void suma_cuad_2(const unsigned int n, unsigned int &suma) {
    suma=0;
    for(unsigned i=1; i<=n; ++i) {
        suma+=pow(i, 2);
    }
}