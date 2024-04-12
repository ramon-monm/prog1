// Escribir un algoritmo que lea un número natural N y dibuje un triángulo de asteriscos con base y altura N.

#include <iostream>
using namespace std;

int main() {
  unsigned N, f, esp, asteriscos;
  cout<<"Introduzca un número natural: ";
  cin>>N;
  for(f=1; f<=N; ++f) {
    for(esp=1; esp<=N-f; ++esp) {
      cout<<" ";
    }
    for(asteriscos=1; asteriscos<=f; ++asteriscos) {
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}