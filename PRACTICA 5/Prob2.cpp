/* Diseña un programa que muestre el menor y el mayor valor de un array de enteros de tamaño 10. */

#include <iostream>
#include <array>
using namespace std;

const int T=10;
typedef array <int, T> Tvector;

void leer_vector(Tvector &v);
void mayor(Tvector &v, int &M);
void menor(Tvector &v, int &m);

int main() {
    Tvector v;
    int M, m;
    leer_vector(v); mayor(v, M); menor(v, m);
    cout<<"El mayor valor del vector es: "<<M<<endl;
    cout<<"El menor valor del vector es: "<<m<<endl;
    return 0;
}

void leer_vector(Tvector &v) {
    cout<<"Introduzca un nuevo vector: ";
    for(unsigned i=0; i<T; ++i) {
        cin>>v[i];
    }
}

void mayor(Tvector &v, int &M) {
    M=v[0];
    for(unsigned i=1; i<T; ++i) {
        if(v[i]>M) {
            M=v[i];
        }
    }
}

void menor(Tvector &v, int &m) {
    m=v[0];
    for(unsigned i=1; i<T; ++i) {
        if(v[i]<m) {
            m=v[i];
        }
    }
}