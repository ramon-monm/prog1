#include <iostream>
#include <array>
using namespace std;

const int T=15;
typedef array <int, T> TArray;

void ordenar(TArray &v, unsigned &t);

int main() {
    TArray m, n;
    unsigned tm, tn;
    ordenar(m, tm);
    ordenar(n, tn);
    return 0;
}

void ordenar(TArray &v, unsigned &t) {
    cout<<"Introduzca el número de componentes del array: ";
    cin>>t;
    cout<<"Introduzca las componentes del array: "<<endl;
    for(unsigned i=0; i<t; ++i) {
        cin>>v[i];
    }
    int menor;
    unsigned i, j;
    for(i=0; i<t-1; ++i) {
        menor=v[i];
        for(j=i+1; i<t; ++j) {
            if(v[j]<menor) {menor=v[j];}
        }
        if(menor<v[i]) {v[j]=v[i]; v[i]=menor;}
    }
    for(unsigned k=0; k<t; ++k) {
        cout<<v[k]<<" ";
    }
}