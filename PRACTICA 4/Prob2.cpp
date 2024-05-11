// Diseñar un programa C++ que lea desde el dispositivo de entrada estándar una serie de caracteres que representan un 
// número romano (todos escritos en mayúsculas) terminada en un punto, lo convierta en arábigo, y lo escriba en la pantalla. 
// Escribir primero un subalgoritmo que reciba como entrada un símbolo romano (carácter) y calcule y devuelva su valor según la 
// siguiente tabla de conversión entre símbolos romanos y cantidades:...

#include <iostream>
using namespace std;

unsigned arabe(char ch);

int main() {
    char c;
    unsigned prev=0, last, suma=0;
    cout<<"Escriba un número romano terminado en punto: ";
    do {
        cin>>c;
        last=arabe(c);
        if(prev==0) {
            suma+=last;
        }
        if(prev!=0) {
            if(last>prev) {
                suma+=(last-2*prev);
            }
            else {
                suma+=last;
            }
        }
        prev=last;        
    } while(c!='.');
    cout<<"El número romano leído es: "<<suma<<"."<<endl;
    return 0;
}

unsigned arabe(char ch) {
    unsigned a;
    switch(ch) {
        case 'I': a=1; break;
        case 'V': a=5; break;
        case 'X': a=10; break;
        case 'L': a=50; break;
        case 'C': a=100; break;
        case 'D': a=500; break;
        case 'M': a=1000; break;
    }
    return a;
}