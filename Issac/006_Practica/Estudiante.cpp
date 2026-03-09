#include <iostream>
#include "Estudiante.h"

using namespace std;

// Implementación del constructor
Estudiante::Estudiante(string nombre, string matricula, float promedio) {

    // this se usa para referirse al objeto actual
    this->nombre = nombre;
    this->matricula = matricula;
    this->promedio = promedio;
}

// Implementación del método para mostrar datos
void Estudiante::mostrarDatos() {

    cout << "Nombre: " << nombre << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Promedio: " << promedio << endl;
}

// Implementación del método que verifica si aprobó
void Estudiante::aprobo() {

    if (promedio >= 70) {
        cout << "Estado: Aprobo" << endl;
    }
    else {
        cout << "Estado: Reprobo" << endl;
    }
}