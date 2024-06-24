#include <iostream>
#include <array>
#include <cmath>
using namespace std;

const int P = 2, L = 20; // 20 factores o 20 pares de factores??
typedef array<unsigned, P> Tpar;
typedef array<Tpar, L> TDescFactorial;

TDescFactorial descomponer(int &x); // Número entero (no natural)!!
bool primo(unsigned &x);
void mostrar(TDescFactorial &x);
unsigned calcular(TDescFactorial &x);

int main()
{
    int x;
    TDescFactorial desc;
    cout << "Escriba numeros enteros positivos (-1 para finalizar): " << endl;
    do
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        desc = descomponer(x);
        mostrar(desc);
        cout << " = " << calcular(desc) << endl;
    } while (true);
    return 0;
}

TDescFactorial descomponer(int &x)
{
    unsigned exponente, num = x, i = 0;
    TDescFactorial descomposicion;
    for (unsigned k = 0; k < L; ++k)
    {
        descomposicion[k] = {0, 0};
    }
    for (unsigned factor = 2; num != 1; ++factor)
    {
        exponente = 0;
        while (primo(factor) && num != 1 && num % factor == 0)
        {
            ++exponente;
            num /= factor;
        }
        if (exponente > 0)
        {
            descomposicion[i][0] = factor;
            descomposicion[i][1] = exponente;
            ++i;
        }
    }
    return descomposicion;
}

bool primo(unsigned &x)
{
    bool cond = true;
    for (unsigned i = 2; i < x; ++i)
    {
        if (x % i == 0)
        {
            cond = false;
        }
    }
    return cond;
}

void mostrar(TDescFactorial &x)
{
    for (unsigned i = 0; i < L && x[i][0] != 0; ++i)
    {
        cout << x[i][0] << "^" << x[i][1];
        if (x[i + 1][0] != 0)
        {
            cout << " x ";
        }
    }
}

unsigned calcular(TDescFactorial &x)
{
    unsigned num = 1;
    for (unsigned i = 0; i < L && x[i][0] != 0; ++i)
    {
        num *= pow(x[i][0], x[i][1]);
    }
    return num;
}