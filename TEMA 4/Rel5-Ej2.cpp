/* Se debe definir un tipo de datos que permita realizar operaciones con números complejos
(parte real e imaginaria). Utilizando este tipo, hay que escribir algoritmos que realicen
las operaciones de suma, resta, multiplicación y división de números complejos. */

#include <iostream>
#include <array>
#include <string>
using namespace std;

typedef array <string, 3> Toperation

typedef struct{
    int re;
    int im;
} Tnumc;

void leerOperacion(Toperation &v);

int main() {
    Tnumc n1, n2;
    cout<<"Introduzca un número complejo: ";
    cin>>sn1;
    cocout<<"Introduzca un número complejo: ";
}

void leerComplejo(string &n, int &re, int &im) {
    unsigned cont_re=0, cont_im=0;
    for(unsigned i=0; i<size(n); ++i) {
        ++cont_re;
        if(n[i]>='a' && n[i]<='z') {
            cont_im=cont_re-1; cont_re=0;
        }
        if((n[i]>=0 && n[i]<=9 || n[i]>='a' && n[i]<='z') && (n[i-1]<'0' && n[i-1]>'9' || n[i-1]<'a' && n[i-1]>'z')) {
            if(cont_re>0) {++cont_im;}
            else if(cont_im>0) {++cont_re;}
        }
    }
}