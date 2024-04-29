#include <iostream>
using namespace std;

int operacion(unsigned x, unsigned y, char op);

int main() {
    unsigned a, b;
    char operador;
    cout<<"Introduzca una operación de dos números naturales (variable-operador-variable): ";
    cin>>a>>operador>>b;
    cout<<operacion(a, b, operador)<<endl;
    return 0;
}

int operacion(unsigned x, unsigned y, char op) {
    int sol;
    unsigned a=x, b=y;
    switch(op) {
        case '+': sol=a+b;
        case '-': sol=a-b;
        case '*': sol=a*b;
        case '/': sol=a/b;
        default: break;
    }
    return sol;
}