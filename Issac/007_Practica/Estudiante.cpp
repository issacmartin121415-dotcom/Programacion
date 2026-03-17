// Librería para entrada y salida de datos
#include <iostream>

// Incluimos el archivo de la clase
#include "Estudiante.h"

using namespace std;

// Implementación del método registrarDatos
// Este método guarda los datos recibidos en los atributos de la clase
void Estudiante::registrarDatos(string n, string m, float c) {

    // Asignamos los valores recibidos a las variables de la clase
    nombre = n;
    matricula = m;
    calificacion = c;
}

// Implementación del método modificarCalificacion
// Recibe una nueva calificación y reemplaza la anterior
void Estudiante::modificarCalificacion(float nuevaCalificacion) {

    // Actualiza la calificación del estudiante
    calificacion = nuevaCalificacion;
}

// Implementación del método mostrarDatos
// Este método imprime en pantalla los datos del estudiante
void Estudiante::mostrarDatos() {

    cout << "Nombre: " << nombre << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Calificacion: " << calificacion << endl;
}

// Implementación del método calcularEstado
// Este método analiza la calificación y devuelve un resultado
string Estudiante::calcularEstado() {

    // Si la calificación es mayor o igual a 60 el estudiante aprueba
    if (calificacion >= 60) {

        return "Aprobado"; // Valor de retorno

    } else {

        return "Reprobado"; // Valor de retorno
    }
}
