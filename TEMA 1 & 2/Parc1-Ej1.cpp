// Escribir un programa que lea palabras (letra a letra) del teclado. Cada palabra irá seguida por un número. La lectura terminará cuando se escriba un punto. El programa debe mostrar como salida el número de palabras que van seguidas de un número igual al número de letras de la palabra (palabras bien contadas) y el número de palabras que van seguidas por un número distinto al número de letras de la palabra. Cada palabra tiene como máximo 9 letras. Por ejemplo, para la entrada: Este4es2un5ejemplo7de2varias6palabras9. 

#include <iostream>
using namespace std;

int main() {
  char last;
  unsigned contador=0, b=0, m=0;
  cout<<"Introduzca una secuencia de palabras seguidas del número de letras de cada una: ";
  do {
    cin>>last;
    if((last>='A' && last<='Z') || (last>='a' && last<='z')) {
      ++contador;
    }
    if(last>='1' && last<='9') {
      if(int(last)-48==contador) {
        ++b;
      }
      else {
        ++m;
      }
      contador=0;
    }
  } while(last!='.');
  cout<<"Número de palabras bien contadas: "<<b<<"."<<endl;
  cout<<"Número de palabras mal contadas: "<<m<<"."<<endl;
  return 0;
}