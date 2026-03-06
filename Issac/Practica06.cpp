#include <iostream>   // Librería para usar cout y cin
#include <string>     // Librería para usar el tipo de dato string

using namespace std;

// Declaración de la clase Estudiante
class Estudiante {

private:
    // Atributos privados (solo se pueden usar dentro de la clase)
    string nombre;
    string matricula;
    float promedio;

public:

    // Constructor de la clase
    // Se ejecuta automáticamente cuando creamos un objeto
    Estudiante(string nombre, string matricula, float promedio) {

        // this se refiere al objeto actual
        // Sirve para diferenciar el atributo de la clase del parámetro
        this->nombre = nombre;
        this->matricula = matricula;
        this->promedio = promedio;
    }

    // Método para mostrar los datos del estudiante
    void mostrarDatos() {

        cout << "Nombre: " << nombre << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Promedio: " << promedio << endl;

    }

    // Método que verifica si el estudiante aprobó
    void aprobo() {

        // Si el promedio es mayor o igual a 70 aprueba
        if (promedio >= 70) {
            cout << "Estado: Aprobo" << endl;
        }
        else {
            cout << "Estado: Reprobo" << endl;
        }

    }

};

// Función principal del programa
int main() {

    // Instanciación de objetos
    // Aquí estamos creando objetos a partir de la clase Estudiante

    Estudiante estudiante1("Juan Perez", "A123", 85);
    Estudiante estudiante2("Maria Lopez", "A456", 65);

    // Mostrar datos del primer estudiante
    cout << "----- Estudiante 1 -----" << endl;
    estudiante1.mostrarDatos(); // Llamada al método mostrarDatos
    estudiante1.aprobo();       // Llamada al método aprobo

    cout << endl;

    // Mostrar datos del segundo estudiante
    cout << "----- Estudiante 2 -----" << endl;
    estudiante2.mostrarDatos();
    estudiante2.aprobo();

    return 0; // Indica que el programa terminó correctamente
}