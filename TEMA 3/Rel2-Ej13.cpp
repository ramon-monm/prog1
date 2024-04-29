#include <iostream>
#include <cmath>
using namespace std;

bool primo(unsigned a);
unsigned mcd(unsigned x, unsigned y);
unsigned exponente(unsigned x, unsigned base);
unsigned sig_primo(unsigned n);

int main() {
    unsigned x, y;
    cout<<"Introduzca dos números naturales: ";
    cin>>x>>y;
    cout<<"El m.c.d. de "<<x<<" y "<<y<<" es "<<mcd(x, y)<<endl;
    return 0;
}

bool primo(unsigned a) {
    bool cond=true;
    for(unsigned cont=2; cont<a && cond; ++cont) {
        if(a%cont==0) {
            cond=false;
        }
    }
    return cond;
}

unsigned exponente(unsigned base=2, unsigned exp) {
    if(primo(base)) {
        for(exp=1; pow(base, exp)<=)
    }
}