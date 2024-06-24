#include <iostream>
#include <array>
using namespace std;

const int T = 10;
typedef array<int, T> Tfila;
typedef array<Tfila, T> Matriz;

void transponerMatriz(Matriz &m, unsigned &dim);
void invertirCadaFila(Matriz &m, unsigned &dim);
void rotarMatriz90Grados(Matriz &m, unsigned &dim);
void imprimirMatriz(Matriz &m, unsigned &dim);
void leerMatriz(Matriz &m, unsigned &dim);

int main()
{
    Matriz m;
    unsigned dim;
    cout << "Introduzca la dimension de la matriz cuadrada a ingresar: ";
    cin >> dim;
    leerMatriz(m, dim);
    rotarMatriz90Grados(m, dim);
    imprimirMatriz(m, dim);
    return 0;
}

void transponerMatriz(Matriz &m, unsigned &dim)
{
    Matriz aux;
    for (unsigned i = 0; i < dim; ++i)
    {
        for (unsigned j = 0; j < dim; ++j)
        {
            aux[j][i] = m[i][j];
        }
    }
    m = aux;
}

void invertirCadaFila(Matriz &m, unsigned &dim)
{
    Matriz aux;
    for (unsigned i = 0; i < dim; ++i)
    {
        for (unsigned j = 0; j < dim; ++j)
        {
            aux[i][dim - 1 - j] = m[i][j];
        }
    }
    m = aux;
}

void rotarMatriz90Grados(Matriz &m, unsigned &dim)
{
    Matriz aux = m;
    transponerMatriz(aux, dim);
    invertirCadaFila(aux, dim);
    m = aux;
}

void imprimirMatriz(Matriz &m, unsigned &dim)
{
    for (unsigned i = 0; i < dim; ++i)
    {
        for (unsigned j = 0; j < dim; ++j)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void leerMatriz(Matriz &m, unsigned &dim)
{
    for (unsigned i = 0; i < dim; ++i)
    {
        cout << "Introduzca la fila " << i + 1 << " de la matriz: ";
        for (unsigned j = 0; j < dim; ++j)
        {
            cin >> m[i][j];
        }
    }
}