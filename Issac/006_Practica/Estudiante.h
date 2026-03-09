#ifndef ESTUDIANTE_H // Si ESTUDIANTE_H no ha sido definido, entonces ejecuta lo siguiente. 
#define ESTUDIANTE_H // Define ese nombre para que si el archivo se vuelve a incluir, ya no se repita.

#include <string>
using namespace std;

// Aquí solo declaramos la clase y sus métodos
class Estudiante {

private:
    // Atributos privados del estudiante
    string nombre;
    string matricula;
    float promedio;

public:
    // Declaración del constructor
    Estudiante(string nombre, string matricula, float promedio);

    // Declaración de métodos
    void mostrarDatos();
    void aprobo();
};

#endif