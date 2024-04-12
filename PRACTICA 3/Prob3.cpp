// Diseñar un programa C++ para calcular el Máximo Común Divisor de dos números naturales (X e Y) por el método de Euclides de 
// forma iterativa. Este método establece las siguientes premisas:
// a) Si X > Y: MCD (X, Y) = MCD (X - Y, Y)
// b) MCD (X, Y) = MCD (Y, X)
// c) MCD (X, X) = X

#include <iostream>
using namespace std;

int main() {
    unsigned X, Y;
    cout<<"Ingrese dos números naturales: ";
    cin>>X>>Y;
    while(X!=Y || X!=0 || Y!=0) {
        if(X>Y) {
            X=X-Y;
        }
        else if(X<Y) {
            Y=Y-X;
        }
    } 
    cout<<"El m.c.d. de los números introducidos es "<<X<<"."<<endl;
    return 0;
}