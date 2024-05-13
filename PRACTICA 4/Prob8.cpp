/* En matemáticas, una potencia perfecta es un número natural que
puede ser expresado como una potencia de otro número. Por ejemplo, el 8 es una potencia
perfecta porque puede ser expresado como 23
, 625 es una potencia perfecta porque puede
ser expresado como 54
, 10 no es una potencia perfecta porque no puede ser expresado como
potencia de ningún número.
Escribir un subalgoritmo que devuelve al algoritmo principal información de si un número
recibido como parámetro es una potencia perfecta. En el caso de que el número recibido sea
un número perfecto, se pasará al algoritmo principal la base y el exponente de los números
que hacen esa potencia; si no es una potencia perfecta, estos parámetros no contendrán
información. El número debe leerse en el algoritmo principal y la información sobre si es o
no una potencia perfecta y los números con los que se obtiene esa potencia deben mostrarse
también en el algoritmo principal.
Para el número 625, se mostrará en el algoritmo principal lo siguiente:
625 es una potencia perfecta, se obtiene como 5 elevado a 4
Para el número 10, se mostrará en el algoritmo principal:
10 no es una potencia perfecta */

#include <iostream>
#include <cmath>
using namespace std;

bool potencia_perfecta(unsigned &n, unsigned &x, unsigned &y);

int main() {
    unsigned N, b, e;
    cout<<"Introduzca un número natural: ";
    cin>>N;
    if(potencia_perfecta(N, b, e)) {
        cout<<N<<" es potencia perfecta, pues "<<N<<" = "<<b-1<<"^"<<e-1<<":"<<endl; // Antes de detener las estructuras iterativas, las variables de base y exponente se incrementan en una unidad.
    }
    else {
        cout<<N<<" no es una potencia perfecta."<<endl;
    }
    return 0;
}

bool potencia_perfecta(unsigned &n, unsigned &x, unsigned &y) {
    bool cond=false;
    for(x=2;!cond && x<=sqrt(n); ++x) {
        for(y=0; !cond && pow(x, y)<=n; ++y) {
            if(pow(x,y)==n) {cond=true;}
        }
    }
    return cond;
}