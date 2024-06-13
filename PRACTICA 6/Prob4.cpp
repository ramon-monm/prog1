/* Según el procedimiento ideado por Blaise Pascal, para comprobar
si un número n es múltiplo de k, basta con sumar cada uno de los dígitos de n, previamente
multiplicados por unos coeficientes apropiados y calculados en función de k. El proceso se repite con
la cifra resultante de dicha suma hasta obtener una cifra de un solo dígito, esto es, un número menor
que 10 que, si es múltiplo de k indica que n es múltiplo de k.
Por ejemplo, si k = 7, los coeficientes por los que debemos multiplicar las cifras del número n son:
1, 3, 2, 6 y 4 (luego explicaremos cómo se calculan estos coeficientes). Así, si n es, por ejemplo, el
número 21756, para saber si es múltiplo de 7 calculamos la suma de los productos de cada dígito del
número 21756 por el coeficiente correspondiente, empezando por el dígito de las unidades, siguiendo
por las decenas, etc. Esto es:
6×1+5×3+7×2+1×6+2×4=6+15+14+6+8=49.
Ahora, hacemos lo mismo para el número 49 resultante:
9×1+4×3=9+12=21.
Y, por último, para el 21 resultante:
1×1+2×3=1+6=7.
De esta forma hemos obtenido un número de una sola cifra, que es múltiplo de 7 (y en este caso es,
precisamente, 7), por lo que concluimos que el número n = 21756 es múltiplo de k = 7.
Para calcular los coeficientes, sea cual sea k (2 ≤ k ≤ 9), empezamos con un 1. El mecanismo general
consiste en tomar el último coeficiente calculado, multiplicarlo por 10, y calcular el resto de la
división entera por k. Así obtenemos el siguiente coeficiente.
De este modo, siguiendo con el ejemplo de k = 7, tendríamos los coeficientes: 1
1 × 10 % 7 = 10 % 7 = 3
3 × 10 % 7 = 30 % 7 = 2
2 × 10 % 7 = 20 % 7 = 6
6 × 10 % 7 = 60 % 7 = 4
Por tanto, los cinco primeros coeficientes para k = 7 son 1, 3, 2, 6, 4.
Si, por poner otro ejemplo, k = 8, los cinco primeros coeficientes resultantes son 1, 2, 4, 0, 0. Dado
este procedimiento explicado como criterio de divisibilidad de n por k, se pide:
a. Implementar la función num_digitos, que recibe un número entero n (>= 0) y devuelve el
número de dígitos que tiene.
b. Implementar la función obtener_digito, que recibe un número entero n (>= 0) y una
posición pos (>= 0 y < num_digitos(n)) y devuelve el dígito correspondiente a esa
posición, teniendo en cuenta que la posición menos significativa (más a la derecha) del número
es la posición 0.
c. Implementar la función obtener_coeficiente, que recibe un número entero k (>= 2 y
<= 9) y una posición pos (>= 0) y devuelve el coeficiente correspondiente, según el
procedimiento de cálculo de coeficientes explicado arriba. Así, por ejemplo, para k = 7, el
coeficiente 0 es un 1, el coeficiente 1 es un 3, el coeficiente 2 es un 2,..., el coeficiente 4 es un
4, etc.
d. Implementar la función suma_productos, que recibe dos números enteros n (>= 0) y k (>=
2 y <= 9) y devuelve la suma de los productos de los dígitos de n y los coeficientes obtenidos
de k, según el procedimiento explicado más arriba. Así, por ejemplo, si recibe n = 21756 y k =
7 debe devolver 49.
e. Implementar la función lógica es_multiplo, que recibe dos números enteros n (>= 0) y k
(>= 2 y <= 9) e indica si n es múltiplo de k, según el procedimiento de Pascal explicado
arriba. */

#include <iostream>
using namespace std;

unsigned num_digitos(unsigned x);
unsigned obtener_digito(unsigned n, unsigned pos);
unsigned obtener_coeficiente(unsigned k, unsigned pos);
unsigned suma_productos(unsigned n, unsigned k);
bool es_multiplo(unsigned n, unsigned k);

int main() {
    unsigned n, k;
    cout<<"Introduzca el número natural a evaluar: ";
    cin>>n;
    cout<<"Introduzca el valor con el que evaluar: ";
    cin>>k;
    if(es_multiplo(n, k)) {
        cout<<n<<" es múltiplo de "<<k<<"."<<endl;
    }
    else {
        cout<<n<<" no es múltiplo de "<<k<<"."<<endl;
    }
    return 0;
}

unsigned num_digitos(unsigned x) {
    unsigned dig=0;
    do {
        x/=10;
        ++dig;
    } while(x!=0);
    return dig;
}

unsigned obtener_digito(unsigned n, unsigned pos) {
    unsigned ans=1;
    for(unsigned i=0; i<pos; ++i) {
        ans*=10;
    }
    ans=(n/ans)%10;
    return ans;
}

unsigned obtener_coeficiente(unsigned k, unsigned pos) {
    unsigned coef=1;
    for (unsigned i=0; i<pos; ++i) {
        coef=(coef*10)%k;
    }
    return coef;
}

unsigned suma_productos(unsigned n, unsigned k) {
    unsigned suma=0, numdig=num_digitos(n);
    for (unsigned i = 0; i < numdig; ++i) {
        unsigned dig=obtener_digito(n, i), coef=obtener_coeficiente(k, i);
        suma+=dig*coef;
    }
    return suma;
}

bool es_multiplo(unsigned n, unsigned k) {
    while(n>=10) {
        n=suma_productos(n, k);
    }
    return (n%k==0);
}