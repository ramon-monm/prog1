#include <iostream>
#include <array>
#include <string>
using namespace std;

typedef struct {
    string palo;
    unsigned num;
} Tcarta;

const int 
typedef array <Tcarta, 48> Tbaraja;
typedef array <string, 4> Tpalo;

void inicia_baraja(Tbaraja &a, Tpalos p);
void intercambia_carta(Tcarta &a, Tcarta&b);

int main() {
  Tbaraja a;
  Tpalos p={"oros", "copas", "espadas", "bastos"};
  inicia_baraja(a, p);
  return 0;
}

void inicia_baraja(Tbaraja &a, Tpalos p){
  for(unsigned i=0; i<4; i++){
    for(unsigned j=0; j<10; j++){
      int pos=10*i+j;
      a[pos].palo=p[i];
      a[pos].numero=j+1;
    }

