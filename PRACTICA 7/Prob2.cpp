#include <iostream>
#include <array>
using namespace std;

const int I=10, J=10;
typedef array <int, J> TPalabras;
typedef array <TPalabras, I> TMatriz;

void leer(TMatriz &m);
TPalabras contarPalabrasHorizontales(TMatriz &m);
TPalabras contarPalabrasVerticales(TMatriz &m);
void escribir(TMatriz &m);

int main() {
    TMatriz M;
    leer(M);
    escribir(M);
    return 0;
}

TPalabras contarPalabrasHorizontales(TMatriz &m) {
    TPalabras v={0};
    unsigned cont;
    for(unsigned i=0; i<I; ++i) {
        cont=0;
        for(unsigned j=0; j<J; ++j) {
            if(m[i][j]==1) {++cont;}
            else if(cont>0 && m[i][j]==0) {++v[cont-1]; cont=0;}
        }
        if(cont>0) {
            ++v[cont-1];
        }
    }
    return v;
}

TPalabras contarPalabrasVerticales(TMatriz &m) {
    TPalabras v={0};
    unsigned cont;
    for(unsigned j=0; j<J; ++j) {
        cont=0;
        for(unsigned i=0; i<I; ++i) {
            if(m[i][j]==1) {++cont;}
            else if(cont>0 && m[i][j]==0) {++v[cont-1]; cont=0;}
        }
        if(cont>0) {
            ++v[cont-1];
        }
    }
    return v;
}

void leer(TMatriz &m){
    for(unsigned i=0; i<I; ++i) {
        cout<<"Introduzca la fila "<<i+1<<" del crucigrama: ";
        for(unsigned j=0; j<J; ++j) {
            cin>>m[i][j];
        }
    }
    cout<<endl;
}

void escribir(TMatriz &m) {
    for(unsigned n=1; n<=I; ++n) {
        cout<<"Número de palabras horizontales de longitud "<<n<<": "<<contarPalabrasHorizontales(m)[n-1]<<endl;
    }
    cout<<endl;
    for(unsigned n=1; n<=I; ++n) {
        cout<<"Número de palabras verticales de longitud "<<n<<": "<<contarPalabrasVerticales(m)[n-1]<<endl;
    }
    cout<<endl;
}