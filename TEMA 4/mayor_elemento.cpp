#include <iostream>
#include <array>
using namespace std;

const unsigned d=5;
typedef array <int, d> Tvector;
void leer_vector(Tvector &v);
int mayor_vector(const Tvector &v);

float media();

int main(){
    Tvector a;
    leer_vector(a);
    cout<<"El mayor elemento del vector es "<<mayor_vector(a)<<"."<<endl;
    return 0;
}

void leer_vector(Tvector &v) {
    for(unsigned i=1; i<d; ++i) {
        cout<<"Introduzca el elemento "<<i<<" del vector: ";
        cin>>v[i];
    }
}

int mayor_vector(const Tvector &v) {
    int mayor=v[0];
    for(unsigned i=1; i<d; ++i) {
        if(mayor<v[i]) {
            mayor=v[i];
        }
    }
    return mayor;
}
