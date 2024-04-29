#include <iostream>
#include <array>
using namespace std;

const unsigned N=5;
typedef array <float, N> Tvector;
void leer_vector(Tvector u, Tvector v);
float prod_esc(const Tvector &v);

int main() {
    Tvector x, y;
    leer_vector(x); leer_vector(y);
    cout<<"El producto escalar de los vectores es "<<prod_esc(x, y);
    return 0;
}

void leer_vector(Tvector u, Tvector v) {
    for(unsigned i=1; i<d; ++i)
        cout<<"Introduzca el elemento "<<i<<" del vector: ";
        cin>>v[i];
}

float prod_esc(const Tvector &v) {
    
}