#include <iostream>
#include "Producto.h"

using namespace std;

int main() {
    string nombre;
    float precio;
    int opcion;

    cout << "Ingresa el nombre del producto: ";
    cin >> nombre;

    cout << "Ingresa el precio del producto: ";
    cin >> precio;

    // Creación del objeto
    Producto producto(nombre, precio);

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Mostrar producto" << endl;
        cout << "2. Modificar precio" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                producto.mostrar();
                break;

            case 2:
                float nuevoPrecio;
                cout << "Nuevo precio: ";
                cin >> nuevoPrecio;
                producto.modificar(nuevoPrecio);
                break;

            case 3:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
        }

    } while(opcion != 3);

    return 0;
}
