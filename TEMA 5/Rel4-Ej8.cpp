/* Dada una cadena de caracteres, construir un algoritmo que determine si la cadena,
ignorando posibles espacios y signos de puntuación entre las palabras, es un
palíndromo, esto es, simétrica. Por ejemplo: “somos o no somos”, “dabale arroz a la
zorra el abad”. */

#include <iostream>
#include <string>
unsing namespace std;

bool palindromo(string &x);
void leer_cadena(string &x);

int main() {
    string cad;
    leer_cadena(cad);
}

void leer_cadena(string &x) {
    cout<<"Introduzca una cadena de caracteres: ";
    cin>>x;
}

bool palindromo(string &x) {
    cond=true;
    for(unsgined i=0; cond && i<(x.size()-i); ++i) {
        if((x[i]>64 && x[i]<91) || (x[i]>96 && x[i]<123)) {
            cond=(x[i]==x[x.size()-i]);
        }
    }
    return cond;
}