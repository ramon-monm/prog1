/* Diseñar un programa en C++ que calcule la suma y la diferencia entre dos vectores de tamaño 5. Para
ello, hay que definir el tipo Tvector como un array de 5 enteros y escribir los siguientes subprogramas: 
void leer_vector(Tvector &v);
void mostrar_vector(Tvector v);
void sumar_vectores(Tvector a, Tvector b, Tvector &suma);
void restar_vectores(Tvector a, Tvector b, Tvector &restar); */

#include <iostream>
#include <array>
using namespace std;

const int T=5;
typedef array <int, T> Tvector;

void leer_vector(Tvector &v);
void mostrar_vector(Tvector &v);
void sumar_vectores(Tvector &u, Tvector &v, Tvector &s);
void restar_vectores(Tvector &u, Tvector &v, Tvector &r);

int main() {
    Tvector u, v, s, r;
    leer_vector(u); leer_vector(v);
    sumar_vectores(u, v, s); restar_vectores(u, v, r);
    cout<<"La suma de los vectores es: "; mostrar_vector(s); cout<<endl;
    cout<<"La resta de los vectores es: "; mostrar_vector(r); cout<<endl;
    return 0;
}

void leer_vector(Tvector &v) {
    cout<<"Introduzca un nuevo vector: ";
    for(unsigned i=0; i<T; ++i) {
        cin>>v[i];
    }
}

void mostrar_vector(Tvector &v) {
    for(unsigned i=0; i<T; ++i) {
        cout<<v[i]<<" ";
    }
}

void sumar_vectores(Tvector &u, Tvector &v, Tvector  &s) {
    for(unsigned i=0; i<T; ++i) {
        s[i]=u[i]+v[i];
    }
}

void restar_vectores(Tvector &u, Tvector &v, Tvector  &r) {
    for(unsigned i=0; i<T; ++i) {
        r[i]=u[i]-v[i];
    }
}