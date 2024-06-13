/* Escribir un programa que muestre, de una lista de números enteros, el par de
números de la lista cuya suma tiene el valor más cercano a un número N (entero). El valor N se leerá
en el algoritmo principal. Además, se debe escribir:
a) Un subprograma que lea un valor natural tam, que será el tamaño de la lista de enteros a considerar
(el valor máximo será 10, pero en cada ejecución puede ser menor) y que lea la lista de números
enteros y los almacene en alguna estructura apropiada para ello.
b) Un subprograma que reciba un valor N (entero) y una lista de enteros de números enteros (tamaño
variable, máximo 10) y devuelva en dos parámetros de salida el par de números de la lista de enteros
recibida como entrada cuya suma tiene el valor más cercano a N. Estos dos valores se mostrarán
posteriormente en pantalla desde el algoritmo principal.
Por ejemplo, para estas entradas se obtienen los valores que se indican:
Tamaño Lista de enteros Valor N Salida por pantalla
5 9,-3, -10, -4, -5 4 [9,-5]
4 1, 3, 5, 4 2 [1, 3]
6 0, 2, -10, 10, 5, 4 0 [-10,10] */

#include <iostream>
#include <array>
#include <string>
using namespace std;

const int T=10;
typedef array <int, T> Tvector;

void leerDatos(Tvector &v, unsigned &t);
void sumaProx(Tvector &v, unsigned &t);
unsigned dist(int &a, int &b);

int main() {
    Tvector lista;
    unsigned tam;
    leerDatos(lista, tam);
    sumaProx(lista, tam);
    return 0;
}

void leerDatos(Tvector &v, unsigned &t) {
    cout<<"Introduzca el número de dígitos de la lista: ";
    cin>>t;
    cout<<"Introduzca los valores de la lista: ";
    for(unsigned i=0; i<t; ++i) {
        cin>>v[i];
    }
}

void sumaProx(Tvector &v, unsigned &t) {
    int N;
    unsigned I=0, J=1;
    int suma=v[I]+v[J];
    unsigned aprox=dist(N, suma);
    cout<<"Introduzca un valor natural al que aproximar la suma del par de componentes: ";
    cin>>N;
    for(unsigned i=0; i<t-1; ++i) {
        for(unsigned j=i+1; j<t; ++j) {
            suma=v[i]+v[j];
            if(dist(N, suma)<aprox) {aprox=dist(N, suma); I=i; J=j;}
        }
    }
    cout<<v[I]<<" "<<v[J]<<endl;
}

unsigned dist(int &a, int &b) {
    unsigned d;
    if(a-b<0) {d=-(a-b);}
    else {d=a-b;};
    return d;
}