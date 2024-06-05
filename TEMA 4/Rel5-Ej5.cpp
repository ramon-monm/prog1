#include <iostream>
#include <array>
#include <string>
using namespace std;

const int NA=7;
const int NU=100;

typedef array <bool, NA> Tlista_aficiones;
typedef struct{
    string nombre;
    unsigned edad;
    Tlista_aficiones aficiones;
} Tusuario;

typedef array <Tusuario, NU> Tlista_usuarios;
typedef struct{
    unsigned num_usuarios;
    Tlista_usuarios usuarios;
} Tplataforma;

void nuevoUsuario(Tplataforma &d, const Tlista_aficiones &a) {
    unsigned 
}

int main() {
    Tplataforma datb;
    Tlista_aficiones af={"Lectura", "Viajes", "Deportes", "Cine", "Gastronomía", "Ordenadores", "JuegosDeROL", "Modelismo"};
    // Inicializamos la red social con un número nulo de usuarios
    datb.num_usuarios=0;
}