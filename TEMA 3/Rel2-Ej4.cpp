#include <iostream>
using namespace std;

unsigned operacion(unsigned x, unsigned y, char op);

int main() {
    unsigned a, b, sol;
    char operador;
    cout<<"Introduzca una operación de dos números naturales (variable-operador-variable): ";
    cin>>a>>operador>>b;
    sol=operacion(a, b, operador);
    cout<<sol<<endl;
}

unsigned operacion(unsigned x, unsigned y, char op) {
    
}