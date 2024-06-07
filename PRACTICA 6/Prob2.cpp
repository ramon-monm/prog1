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
void construirMatriz(const int &J, const int &F, Tvector &v);

int main() {
    const int J=5;
    string frase;
    Tvector frecuencias;
    unsigned f;
    cout<<"Introduzca una frase de entrada: ";
    getline(cin, frase);
    freq(frase, frecuencias, f);
    const int F=f;
    construirMatriz(J, F, frecuencias);
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
            case 'a': ++v[0];
            case 'e': ++v[1];
            case 'i': ++v[2];
            case 'o': ++v[3];
            case 'u': ++v[4];
        }
    }
    f=v[0];
    for(unsigned j=1; j<J; ++j) {
        if(v[j]>f) {f=v[j];};
    }
}

void construirMatriz(const int &J, const int &F, Tvector &v) {
    typedef array <Tvector, F> Tmatrix;
    Tmatrix hist;
    Tvector aux=v;
    for(unsigned i=F; i>0, --i;) {
        for(unsigned j=0; i<J; ++i) {
            if(aux[j]>0) {
                hist[i-1][j]=" *";
                --aux[j];
            }
            else if(aux[j]==0) {
                hist[i-1][j]="  ";
            }
        }
    }
    cout<<hist<<'\n'<<'\n'<<"=========="<<'\n'<<'\n'<<" a b c d"<<endl;
}