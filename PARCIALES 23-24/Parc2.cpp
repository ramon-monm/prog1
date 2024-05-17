#include <iostream>
using namespace std;

void suma(bool &cond, unsigned &n, unsigned &a, unsigned &b);
bool primo(unsigned &x);
void caracter(char &a);

int main()
{
    unsigned N, a, b;
    bool cond;
    cout << "Introduzca un numero natural: ";
    cin >> N;
    suma(cond, N, a, b);
    if (cond)
    {
        cout << N << " es la suma de " << a - 1 << " y " << b - 1 << "." << endl; // Hay que restar una unidad, pues la condición de las iteraciones se verifica tras incrementar una unidad el parámetro correcto.
    }
    else
    {
        cout << N << " no es la suma de dos numeros primos distintos." << endl;
    }
    cout << endl;

    char c;
    cout << "Introduzca una secuencia de caracteres: ";
    caracter(c);
    return 0;
}

bool primo(unsigned &x)
{
    unsigned d;
    bool cond = true;
    for (d = 2; cond && d <= x; ++d)
    {
        if (x % d == 0 && d != x)
        {
            cond = false;
        }
    }
    return cond;
}

void suma(bool &cond, unsigned &n, unsigned &a, unsigned &b)
{
    cond = false;
    for (a = 2; !cond && a <= n; ++a)
    {
        if (primo(a))
        {
            for (b = a + 1; !cond && b <= n; ++b)
            {
                if (primo(b))
                {
                    cond = (n == a + b);
                }
            }
        }
    }
}

void caracter(char &a)
{
    char A;
    cin >> a;
    do
    {
        if (64 < a && 91 > a)
        {
            A = a + 32;
        }
        else if (96 < a && 123 > a)
        {
            A = a - 32;
        }
        else
        {
            A = a;
        }
        cout << A;
        cin.get(a);
    } while (a != '\n');
}