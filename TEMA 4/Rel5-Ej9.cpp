#include <iostream>
#include <array>
#include <string>
using namespace std;

typedef struct {
    string palo;
    unsigned numero;
} Tcarta;

typedef array <Tcarta, 40> Tbaraja;
typedef array <string, 4> Tpalo;

void iniciarBaraja(Tbaraja &a, Tpalo &p);
void barajar(Tbaraja &b);
unsigned azar();

int main() {
  Tbaraja baraja;
  Tpalo palo={"oros", "copas", "espadas", "bastos"};
  iniciarBaraja(baraja, palo);
  barajar(baraja);
  return 0;
}

void iniciarBaraja(Tbaraja &b, Tpalo &p){
  for(unsigned i=0; i<size(p); ++i) {
    for(unsigned j=0; j<10; ++j) {
      b[j+10*i].palo=p[i];
      b[j+10*i].numero=j+1;
    }
  }
}

void barajar(Tbaraja &b) {
  unsigned num;
  cout<<"Introduzca el número veces a barajar: ";
  cin>>num;
  for(unsigned cont=0; cont<num; ++cont) {
    unsigned A=azar();
    unsigned B=azar();
    Tcarta aux=b[A];
    b[A]=b[B]; b[B]=aux;
  }
}

unsigned azar() {
  unsigned num=rand()%40;
  return num;
}