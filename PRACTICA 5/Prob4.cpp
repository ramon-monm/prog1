/* Diseñar un programa C++ que acepte de teclado una secuencia indeterminada de dígitos entre 0 y 9
terminada por la tecla INTRO y que utilizando arrays cuente el número de veces que se repite cada
dígito dentro de la secuencia.
Entrada: 187348595004845328
Salida: 0: 2; 1:1; 2: 1; 3: 2; 4: 3; 5: 3; 6: 0; 7: 1; 8: 4; 9: 1

Sugerencia: para “contar” el número de veces que aparece cada dígito se puede utilizar un array de
10 naturales y en cada posición almacenar las veces que ya ha aparecido el dígito correspondiente a
esa posición. */

#include <iostream>
#include <array>
using namespace std;

const int T=10;
typedef array <int, T> Tvector;

int main() {
    char c;
    Tvector reps;
    cout<<"Introduzca una cadena de caracteres comprendidos entre 0 y 9: ";
    for(unsigned dig=0; dig<10; ++dig) {
        reps[dig]=0;
    }
    while(cin.get(c) && c!='\n') {
        if (c>='0' && c<='9') {
            ++reps[unsigned(c)-48];
        }
    }
    for(unsigned dig=0; dig<10; ++dig) {
        if(dig<9) {
            cout<<dig<<": "<<reps[dig]<<"; ";
        } else {
            cout<<dig<<": "<<reps[dig]<<endl;
        }
    }
    return 0;
}
