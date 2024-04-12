// Escribe	un	programa	que	 dado	un	número	entero	natural	leído	por	teclado, calcule	el	número	de	pasos 
// necesarios	hasta llegar al	1 por	primera	vez.	Por	ejemplo,	dado	27,	debería	imprimir	que	hay	111	pasos.

#include <iostream>
using namespace std;

int main() {
    unsigned N, pasos=0;
    cout<<"Introduzca un número natural: ";
    cin>>N;
    while(N>N-1) {
        if(N%2==0 && N!=1) {
            N=N/2;
            ++pasos;
        }
        else if(N%2!=0 && N!=1) {
            N=N*3+1;
            ++pasos;
        }
        else {
            cout<<"Número de pasos en la conjectura de Collatz: "<<pasos<<endl; break;
        }
    }
    return 0;
}