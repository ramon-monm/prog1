// Escribir un programa que lea un número natural y encuentre y muestre el primer natural que es divisible por todos los valores 
// menores o iguales al número leído. Por ejemplo, si el número es el 5, el primer natural que lo cumple es el 60 porque es divisible 
// por 1, 2, 3, 4 y 5; si el número es 15, el programa debe mostrar el número 360360.

#include <iostream>
using namespace std;

int main() {
    unsigned N, num, div=1;
    cout<<"Introduzca un número natural: ";
    cin>>N;
    num=N;
    while(num>=N) {
        if(num%div==0 && div<N) {
            ++div;
        }
        else {
            ++num;
            div=1;
        }
        if(div==N && num%div==0) {
            cout<<"El primer natural divisible por todos los menores o iguales a "<<N<<" es el "<<num<<"."<<endl;
            break;
        }
    }
    return 0;
}