/* Se dice que una palabra o frase es palíndromo si al leerla de izquierda a derecha, obviando los signos
de puntuación y la diferencia entre minúsculas y mayúsculas, obtenemos la palabra o frase original.
Por ejemplo la frase: "Dabale arroz a la zorra el abad" espalíndroma.
Construir un programa C++ que lea del teclado una frase (string) y diga si es o no un palíndromo
utilizando los dos subalgoritmos que se explican a continuación. Para ello:
• Escribir un subalgoritmo que reciba como parámetro una frase y almacene las letras que
contenga en un string. Las letras mayúsculas se deben convertir a minúsculas. La nueva frase
(que sólo contendrá letras minúsculas) se devolverá al algoritmo principal.
ENTRADA: “Limpiar? esta; Frase”
SALIDA: “limpiarestafrase”
• Escribir un subalgoritmo que permita obtener el inverso de una frase (string) que se le pasa
como parámetro. Por ejemplo:
ENTRADA: “invertir esta frase”
SALIDA: “esarf ates ritrevni”
El programa principal deberá usar estos dos subalgoritmos para mostrar si una frase es o no un
palíndromo. */

#include <iostream>
#include <string>
using namespace std;

void fraseMinuscula(string &x);
void fraseNoEspaciada(string &x, string &y);
void limpiarFrase(string &x, string &y);
void invertirFrase(string &x, string &y);


int main() {
    string frase, frase_limpia, frase_invertida;
    unsigned programa;
    cout<<"Introduzca una frase de entrada: ";
    getline(cin, frase);
    cout<<"Indique la operación a realizar: "<<endl<<"1.- Limipar la frase."<<endl<<"2.- Invertir la frase."<<endl;
    cin>>programa;
    if(programa==1) {limpiarFrase(frase, frase_limpia); cout<<frase_limpia<<endl;}
    else if(programa==2) {invertirFrase(frase, frase_invertida); cout<<frase_invertida<<endl;}
    return 0;
}

void invertirFrase(string &x, string &y) {
    fraseMinuscula(x);
    for(unsigned i=size(x); i>0; --i) {
        y+=x[i-1];
    }
}

void fraseMinuscula(string &x) {
    for(unsigned i=0; i<=size(x); ++i) {
        if(x[i]>='A' && x[i]<='Z') {
            x[i]+=32;
        }
    }
}

void fraseNoEspaciada(string &x, string &y) {
    for(unsigned i=0; i<size(x); ++i) {
        if(x[i]>='a' && x[i]<='z') {
            y+=x[i];
        }
    }
}

void limpiarFrase(string &x, string &y) {
    fraseMinuscula(x);
    fraseNoEspaciada(x, y);
}