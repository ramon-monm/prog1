/* Escribir un algoritmo que lea en una sola variable de tipo string el nombre, la edad y
la inicial del primer apellido de una persona y los almacene después en tres variables
distintas denominadas nombre, edad e inicial. Suponer que el nombre sólo tiene una
palabra. Se mostrará el contenido de cada una de estas variables. Por ejemplo, para la
entrada
“Laura 20 S”, la salida será: “Nombre: Laura, edad 20, inicial S”. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string dat, nombre, edad, inicial;
    unsigned i;
    cout<<"Introduzca un nombre, edad y la inicial del apellido: ";
    cin>>dat;
    for(i=0; dat[i]!=' '; ++i) {
        nombre+=dat[i];
    }
    for(i; dat[i]==' '; ++i) {};
    for(i; dat[i]!=' '; ++i) {
        edad+=dat[i];
    }
    inicial+=dat[dat.size()-1];
    cout<<"Nombre: "<<nombre<<endl<<"Edad: "<<endl<<"Inicial: "<<inicial<<endl;
    return 0;
}