/* . Se puede definir un polígono a partir de las coordenadas de cada uno de sus puntos. Hay
que diseñar el tipo de datos que permita definir un polígono de M lados (con un máximo
de 30 lados) y un algoritmo que permita introducir las coordenadas cartesianas de cada
uno de sus puntos. */

#include <iostream>
#include <array>
using namespace std;

const int T=30;
typedef array <float, T> Tvector;

typedef struct {
    unsigned nlados;
    Tvector puntos;
} Tpoligono;

void leerPoligono(Tpoligono &p);
void leerPuntos(Tvector &v, unsigned &n);

int main() {
    Tpoligono poligono;
    leerPoligono(poligono);
    return 0;
}

void leerPoligono(Tpoligono &p) {
    cout<<"Introduzca el número de lados del polígono: ";
    cin>>p.nlados;
    leerPuntos(p.puntos, p.nlados);
}

void leerPuntos(Tvector &v, unsigned &n) {
    v={0};
    cout<<"Introduzca las coordenadas de los "<<n<<" puntos: ";
    for(unsigned i=0; i<n; ++i) {
        cin>>v[i];
    }
}