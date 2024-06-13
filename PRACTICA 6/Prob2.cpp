/* Dado un texto introducido por teclado y acabado en INTRO (RETURN), construir un programa C++
que cuente la cantidad de veces que aparece en el texto cada una de las letras vocales. Posteriormente
presentar la frecuencia de aparición de las vocales mediante un histograma como el que se explica a
continuación.
Por ejemplo, si el texto es: “Texto introducido”. El histograma producido deberá ser:
 *
 * *
* * * *
 =========
 a e i o u
Este gráfico indica que la “a” no aparece ninguna vez, la “e” aparece una sola vez, la “i” aparece 2
veces, la “o” tres veces y la “u” una vez. */

#include <iostream>
#include <array>
#include <string>
using namespace std;

const int J=5;
typedef array <int, J> Tvector;

void fraseMinuscula(string &x);
void freq(string &x, Tvector &v, unsigned &f);
void histograma(Tvector &v, unsigned &f);

int main() {
    string frase;
    Tvector frecuencias;
    unsigned frecmax;
    cout<<"Introduzca una frase de entrada: ";
    getline(cin, frase);
    freq(frase, frecuencias, frecmax);
    histograma(frecuencias, frecmax);
    return 0;
}

void fraseMinuscula(string &x) {
    for(unsigned i=0; i<=size(x); ++i) {
        if(x[i]>='A' && x[i]<='Z') {
            x[i]+=32;
        }
    }
}

void freq(string &x, Tvector &v, unsigned &f) {
    fraseMinuscula(x);
    v={0};
    for(unsigned i=0; i<size(x); ++i) {
        switch(x[i]) {
            case 'a': ++v[0]; break;
            case 'e': ++v[1]; break;
            case 'i': ++v[2]; break;
            case 'o': ++v[3]; break;
            case 'u': ++v[4]; break;
        }
    }
    f=v[0];
    for(unsigned j=1; j<J; ++j) {
        if(v[j]>f) {f=v[j];};
    }
}

void histograma(Tvector &v, unsigned &f) {
    cout<<endl;
    for(f; f>0; --f) {
        for(unsigned i=0; i<J; ++i) {
            if(v[i]>=f) {cout<<" *";}
            else {cout<<"  ";}
        }
        cout<<endl;
    }
    cout<<" ========="<<endl<<" a e i o u"<<endl;
}