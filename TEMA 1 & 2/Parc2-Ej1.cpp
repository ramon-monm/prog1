#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned N, b=2, exp=2;
    bool pot=false;
    cout<<"Introduzca un número natural: ";
    cin>>N;
    while(b<=sqrt(N)) {
        if(N==pow(b, exp)) {
            pot=true; break;
        }
        else if(N!=pow(b, exp) && N<pow(b, exp)) {
            ++b, exp=2;
        }
        else if(N!=pow(b, exp) && N>pow(b, exp)) {
            ++exp;
        }
    }
    if(pot) {
        cout<<N<<" es potencia perfecta de "<<b<<"^"<<exp<<"."<<endl;
    }
    else {
        cout<<N<<" no es potencia perfeca."<<endl;
    }
    return 0;
}