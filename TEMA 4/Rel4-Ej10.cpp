#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void leerCadenaBase(string &s, unsigned &N);
unsigned baseN(string &s, unsigned &N);

int main() {
    string cadena;
    unsigned base;
    leerCadenaBase(cadena, base);
    cout<<baseN(cadena, base);
}

void leerCadenaBase(string &s, unsigned &N) {
    cout<<"Introduzca una secuencia de dígitos: ";
    cin>>s;
    cout<<"Introduzca la base a la que convertir: ";
    cin>>N;
}

unsigned baseN(string &s, unsigned &N) {
    unsigned num=0;
    for(unsigned i=0; i<size(s); ++i) {
        num+=(int(s[i])-48)*pow(N, size(s)-i-1);
    }
    return num;
}