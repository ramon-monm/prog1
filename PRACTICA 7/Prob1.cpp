/* Se define un filtro como una cadena de caracteres compuesta de letras y/o signos de interrogaci´on. Por ejemplo, “??fiere?” es un
filtro. Se dice que una palabra pasa un filtro si tiene el mismo n´umero
de caracteres que el filtro y tiene las mismas letras y en las mismas posiciones que el filtro, salvo cuando el car´acter del filtro sea ‘?’, en cuyo
caso puede tener cualquier letra. Por ejemplo, “difieres” e “infieren”
pasan el filtro “??fiere?”, pero no lo hacen “defiendo” ni “infiere”.
Escribe una funci´on pasaFiltro que reciba como par´ametros una palabra y un filtro, y permita saber si la palabra pasa el filtro o no.
Dise˜na asimismo un programa principal que pida al usuario un filtro
y una secuencia de palabras terminada por “fin” y que, utilizando la
funci´on anterior, muestre en pantalla las palabras de la secuencia que
pasan el filtro.
Ejemplo de ejecuci´on del programa:
Introduzca un filtro: ?a?as
Introducir frase: mamas casas cosas latas lapa fin
mamas casas latas */

#include <iostream>
#include <string>
using namespace std;

void leerFiltro(string &f);
void leerPalabra(string &x);
bool pasaFiltro(string &f, string &x);
bool longitud(string &f, string &x);
void leerSecuencia(string &x);

void prog1() {
    string filtro, palabra;
    leerFiltro(filtro);
    leerPalabra(palabra);
    cout<<"¿La palabra pasa el filtro?: "<<pasaFiltro(filtro, palabra)<<endl;
}

void prog2() {
    string secuencia, filtro;
    leerFiltro(filtro);
    leerSecuencia(secuencia);
}

int main() {
    unsigned menu;
    cout<<"Elija el programa a ejecutar: "<<endl<<"1. Comprobar si una palabra pasa un filtro."<<endl<<"2. Comprobar qué palabras de una secuencia pasa un filtro."<<endl;
    cin>>menu;
    if(menu==1) {prog1();}
    else if(menu==2) {prog2();}
    return 0;
}

void leerFiltro(string &f) {
    cout<<"Introduzca una palabra para el filtro: ";
    cin>>f;
}

void leerPalabra(string &x) {
    cout<<"Introduzca la palabra a filtrar: ";
    cin>>x;
}

bool pasaFiltro(string &f, string &x) {
    bool cond=true;
    // 1º: ¿Tiene la misma longtud?
    if(longitud(f, x)) {
        for(unsigned i=0; cond && i<size(f); ++i) {
            if(((f[i]>='a' && f[i]<='z') || (f[i]>='A' && f[i]<='Z')) && x[i]!=f[i]) {
                cond=false;
            }
        }
    }
    else {cond=false;}
    return cond;
}

bool longitud(string &f, string &x) {
    bool cond=(size(f)==size(x));
    return cond;
}

void leerSecuencia(string &x) {
    cout<<"Introduzca una secuencia de palabras, acabada en ''fin'': ";
    cin>>x;
    cin.ignore(' ');
    getline(cin, x);
    cout<<x<<endl;
}