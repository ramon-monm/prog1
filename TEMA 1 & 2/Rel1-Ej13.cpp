// Escribir un algoritmo que muestre por pantalla el número de dígitos que tienen un valor natural leído por teclado.

#include <iostream>
using namespace std;

int main() {
  char dig;
  unsigned contador=0;
  cout<<"Introduzca una cadena de caracteres: ";
  do {
    cin>>dig;
    if(int(dig)>=48 && int(dig)<=57) {
      ++contador;
    }
  } while(dig!='.'); // El bucle finalizará cuando lea el caracter '.'
  cout<<"El número de caracteres de valor natural leídos es de "<<contador<<"."<<endl;
  return 0;
}