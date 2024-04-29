#include <iostream>
#include <array>
using namespace std;

const unsigned d=5;
typedef array <int, d> Tvector;
void leer_vector(Tvector &v);
int suma_vector(const Tvector &v);

int main() {
    Tvector a;
    leer_vector(a);
    cout<<"La suma de los elementos del vector es "<<suma_vector(a)<<"."<<endl;
    return 0;
}