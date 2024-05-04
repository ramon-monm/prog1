#include <iostream>
#include <array>
using namespace std;

const int I=4; const int J=4;
typedef array <int, J> row;
typedef array <row, I> matrix;

void leer_matriz(matrix &x);
int suma(const matrix &x);

int main() {
    matrix m;
    leer_matriz(m);
    cout<<"La suma de los elementos de la diagonal es "<<suma(m)<<"."<<endl;
    return 0;
}

void leer_matriz(matrix &x) {
    for(unsigned i=0; i<I; ++i) {
        cout<<"Introduzca los elementos de la fila "<<i<<": ";
        for(unsigned j=0; j<J; ++j) {
            cin>>x[i][j];
        }
    }
}

int suma(const matrix &x) {
    int suma=0;
    for(unsigned a=0; a<I; ++a) {
        suma=suma+x[a][a];
    }
    return suma;
}