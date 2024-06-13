#include <iostream>
#include <array>
using namespace std;

const int T=30;
typedef array <unsigned, T> Tvector;

void leerVector(Tvector &v, unsigned &n);
void compactar(Tvector &v, unsigned &n);
void minimizar(Tvector &v, unsigned &n);

int main() {
    Tvector v;
    unsigned num;
    leerVector(v, num);
    compactar(v, num);
    minimizar(v, num);
    return 0;
}

void leerVector(Tvector &v, unsigned &n) {
    v={0};
    cout<<"Introduzca el número de componentes del vector a introducir: ";
    cin>>n;
    cout<<"Introduzca las componentes del vector: ";
    for(unsigned i=0; i<n; ++i) {
        cin>>v[i];
    }
}

void minimizar(Tvector &v, unsigned &n) {
    bool cond;
    do {
        cond=false;
        Tvector aux=v;
        unsigned naux=n;
        compactar(v, n);
        if(aux!=v) {
            cond=true;
        }
    } while(cond); // El bucle va a ir compactando el vector hasta que el vector final sea igual que el anterior
    for(unsigned i=0; i<n; ++i) {cout<<v[i]<<" ";}
}

void compactar(Tvector &v, unsigned &n) {
    Tvector u={0};
    unsigned j=0;
    for(unsigned i=0; i<n; ++i) {
        unsigned suma=v[i];
        while (i+1<n && v[i]==v[i+1]) {
            suma+=v[++i];
        }
        u[j++]=suma;
    }
    v=u; // Cambiamos el vector original por el nuevo
    n=j; // Cambiamos la longitud del original por la del nuevo
}