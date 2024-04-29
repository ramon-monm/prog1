// Elaborar un programa en C++ para calcular los lados de los triángulos rectángulos de lados enteros positivos y menores 
// o iguales que una longitud máxima leída como entrada. A modo de recordatorio un triángulo rectángulo es aquel en donde 
// el cuadrado de la hipotenusa es igual a la suma de los cuadrados de los catetos.

#include <iostream>
using namespace std;

int main() {
    unsigned n, h, c1, c2;
    bool triangulo=false;
    cout<<"Introduzca la longitud umbral máxima de los lados del rectángulo: ";
    cin>>n;
    for(h=n; h>0 && !triangulo; --h) {
        for(c1=h; c1>0 && !triangulo; --c1) {
            for(c2=h; c2>0 && !triangulo; --c2) {
                if((h*h)==(c1*c1)+(c2*c2)) {
                    triangulo=true; break;
                }
            }
            if(triangulo) {break;}
        }
        if(triangulo) {break;} // Recalcar que la instrucción break sirve para, una vez verificada la condición, evitar que los bucles se ejecuten hasta el final, decrementándose entonces cada variable. En otro caso, la salida mostraría la combinación coherente de variables, pero, cada una, una unidad menor. 
    }
    if(!triangulo) {
        cout<<"No existe ningún triángulo válido."<<endl;
    }
    else {
        cout<<"Un triángulo válido es el de lados "<<h<<", "<<c1<<" y "<<c2<<endl;
    }
    return 0;
}