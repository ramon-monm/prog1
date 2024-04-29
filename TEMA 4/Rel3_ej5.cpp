#include <iostream>
#include <array>
using namespace std;

unsigned const N=7;
typedef array <int, N> vect;

void leer_vector(vect &v);
int repetido(vect v);

int main() {
    vect x;
    leer_vector(x);
    repetido(x);
}

void leer_vector(vect &v) {
    cout<<"Introduzca las componentes del vector: ";
    for(unsigned i=0; i<N; ++i) {
        cin>>v[i];
    }
}

int repetido(vect v) {
    bool repetido=false;
    int pos;
    unsigned i;
    for(i=0; i<N; ++i) {
        for(unsigned o=i+1; o<N; ++o) {
            repetido=v[i]==v[o];
            if(repetido) {break;}
            }
        if(repetido) {break;}
    }   
    if(repetido) {
        pos=i+1;
    }
    else {
        pos=-1;
    }
    return pos;
}
