#include <iostream>
#include "Estudiante.h"

using namespace std;

int main() {

    // Instanciación de objetos
    // Aquí creamos dos estudiantes usando la clase
    Estudiante estudiante1("Juan Perez", "A123", 85);
    Estudiante estudiante2("Maria Lopez", "A456", 65);

    cout << "----- Estudiante 1 -----" << endl;
    estudiante1.mostrarDatos();
    estudiante1.aprobo();

    cout << endl;

    cout << "----- Estudiante 2 -----" << endl;
    estudiante2.mostrarDatos();
    estudiante2.aprobo();

    return 0;
}