#include "Producto.h"

// Constructor
Producto::Producto(string n, float p) {
    nombre = n;
    precio = p;
    cout << "Objeto creado correctamente" << endl;
}

// Destructor
Producto::~Producto() {
    cout << "Objeto destruido" << endl;
}

// Mostrar datos
void Producto::mostrar() {
    cout << "Nombre: " << nombre << endl;
    cout << "Precio: $" << precio << endl;
}

// Modificar precio
void Producto::modificar(float nuevoPrecio) {
    precio = nuevoPrecio;
    cout << "Precio actualizado correctamente" << endl;
}
