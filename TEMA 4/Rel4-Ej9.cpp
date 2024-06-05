#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void leerCadena(string &s);
unsigned base10(string &s);

int main() {
    string cadena;
    leerCadena(cadena);
    cout<<base10(cadena);
}

void leerCadena(string &s) {
    cout<<"Introduzca una secuencia de dígitos: ";
    cin>>s;
}

unsigned base10(string &s) {
    unsigned num=0;
    for(unsigned i=0; i<size(s); ++i) {
        num+=(int(s[i])-48)*pow(10, size(s)-i-1);
    }
    return num;
}