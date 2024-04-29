#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

const int N=7;
typedef array <int, N> vect;

void leer_vector(vect &v);
void invertir_vector(vect &v);
void mostrar_vector(vect v);

int main() {
    vect x;
    leer_vector(x);
    invertir_vector(x);
    mostrar_vector(x);
    return 0;

}

void leer_vector(vect &v) {
    cout<<"Introdzca las componentes del vector: ";
    for(int i=0; i<N; ++i) {
        cin>>v[i];
    }
}

void mostrar_vector(vect v) {
    for(int i=0; i<N; ++i) {
        cout<<setw(4)<<v[i];
    }
}

void invertir_vector(vect &v) {
    int aux;
    for(int i=0;i<N/2;i++) {
        aux=v[i];
        v[i]=v[N-1-i];
        v[N-1-i]=aux;
    }
}