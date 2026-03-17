// Evita que el archivo se incluya varias veces en el programa
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

// Librería para usar variables tipo texto (string)
#include <string>
using namespace std;

// Declaración de la clase Estudiante
class Estudiante {

private:
    // Atributos de la clase (información del estudiante)
    string nombre;        // Guarda el nombre del estudiante
    string matricula;     // Guarda el número de control
    float calificacion;   // Guarda la calificación del estudiante

public:
    // Métodos que podrá usar el programa

    // Método para registrar los datos del estudiante
    // Recibe parámetros: nombre, matrícula y calificación
    void registrarDatos(string n, string m, float c);

    // Método para modificar la calificación
    // Recibe un parámetro con la nueva calificación
    void modificarCalificacion(float nuevaCalificacion);

    // Método para mostrar la información del estudiante
    void mostrarDatos();

    // Método que analiza la calificación y devuelve
    // si el estudiante aprobó o reprobó
    string calcularEstado();
};

#endif