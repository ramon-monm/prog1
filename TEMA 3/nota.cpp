#include <iostream>
using namespace std;

float leer_nota() {
    float a;
    do {
        cout<<"Introduzca su calificación: ";
        cin>>a;
    } while(a<0.0 || a>10.0);
    return a;
}

void imprimir_nota(float val) {
    if(val<5.0) {
        cout<<"Suspenso";
    }
    else if(val>=5.0 && val<7.0) {
        cout<<"Aprobado";
    }
    else if(val>=7.0 && val<9.0) {
        cout<<"Notable";
    }
    else if(val>=9.0) {
        cout<<"Sobresaliente";
    }
}

int main() {
    float nota;
    nota=leer_nota();
    imprimir_nota(nota);
    return 0;
}