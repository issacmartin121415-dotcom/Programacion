// Librería para usar cout y cin
#include <iostream>

// Incluimos la clase Estudiante
#include "Estudiante.h"

using namespace std;

int main() {

    // Creamos un objeto de la clase Estudiante
    Estudiante alumno;

    // Variables que usará el programa
    int opcion;
    string nombre, matricula;
    float calificacion;

    // Ciclo para repetir el menú hasta que el usuario decida salir
    do {

        // Mostrar menú
        cout << "\n----- MENU -----" << endl;
        cout << "1. Registrar estudiante" << endl;
        cout << "2. Modificar calificacion" << endl;
        cout << "3. Mostrar datos" << endl;
        cout << "4. Ver estado del estudiante" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Estructura que ejecuta diferentes acciones según la opción
        switch (opcion) {

        case 1:

            // Solicita los datos del estudiante
            cout << "Ingrese el nombre: ";
            cin >> nombre;

            cout << "Ingrese la matricula: ";
            cin >> matricula;

            cout << "Ingrese la calificacion: ";
            cin >> calificacion;

            // Llama al método para guardar los datos
            alumno.registrarDatos(nombre, matricula, calificacion);

            break;

        case 2:

            // Permite modificar la calificación
            cout << "Ingrese la nueva calificacion: ";
            cin >> calificacion;

            // Llama al método que cambia la calificación
            alumno.modificarCalificacion(calificacion);

            break;

        case 3:

            // Llama al método que muestra los datos del estudiante
            alumno.mostrarDatos();

            break;

        case 4:

            // Llama al método que devuelve si aprobó o reprobó
            cout << "Estado del estudiante: "
                 << alumno.calcularEstado() << endl;

            break;

        case 5:

            // Mensaje al salir del programa
            cout << "Saliendo del programa..." << endl;

            break;

        default:

            // Si el usuario escribe una opción incorrecta
            cout << "Opcion no valida" << endl;
        }

    } while (opcion != 5); // El programa termina cuando el usuario elige 5

    return 0; // Fin del programa
}