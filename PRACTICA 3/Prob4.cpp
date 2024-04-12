// Diseñar un programa C++ que lea un número n por teclado y calcule el n-ésimo número de la serie de Fibonacci. 
// Los dos primeros números de esta serie son el cero y el uno, y a partir de éstos cada número se calcula realizando la 
// suma de los dos anteriores.

#include <iostream>
using namespace std;

int main() {
    unsigned fib_n, fib_0=0, fib_1=1, n, cont;
    cout<<"Introduzca el orden de la serie de Fibonacci a calcular: ";
    cin>>n;
    for(cont=1; cont<n; ++cont) { // Empezamos a calcular a partir de la 1ª Serie de Fibonacci.
        fib_n=fib_0+fib_1;
        fib_0=fib_1;
        fib_1=fib_n;
    }
    cout<<"El número de la "<<n<<"-ésima serie de Fibonacci es "<<fib_n<<"."<<endl;
    return 0;
}