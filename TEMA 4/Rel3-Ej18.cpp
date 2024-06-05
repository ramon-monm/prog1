#include <iostream>
#include <array>
using namespace std;

const int I=4, J=4;
typedef array <int, J> Tvector;
typedef array <Tfila,I> Tmatrix;

void leer_matriz(Tmatrix &m);
int suma_diagonal(Tmatrix &m, unsigned &f, unsigned &c);

int main() {
    Tmatrix M;
    int mayor;
    void leer_matriz(M);
    suma_diagonal(M, I, J)
    for(i=0; i<=I; ++i) {
        for(j=0; j<=J, ++j) {
            suma_diagonal(M, i, j);

        }
    }

}

void leer_matriz(Tmatrix &m) {
    for(unsigned i=0; i<I; ++i) {
        cout<<"Introduzca los elementos de la fila "<<i<<" de la matriz: ";
        for(unsigned j=0; j<J; ++j) {
            cin>>m[i][j];
        }
    }
}

int suma_diagonal(Tmatrix &m, unsigned &f, unsigned &c) {
    sd=0;
    bool fin;
    for(unsigned i=f, j=c; i<=I; ++i, ++j) {
        sd+=m[i][j];
    }
    return sd;
}