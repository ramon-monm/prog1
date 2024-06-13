#include <iostream>
using namespace std;

unsigned num_digitos(unsigned x);
unsigned obtener_digito(unsigned n, unsigned pos);
unsigned obtener_coeficiente(unsigned k, unsigned pos);
unsigned suma_productos(unsigned n, unsigned k);
bool es_multiplo(unsigned n, unsigned k);

int main() {
    unsigned n, k;
    cout << "Introduzca un número natural: ";
    cin >> n;
    cout << "Introduzca el valor de k (2 <= k <= 9): ";
    cin >> k;
    if (es_multiplo(n, k)) {
        cout << n << " es múltiplo de " << k << endl;
    } else {
        cout << n << " no es múltiplo de " << k << endl;
    }
    return 0;
}

unsigned num_digitos(unsigned x) {
    unsigned dig = 0;
    do {
        x /= 10;
        ++dig;
    } while (x != 0);
    return dig;
}

unsigned obtener_digito(unsigned n, unsigned pos) {
    unsigned divisor = 1;
    for (unsigned i = 0; i < pos; ++i) {
        divisor *= 10;
    }
    return (n / divisor) % 10;
}

unsigned obtener_coeficiente(unsigned k, unsigned pos) {
    unsigned coef = 1;
    for (unsigned i = 0; i < pos; ++i) {
        coef = (coef * 10) % k;
    }
    return coef;
}

unsigned suma_productos(unsigned n, unsigned k) {
    unsigned suma = 0;
    unsigned numDigits = num_digitos(n);
    for (unsigned i = 0; i < numDigits; ++i) {
        unsigned digito = obtener_digito(n, i);
        unsigned coeficiente = obtener_coeficiente(k, i);
        suma += digito * coeficiente;
    }
    return suma;
}

bool es_multiplo(unsigned n, unsigned k) {
    while (n >= 10) {
        n = suma_productos(n, k);
    }
    return (n % k == 0);
}