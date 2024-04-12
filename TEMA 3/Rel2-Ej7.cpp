#include <iostream>
using namespace std;

unsigned fact(unsigned n);

int main() {
    unsigned n, k, sol;
    cout<<"Introduzca dos números naturales: ";
    cin>>n>>k;
    sol=fact(n)/(fact(n-k)*fact(k));
    cout<<"El número combinatorio de "<<n<<" sobre "<<k<<" es "<<sol<<"."<<endl;
    return 0;
}

unsigned fact(unsigned n) {
    unsigned f=n;
    for(int i=n-1; i<1; --i) {
        f=f*i;
    }
    return f;
}