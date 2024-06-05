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
#include <string>
using namespace std;

void frecuencias(string &x, unsigned &fa, unsigned &fe, unsigned &fi, unsigned &fo, unsigned &fu, unsigned &mayor);
char minuscula(char &c);
void hist(unsigned &fa, unsigned &fe, unsigned &fi, unsigned &fo, unsigned &fu, unsigned &mayor);

int main() {
    string frase;
    unsigned fa=0, fe=0, fi=0, fo=0, fu=0, mayor;
    cout<<"Introduzca una frase de entrada: ";
    getline(cin, frase);
    frecuencias(frase, fa, fe, fi, fo, fu, mayor);
    hist(fa, fe, fi, fo, fu, mayor);
    return 0;
}

char minuscula(char &c) {
    if(c>='A' && c<='Z') {
        c+=32;
    }
    return c;
}

void frecuencias(string &x, unsigned &fa, unsigned &fe, unsigned &fi, unsigned &fo, unsigned &fu, unsigned &mayor) {
    for(unsigned i=0; i<size(x); ++i) {
        if(x[i]=='a' || minuscula(x[i])=='a') {++fa;}
        if(x[i]=='e' || minuscula(x[i])=='e') {++fe;}
        if(x[i]=='i' || minuscula(x[i])=='i') {++fi;}
        if(x[i]=='o' || minuscula(x[i])=='o') {++fo;}
        if(x[i]=='u' || minuscula(x[i])=='u') {++fu;}
    }
    mayor=fa;
    if(fe>fa) {mayor=fe;}
    if(fi>fe) {mayor=fi;}
    if(fo>fi) {mayor=fo;}
    if(fu>fo) {mayor=fu;}
}

void hist(unsigned &fa, unsigned &fe, unsigned &fi, unsigned &fo, unsigned &fu, unsigned &mayor) {
    char cara=' ', care=' ', cari=' ', caro=' ', caru=' ';
    for(mayor; mayor>0; --mayor) {
        if(fa>=mayor) {cara='*';}
        if(fe>=mayor) {care='*';}
        if(fi>=mayor) {cari='*';}
        if(fo>=mayor) {caro='*';}
        if(fu>=mayor) {caru='*';}
        cout<<" "<<cara<<" "<<care<<" "<<cari<<" "<<caro<<" "<<caru<<endl;
    }
    cout<<"==========="<<'\n'<<" a e i o u"<<endl;
}