// Calclar el valor de pi a partir de las n primeras fracciones de la fórmula de J. Wallis.

#include <iostream>
using namespace std;

int main() {
    float pi;
    unsigned n, cont, cont_num=1, cont_denom=0;
    float num=2, denom=3;
    cout<<"Introduzca el número de fracciones con las que calcular el número pi: ";
    cin>>n;
    pi=4;
    for(cont=1; cont<=n; ++cont) {
        if(cont_num<=1) {
            ++cont_num;
        }
        else {
            num=num+2; cont_num=1;
        }
        if(cont_denom<=1) {
            ++cont_denom;
        }
        else {
            denom=denom+2; cont_denom=1;
        }
        pi=pi*(num/denom);
    }
    cout<<"pi = "<<pi<<endl;
    return 0;
}