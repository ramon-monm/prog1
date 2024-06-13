/* Escribir un programa que muestre, de una lista de números enteros, el par de
números de la lista cuya suma tiene el valor más cercano a un número N (entero). El valor N se leerá
en el algoritmo principal. Además, se debe escribir:
a) Un subprograma que lea un valor natural tam, que será el tamaño de la lista de enteros a considerar
(el valor máximo será 10, pero en cada ejecución puede ser menor) y que lea la lista de números
enteros y los almacene en alguna estructura apropiada para ello.
b) Un subprograma que reciba un valor N (entero) y una lista de enteros de números enteros (tamaño
variable, máximo 10) y devuelva en dos parámetros de salida el par de números de la lista de enteros
recibida como entrada cuya suma tiene el valor más cercano a N. Estos dos valores se mostrarán
posteriormente en pantalla desde el algoritmo principal. */

#include <iostream>
#include <array>
using namespace std;

const int T=10;
typedef array <int, T> Tvector;

void leerLista(Tvector &v, unsigned &tam);
void suma(Tvector &v, unsigned &tam, unsigned &N, int &n1, int &n2);
int abs(unsigned &N, Tvector &v, unsigned &t0, unsigned &t1);

int main() {
    Tvector lista;
    unsigned N, tam;
    int num1, num2;
    cout<<"Introduzca un valor natural: ";
    cin>>N;
    leerLista(lista, tam);
    suma(lista, tam, N, num1, num2);
    cout<<"El par de números de la lista cuya suma se aproxima más al valor del natural indicado es: "<<num1<<" "<<num2<<endl;
    return 0;
}

void leerLista(Tvector &v, unsigned &tam) {
    v={0};
    cout<<"Introduzca el tamaño de la lista (máx. 10 componentes): ";
    cin>>tam;
    cout<<"Introduzca los números de la lista: ";
    for(unsigned t=0; t<tam; ++t) {
        cin>>v[t];
    }
}

void suma(Tvector &v, unsigned &tam, unsigned &N, int &n1, int &n2) {
    int menor=abs(N, v, 0, 1);
    if(menor>=0) {menor=menor;}
    else {menor=-menor;}
    n1=v[0]; n2=v[1];
    for(unsigned t=0; t<tam-1; ++t) {
        for(unsigned i=t+1; i<tam; ++i) {
            if(abs(N, v, t, i)<menor) {menor=abs(N, v, t, i); n1=v[t]; n2=v[i];}
        }
    }
}

int abs(unsigned &N, Tvector &v, unsigned &t0, unsigned &t1) {
    int d;
    d=N-(v[t0]+v[t1]);
    if(d>=0) {d=d;}
    else {d=-d;}
    return d;
}