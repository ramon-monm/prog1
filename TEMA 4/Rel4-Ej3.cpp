/* Escribir un algoritmo que devuelva en una tercera cadena de caracteres la
“diferencia” de dos cadenas (parámetros de entrada); se define como diferencia entre
dos cadenas, los caracteres que están en la primera cadena pero no en la segunda. */

#include <iostream>
#include <string>
using namespace std;

void leer_cadena(string &x);
bool esta(string x, char y);
string dif(string &x, string &y);

int main() {
    string cad1, cad2, cad3;
    leer_cadena(cad1); leer_cadena(cad2);
    
    return 0;
}

void leer_cadena(string &x) {
    cout<<"Introduzca una cadena de caracteres: ";
    cin>>x;
}

bool esta(string x, char y) {
    
}