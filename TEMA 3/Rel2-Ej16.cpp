#include <iostream>
using namespace std;

int a, b, c;
void dos(int x, int y, int& z){
z=x+y+z;
cout<<x<<" "<<y<<" "<<z<<endl;
} // Cada vez que se llame al subalgoritmo, se va a ejecutar las instrucciones declaradas dentrode él.

int main(){
a=5; b=2; c=3;
dos(a,b,c); // Se imprimen a, b con su valor inicial; c se actualiza a 5+2+3=10, se guarda en memoria y se imprime.
// AHORA, c=10.
dos(7,a+b+c,a); // Se imprime un 7 sin cambiar el valor de a; se imprime un 17=5+2+10 (con c actualizado); a se actualiza a 29=7+17+5y se imprime.
// AHORA, a=17.
dos(a*b,a/b,c); // Se imprime un 58=29*2 (con a actualizado); se imprime un 14=29/2 (con a actualizado); c se actualiza a un 82=58+14+10, se guarda en memoria y se imprime.
// AHORA, c=82.
cout<<a<<" "<<b<<" "<<c<<endl; // Se imprime el valor de a, b y c en memoria.
return 0;
}