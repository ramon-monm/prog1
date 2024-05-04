#include <iostream>
#include <array>
using namespace std;

const unsigned t=5;
typedef array <int, t> vector;

void leer_vector(vector &x);
int cima(const vector &x);

int main() {
    vector v;
    leer_vector(v);
    cout<<"La primera cima del vector está en la posición "<<cima(v)<<".";
    return 0;
}

void leer_vector(vector &x) {
    cout<<"Introuzca las componentes del vector: ";
    for(unsigned i=0; i<t; ++i) {
        cin>>x[i];
    }
}

int cima(const vector &x) {
    int pos=-1;
    for(unsigned j=0; j<t; ++j) {
        if(j==0 && x[j]>x[j+1]) {
            pos=j; j=t;
        }
        else if(j==t-1 && x[j]>x[j-1]) {
            pos=j; j=t;
        }
        else if(j!=0 && j!=t-1 && x[j]>x[j-1] && x[j]>x[j+1]) {
            pos=j; j=t;
        }
    }
    return pos;
}