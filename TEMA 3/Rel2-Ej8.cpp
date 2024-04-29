#include <iostream>
using namespace std;

bool multiplo(unsigned a, unsigned b) {
    bool cond;
    cond=(a%b==0) || (b%a==0);
    return cond;
}

int main() {
    unsigned x, y;
    cout<<"Introduzca dos números naturales: ";
    cin>>x>>y;
    if(multiplo(x,y)) {
        cout<<x<<" y "<<y<<" son múltiplos."<<endl;
    }
    else {
        cout<<x<<" y "<<y<<" no son múltiplos."<<endl;
    }
    return 0;
}