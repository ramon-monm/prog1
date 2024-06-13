/* Se necesita un programa para gestión de una aplicación de redes sociales. Para cada
miembro se almacenarán los siguientes datos:
Nombre, edad, aficiones (Lectura, Viajes, Deportes, Cine, Gastronomía,
Ordenadores, JuegosDeROL, Modelismo). Una persona puede tener ninguna, una o
más aficiones; se pueden codificar, por ejemplo, usando un array de booleanos.
Hay que definir el tipo de datos adecuado para almacenar esta información e
implementar los siguientes subalgoritmos:
a) Introducir en la estructura los datos de una persona.
b) Buscar una persona (por el nombre)
c) Dar de baja una persona (eliminar sus datos, se localiza por el nombre)
d) Conectar. Dado el nombre de una persona, se busca una afín a ella y se presentan
por pantalla los datos de las dos personas. Una persona será afín a otra (a efectos
de conectar) si coinciden todas sus aficiones. */

#include <iostream>
#include <array>
#include <string>
using namespace std;

const int T=8;
typedef array <string, T> Taficiones;
typedef array <bool, T> Tboolaficiones;

typedef struct {
    string nombre;
    unsigned edad;
    Tboolaficiones aficiones;
    bool registrado=false;
} Tusuario;

const int U=100;
typedef array <Tusuario, U> Tplataforma; // Consideramos que, como máximo, la plataforma puede registrar 100 usuarios.

void introducirDatos(Tusuario &u);
void seleccionarAficiones(Tboolaficiones &v);
unsigned buscarUsuario(Tplataforma &p);
void fraseMinuscula(string &x);
void escribirDatos(Tusuario &u);
void eliminarUsuario(Tusuario &u);

int main() {
    while(true) {
        unsigned sel;
        Tplataforma plataforma;
        cout<<"Seleccione la acción a relizar: "<<endl<<"1.- Introducir datos de un nuevo usuario."<<endl<<"2.- Buscar un usuario por nombre."<<endl;
        cin>>sel;
        if(sel==1) {
            bool hueco=false;
            for(unsigned i=0; !hueco && i<size(plataforma); ++i) {
                if(!plataforma[i].registrado) {hueco=true; introducirDatos(plataforma[i]);}
            }
            if(!hueco) {cout<<"Límite de usuarios alcanzado. No se puede añadir ningún usuario más.";}
        }
        if(sel==2) {
            if(buscarUsuario(plataforma)==U) {
                cout<<"Usuario no encontrado."<<endl;
            }
            else {
                escribirDatos(plataforma[buscarUsuario(plataforma)]);
            }
        }
    } 
}

void introducirDatos(Tusuario &u) {
    cout<<"Introduzca el nombre de usuario: ";
    cin.ignore();
    getline(cin, u.nombre);
    cout<<"Introduzca su edad: ";
    cin>>u.edad;
    seleccionarAficiones(u.aficiones);
}

void seleccionarAficiones(Tboolaficiones &v) {
    Taficiones aficiones={"Lectura", "Viajes", "Deportes", "Cine", "Gastronomía", "Ordenadores", "JuegosDeROL", "Modelismo"};
    char ans;
    cout<<"Seleccione las siguientes aficiones afines (y/n): "<<endl;
    for(unsigned i=0; i<size(aficiones); ++i) {
        cout<<aficiones[i]<<" ";
        cin>>ans;
        if(ans=='y') {
            v[i]=1;
        }
        else if(ans=='n') {
            v[i]=0;
        }
        else {
            do {
            cout<<"Caracter no válido. Repita su elección: ";
            cin>>ans;
            if(ans=='y') {
                v[i]=1;
            }
            else if(ans=='n') {
                v[i]=0;
            }
            } while(ans!='y' && ans!='n');
        }
    }
}

unsigned buscarUsuario(Tplataforma &p) {
    string name;
    unsigned i;
    cout<<"Introduzca el nombre de usuario: ";
    cin.ignore();
    getline(cin, name);
    bool match=false;
    for(i=0; i<U; ++i) {
        match=true;
        for(unsigned j=0; j<size(p[i].nombre); ++j) {
            if(name[j]!=p[i].nombre[j]) {
                match=false; break;
            }
        } // No barrer todo el array
        if(match) {break;}
    }
    return i;
}

void escribirDatos(Tusuario &u) {
    cout<<"Nombre: "<<u.nombre<<endl;
    cout<<"Edad: "<<u.edad<<endl;
    Taficiones aficiones={"Lectura", "Viajes", "Deportes", "Cine", "Gastronomía", "Ordenadores", "JuegosDeROL", "Modelismo"};
    cout<<"Aficiones: "<<endl;
    for(unsigned i=0; i<T; ++i) {
        if(u.aficiones[i]) {cout<<aficiones[i]<<endl;}
    }
}

void eliminarUsuario(Tusuario &u) {

}