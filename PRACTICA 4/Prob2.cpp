// Diseñar un programa C++ que lea desde el dispositivo de entrada estándar una serie de caracteres que representan un 
// número romano (todos escritos en mayúsculas) terminada en un punto, lo convierta en arábigo, y lo escriba en la pantalla. 
// Escribir primero un subalgoritmo que reciba como entrada un símbolo romano (carácter) y calcule y devuelva su valor según la 
// siguiente tabla de conversión entre símbolos romanos y cantidades:...

#include <iostream>
using namespace std;

unsigned arabe(char ch);

int main() {
    char num;
    unsigned suma=0;
    cout<<"Escriba un número romano terminado en punto: ";
    while(num!='.') {
        suma=suma+arabe(ch);
    }
    cout<<"El número romano leído es: "<<suma<<endl;
    return 0;
}

unsigned arabe(char ch) {
    char prev='Z', last;
    unsigned num;
    switch(ch) {
        case 'I': num=1;
        case 'V': num=5;
        case 'X': num=10;
        case 'L': num=50;
        case 'C': num=100;
        case 'D': num=500;
        case 'M': num=1000;
    }
    if()
}