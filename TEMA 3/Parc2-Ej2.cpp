/* Los números poderosos, son aquellos que cumplen que si un número primo p es divisor suyo, también
lo es su cuadrado p2
. Por ejemplo, el 36 es un número poderoso ya que sus divisores primos son 2 y 3,
y sus cuadrados, 4 y 9, también son divisores de 36. El número 3 no lo es ya que su divisor primo es
3, pero el cuadrado de este divisor primo, 9, no divide a 3. Se pide:
a) Escribir un subalgoritmo que devuelva un valor verdadero si el número que se le pasa como
parámetro es poderoso.
b) Escribir un programa que pida dos valores de tipo natural y muestre todos los números poderosos
que hay entre esos valores y muestre cúantos hay en total en ese intervalo.
Por ejemplo, si se escribieran 1 y 100 se mostraría:
1 4 8 9 16 25 27 32 36 49 64 72 81 100
Hay 14 números poderosos en ese intervalo. */

#include <iostream>
using namespace std;

bool poderoso(unsigned &x);
void numeros_poderosos(unsigned &a, unsigned &b);

int main() {
    unsigned N, a, b;
    cout<<"Introdzca un número natural: ";
    cin>>N;
    cout<<poderoso(N)<<endl<<endl;
    cout<<"Introduzca dos números naturales: ";
    cin>>a>>b;
    numeros_poderosos(a, b);
    return 0;
}

bool poderoso(unsigned &x) {
    bool cond=true;
    unsigned dp;
    for(dp=2; cond && dp<=x; ++dp) {
        for(unsigned d=2; cond && d<=x; ++d) {
            if(dp%d==0 && d==dp) {
                if(x%dp==0 && x%(dp*dp)!=0) {
                    cond=false;
                }
            }
        }
    }
    return cond;
}

void numeros_poderosos(unsigned &a, unsigned &b) {
    unsigned A, B;
    if(a<=b) {A=a; B=b;}
    else {A=b; B=a;}
    for(unsigned cont=A; cont<=B; ++cont) {
        if(poderoso(cont)) {
            cout<<cont<<endl;
        }
    }
}