/* Escribe un subprograma que reciba un vector de N números naturales, encuentre el
valor máximo y lo imprima junto con el número de veces que aparece y las posiciones
en que esto ocurre (todo esto dentro del subalgoritmo). El proceso se repite con el resto
de números de la sucesión hasta que no quede ningún elemento por tratar. Escribe el
algoritmo principal que use este subalgoritmo. */

#include <iostream>
#include <array>
using namespace std;

const int T=5;
typedef array <int, T> vector;

void leer_vector(vector &x);
int mayor(vector &x);
unsigned reps(vector &x, int y);
void pos(vector &x, int y);

int main() {
    vector v;
    leer_vector(v);
    cout<<"La mayor componente es "<<mayor(v)<<". Aparece "<<reps(v, mayor(v))<<" veces, en las posiciones ";pos(v, mayor(v)); cout<<"."<<endl;
    return 0;
}

void leer_vector(vector &x) {
    cout<<"Introduzca las componentes del vector: ";
    for(unsigned i=0; i<T; ++i) {
        cin>>x[i];
    }
}

int mayor(vector &x) {
    int mayor=x[0];
    for(unsigned i=1; i<T; ++i) {
        if(x[i]>mayor) {
            mayor=x[i];
        }
    }
    return mayor;
}

unsigned reps(vector &x, int y) {
    unsigned contador=0;
    for(unsigned i=0; i<T; ++i) {
        if(x[i]==y) {
            ++contador;
        }
    }
    return contador;
}

void pos(vector &x, int y) {
    for(unsigned i=0; i<T; ++i) {
        if(x[i]==y) {
            cout<<i<<" ";
        }
    }
}
