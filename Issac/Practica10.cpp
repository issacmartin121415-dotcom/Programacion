
#include <iostream>
using namespace std;

// =======================
// Clase base
// =======================
class Empleado {
protected:
    string nombre;
    int edad;
    double salario;

public:
    // Constructor
    Empleado(string n, int e, double s) {
        nombre = n;
        edad = e;
        salario = s;
    }

    // Método para mostrar información
    virtual void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }

    // Método para calcular salario
    virtual double calcularSalario() {
        return salario;
    }
};

// =======================
// Clase derivada 1
// =======================
class EmpleadoTiempoCompleto : public Empleado {
protected:
    double bono;

public:
    EmpleadoTiempoCompleto(string n, int e, double s, double b)
        : Empleado(n, e, s) {
        bono = b;
    }

    double calcularSalario() override {
        return salario + bono;
    }

    void mostrarInformacion() override {
        Empleado::mostrarInformacion();
        cout << "Tipo: Tiempo Completo" << endl;
        cout << "Salario con bono: " << calcularSalario() << endl;
    }
};

// =======================
// Clase derivada 2
// =======================
class EmpleadoPorHoras : public Empleado {
private:
    int horasTrabajadas;
    double pagoPorHora;

public:
    EmpleadoPorHoras(string n, int e, int horas, double pago)
        : Empleado(n, e, 0) {
        horasTrabajadas = horas;
        pagoPorHora = pago;
    }

    double calcularSalario() override {
        return horasTrabajadas * pagoPorHora;
    }

    void mostrarInformacion() override {
        Empleado::mostrarInformacion();
        cout << "Tipo: Por Horas" << endl;
        cout << "Salario calculado: " << calcularSalario() << endl;
    }
};

// =======================
// Clase adicional (Prestaciones)
// =======================
class Prestaciones {
protected:
    bool seguro;
    int diasVacaciones;

public:
    Prestaciones(bool s, int v) {
        seguro = s;
        diasVacaciones = v;
    }

    void mostrarPrestaciones() {
        cout << "Seguro: " << (seguro ? "Si" : "No") << endl;
        cout << "Vacaciones: " << diasVacaciones << " dias" << endl;
    }
};

// =======================
// Herencia múltiple
// =======================
class EmpleadoCompletoConPrestaciones : public EmpleadoTiempoCompleto, public Prestaciones {
public:
    EmpleadoCompletoConPrestaciones(string n, int e, double s, double b, bool seg, int vac)
        : EmpleadoTiempoCompleto(n, e, s, b), Prestaciones(seg, vac) {}

    void mostrarInformacion() override {
        EmpleadoTiempoCompleto::mostrarInformacion();
        mostrarPrestaciones();
    }
};

// =======================
// Programa principal
// =======================
int main() {

    // Empleado base
    Empleado emp1("Juan", 30, 5000);

    // Empleado tiempo completo
    EmpleadoTiempoCompleto emp2("Maria", 28, 6000, 1000);

    // Empleado por horas
    EmpleadoPorHoras emp3("Carlos", 25, 40, 100);

    // Empleado con prestaciones
    EmpleadoCompletoConPrestaciones emp4("Ana", 35, 7000, 1500, true, 15);

    cout << "=== Empleado Base ===" << endl;
    emp1.mostrarInformacion();
    cout << "Salario: " << emp1.calcularSalario() << endl;

    cout << "\n=== Empleado Tiempo Completo ===" << endl;
    emp2.mostrarInformacion();

    cout << "\n=== Empleado Por Horas ===" << endl;
    emp3.mostrarInformacion();

    cout << "\n=== Empleado con Prestaciones ===" << endl;
    emp4.mostrarInformacion();

    return 0;
}

