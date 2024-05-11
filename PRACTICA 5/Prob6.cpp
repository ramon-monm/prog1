/* Diseñar un programa C++ que lea una matriz 8 x 6 de enteros (fila a fila), la almacene en un array
bidimensional a, y calcule los resultados de las sumas de los elementos de cada fila en un vector b y
las sumas de los elementos de cada columna en un vector c. Finalmente se imprimirán los tres
arrays con el siguiente formato:
a a a a a a b
a a a a a a b
a a a a a a b
a a a a a a b
a a a a a a b
a a a a a a b
a a a a a a b
a a a a a a b
c c c c c c    */

#include <iostream>
#include <array>
using namespace std;

const int I=8;
const int J=6;
typedef array <int, J> Tvector;
typedef array <Tvector, I> Tmatrix;

void leer_matriz(Tmatrix &m);
int suma_i(Tmatrix &m, unsigned i);
int suma_j(Tmatrix &m, unsigned j);

int main() {
    Tmatrix M;
    leer_matriz(M);
    for(unsigned i=0; i<I; ++i) {
        for(unsigned j=0; j<J; ++j) {
            cout<<M[i][j]<<" ";
        }
        cout<<suma_i(M, i)<<endl;
    }
    for(unsigned j=0; j<J; ++j) {
        cout<<suma_j(M, j)<<" ";
    }
    return 0;
}

void leer_matriz(Tmatrix &m) {
    for(unsigned i=0; i<I; ++i) {
        cout<<"Introduzca los elementos de la fila "<<i<<" de la matriz: ";
        for(unsigned j=0; j<J; ++j) {
            cin>>m[i][j];
        }
    }
}

int suma_i(Tmatrix &m, unsigned i) {
    int b=0;
    for(unsigned j=0; j<J; ++j) {
        b+=m[i][j];
    }
    return b;
}

int suma_j(Tmatrix &m, unsigned j) {
    int c=0;
    for(unsigned i=0; i<I; ++i) {
        c+=m[i][j];
    }
    return c;
}