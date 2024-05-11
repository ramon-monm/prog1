/* Diseña un programa que muestre el valor mayor de una matriz de enteros de tamaño 3x4. Definir
para ello un array bidimensional. Es decir, un tipo Tvector que sea un array de 4 enteros, y usando
ese tipo Tvector como tipo, definir el tipo Tmatriz como un array de 3 elementos de tipo Tvector.
Hacer un procedimiento para leer los valores de la matriz. Después implementar el subalgoritmo:
int mayor_elemento_matriz(const Tmatriz &a); */

#include <iostream>
#include <array>
using namespace std;

const int I=3;
const int J=4;
typedef array <int, J> Tvector;
typedef array <Tvector, I> Tmatrix;

void leer_matriz(Tmatrix &m);
int mayor(Tmatrix &m);

int main() {
    Tmatrix M;
    leer_matriz(M);
    cout<<"El mayor valor de los elementos de la matriz es: "<<mayor(M)<<"."<<endl;
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

int mayor(Tmatrix &m) {
    int mayor=m[0][0];
    for(unsigned i=0; i<I; ++i) {
        for(unsigned j=0; j<J; ++j) {    
            if(m[i][j]>mayor) {mayor=m[i][j];}
        }
    }
    return mayor;
}