/* Una farmacia desea almacenar sus productos en una estructura. De cada producto hay
que almacenar la siguiente información: código, nombre, Descripción (cadenas de
caracteres), laboratorio, proveedor, precio, fecha de caducidad. Hay que diseñar la
estructura de datos y un procedimiento que permita introducir datos de los medicamentos
en la estructura. */

#include <iostream>
#include <string>
using namespace std;

typedef struct{
    unsigned dia;
    unsigned mes;
    unsigned año;
} Tfechadecaducidad;

typedef struct{
    string codigo;
    string nombre;
    string descripcion;
    string laboratorio;
    string proveedor;
    unsigned precio;
    Tfechadecaducidad fecha;
} Tproducto;

void introducirDatos(Tproducto &x);
void introducirFecha(Tfechadecaducidad &x);

int main() {
    Tproducto p;
    cout<<"DATOS DEL ARTÍCULO: "<<endl;
    introducirDatos(p);
    return 0;
}

void introducirDatos(Tproducto &x) {
    cout<<"Introduzca el nombre del producto: ";
    getline(cin, x.nombre);
    cout<<"Introduzca el código del producto: ";
    getline(cin, x.codigo);
    cout<<"Introduzca el laboratorio del producto: ";
    getline(cin, x.laboratorio);
    cout<<"Introduzca el proveedor del producto: ";
    getline(cin, x.proveedor);
    cout<<"Introduzca el precio del producto: ";
    cin>>x.precio;
    cout<<"Para cumplimentar la fecha de caducidad:"<<endl;
    introducirFecha(x.fecha);
    cout<<"Introduzca una descripción del producto: ";
    cin.ignore();
    getline(cin, x.descripcion);
}

void introducirFecha(Tfechadecaducidad &x) {
    cout<<"Introduzca el año de caducidad: ";
    cin>>x.año;
    cout<<"Introduzca el mes de caducidad: ";
    cin>>x.mes;
    cout<<"Introduzca el día de caducidad: ";
    cin>>x.dia;
}