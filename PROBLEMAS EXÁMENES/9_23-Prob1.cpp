#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

const int I=10, J=10;
typedef array <int, J> Tvector;
typedef array <Tfila, I> Tmatrix;

int aplicarFiltro(const Tmatrix &m, Tmatrix f, unsigned i, unsigned j);
Tmatrix convolucion(const Tmatrix &m, const Tmatrix &f);

typedef struct{
    Tmatrix m;
    unsigned nf, nc;
} Tmatrix_incompleta;

int main() {
    Tmatrix sol;
    Tmatrix M={}
}

int aplicarFiltro(const Tmatrix &m, Tmatrix &f, unsigned F, unsigned C) {
    int sol;
    for(unsigned i=0; i<f.nf; ++i) {
        for(unsigned j=0; i<f.nc; ++j) {
            sol+=f.m[i][j]*m.m[F+i][C+j];
        }
    }
    return sol;
}

Tmatrix convolucion(const Tmatrix &m, const Tmatrix &f) {
    Tmatrix sol;
    sol.nf=m.nf-f.nf+1;
    sol.nc=m.nc-filtro.nc+1;
    for(unsigned i=0; i<sol.nf; ++i) {
        for(unsigned j=0; j<sol.nc; ++j) {
            sol.m[i][j]=aplicarFiltro(m, f, i, j);
        }
    }
    return sol;
}