/* Escribir un programa C++ que lea 2 números enteros positivos y un carácter. En función de este
carácter leído efectuará las siguientes operaciones (escribir un subalgoritmo para cada una de las
tareas descritas):
‘a’: calcula y presenta los números amigos que hay en el intervalo indicado por los números.
‘c’ : calcula y presenta el número combinatorio formado por los dos números.
‘d’ : calcula y presenta el máximo común divisor de los mismos.
‘+’, ‘*’, ‘-‘, ‘/’ : realiza la operación aritmética correspondiente y presenta el resultado.
Para ‘a’, ‘c’ y ‘d’ se deben escribir subalgoritmos. En el caso de ‘a’, en el subalgoritmo se mostrarán
los números amigos. Para ‘c’ y ‘d’ cada subalgoritmo deberá devolver el valor calculado al
programa principal y será en éste donde se muestre el resultado. Para ‘+’, ‘*’, ‘-‘ y ‘/’ la operación
correspondiente se hará en el algoritmo principal. */

#include <iostream>
using namespace std;

void amigos(unsigned &x, unsigned &y);
unsigned suma_divisores(unsigned a);

void combinatorio(unsigned &x, unsigned &y);
unsigned fact(unsigned a);

void mcd(unsigned &x, unsigned &y);

int main() {
    unsigned x, y;
    char c;
    cout<<"Introduzca don números naturales y la operación a realizar: ";
    cin>>x; cin>>c; cin>>y;
    switch(c) {
        case '+': cout<<x+y<<endl; break;
        case '-': cout<<x-y<<endl; break;
        case '*': cout<<x*y<<endl; break;
        case '/': cout<<x/y<<endl; break;
        case 'a': amigos(x, y); break;
        case 'c': combinatorio(x, y); break;
        case 'd': mcd(x, y); break;
    }
    return 0;
}

// Amigos
unsigned suma_divisores(unsigned a) {
    unsigned suma=0;
    for(unsigned cont=2; cont<=a/2; ++cont) {
        if(a%cont==0) {
            suma+=cont;
        }
    }
    return suma;
}

void amigos(unsigned &x, unsigned &y) {
    unsigned A, B;
    cout<<"Las parejas de números amigos comprendidas entre "<<x<<" y "<<y<<" son: ";
    if(x<y) {A=x; B=y;}
    else {A=y; B=x;}
    for(unsigned a=A; a<B; ++a) {
        for(unsigned b=a; b<B; ++b) {
            if(suma_divisores(a)==b && suma_divisores(b)==a) {
            cout<<a<<" y "<<b<<endl;
            }
        }
    }
}

// Combinatorio
unsigned fact(unsigned a) {
    unsigned factorial=a;
    for(unsigned i=a-1; i>1; --i) {
        factorial*=i;
    }
    return factorial;
}

void combinatorio(unsigned &x, unsigned &y) {
    unsigned A, B;
    if(x<y) {A=x; B=y;}
    else {A=y; B=x;}
    cout<<float(fact(B))/(float(fact(B-A))*float(fact(A)));
}

// MCD
void mcd(unsigned &x, unsigned &y) {
    unsigned A, B, mcd;
    if(x<y) {A=x; B=y;}
    else {A=y; B=x;}
    for(unsigned d=2; d<=A/2; ++d) {
        if(A%d==0 && B%d==0) {
            mcd=d;
        }
    }
    cout<<mcd<<endl;
}