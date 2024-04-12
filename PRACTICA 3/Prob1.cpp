// Diseñar un programa en C++ que muestre por pantalla un tablero de ajedrez, donde las posiciones blancas serán mostradas 
// con el carácter ‘B’ y las posiciones negras serán mostradas con el carácter ‘N’. Un tablero de ajedrez tiene 8 filas y 
// 8 columnas. 

#include <iostream>
using namespace std;

int main() {
    unsigned i=1, j;
    while(i<=8) {
        for(j=0; j<=8; j=j+2) {
            if(i%2!=0) {
                cout<<"B "<<"N ";
            }
            else {
                cout<<"N "<<"B ";
            }
        }
        cout<<endl;
        ++i;
    }
    return 0;
}