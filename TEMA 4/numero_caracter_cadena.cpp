#include <iostream>
#include <string>
using namespace std;

int main() {
    string oracion;
    char c;
    cout<<"Introduzca una oración: ";
    cin>>oracion;
    cout<<"Introduzca un carácter a buscar: ";
    cin>>c;
    unsigned l=oracion.size();
    unsigned contador=0;
    for(unsigned i=0; i<l; ++i) {
        if(oracion[i]==c) {
            ++contador;
        }
    }
    cout<<"El carácter "<<c<<" se repite "<<contador<<" veces en la oración."<<endl;
    return 0;
}