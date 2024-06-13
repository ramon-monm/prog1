#include <iostream>
#include <array>
#include <string>
using namespace std;

// Apartado a)

// Definimos cada lista de palabras de nº de letras n como un vector de tamaño 20 (máximo 20 palabras).
typedef array <int, 20> Tvector;

// En cada lista podremos acceder a dos argumentos: las palabras, y el número de palabras. Luego, las listas son estructuras.
typedef struct{
    Tvector lista; // Lista de palabras
    unsigned n_pal; // Número de palabras
} Tlista;

// Almacenaremos las listas en un vector. Como máximo, habrá 10 listas, una por número de letras (el número máximo de letras de una palabra es 10).
typedef array <10, Tlista> TListasPalabras;

// Apartado b)

string busca_palabra(string frase, unsgined pos)

int main() {

}