// =======================================================
// Archivo: Botella.cpp
// =======================================================
//  Este archivo contiene la IMPLEMENTACIÓN de la clase.
//  Aquí sí se escribe la lógica y las reglas.
//  Es el "cómo funciona por dentro" del objeto.

// -------------------------------------------------------
// INCLUSIÓN DE ARCHIVOS NECESARIOS
// -------------------------------------------------------

//  Incluimos nuestra propia clase.
//  Esto es como decirle al programa:
//  "Aquí está el plano de la botella, ahora sí voy a usarlo".
#include "Botella.h"

//  Incluimos <iostream> para poder mostrar mensajes.
//  Sin esto no podríamos usar cout.
#include <iostream>

//  Usamos el espacio de nombres estándar.
using namespace std;

// =======================================================
// CONSTRUCTOR
// =======================================================

//  Este es el CONSTRUCTOR de la clase Botella.
//  Se ejecuta automáticamente cuando se crea un objeto.
//  Inicializa los valores principales.
Botella::Botella(string col, int cap, int actual) {

    //  Asignamos el color recibido.
    color = col;

    //  Validamos la capacidad.
    //  No puede ser negativa o cero.
    if (cap <= 0) {
        capacidad = 500;   // valor por defecto
    } else {
        capacidad = cap;
    }

    //  Validamos la cantidad inicial.
    if (actual < 0)
        cantidadActual = 0;
    else if (actual > capacidad)
        cantidadActual = capacidad;
    else
        cantidadActual = actual;

    //  Al inicio la botella está cerrada.
    abierta = false;
}

// =======================================================
// MÉTODO abrir()
// =======================================================

//  Este método sirve para abrir la botella.
void Botella::abrir() {

    //  Cambiamos el estado interno.
    abierta = true;

    //  Avisamos al usuario.
    cout << "La botella esta abierta.\n";
}

// =======================================================
// MÉTODO cerrar()
// =======================================================

//  Este método sirve para cerrar la botella.
void Botella::cerrar() {

    //  Cambiamos el estado interno.
    abierta = false;

    //  Avisamos al usuario.
    cout << "La botella esta cerrada.\n";
}

// =======================================================
// MÉTODO llenar()
// =======================================================

//  Este método intenta agregar líquido a la botella.
//  Antes de hacerlo, se revisan varias reglas.
void Botella::llenar(int cantidad) {

    //  REGLA 1:
    //  No se puede llenar si la botella está cerrada.
    if (!abierta) {
        cout << "No se puede llenar, la botella esta cerrada.\n";
        return;
    }

    //  REGLA 2:
    //  No se aceptan cantidades negativas o cero.
    if (cantidad <= 0) {
        cout << "Cantidad invalida.\n";
        return;
    }

    //  REGLA 3:
    //  No se puede exceder la capacidad máxima.
    if (cantidadActual + cantidad > capacidad) {
        cout << "Se lleno hasta el maximo.\n";
        cantidadActual = capacidad;
        return;
    }

    //  Si pasa todas las reglas, se agrega el líquido.
    cantidadActual += cantidad;

    cout << "Se agregaron " << cantidad << " ml.\n";
}

// =======================================================
// MÉTODO beber()
// =======================================================

//  Este método sirve para quitar líquido de la botella.
void Botella::beber(int cantidad) {

    //  REGLA 1:
    //  La botella debe estar abierta.
    if (!abierta) {
        cout << "No se puede beber, la botella esta cerrada.\n";
        return;
    }

    //  REGLA 2:
    //  Cantidad válida.
    if (cantidad <= 0) {
        cout << "Cantidad invalida.\n";
        return;
    }

    //  REGLA 3:
    //  No se puede beber más de lo que hay.
    if (cantidad > cantidadActual) {
        cout << "No hay suficiente agua.\n";
        return;
    }

    //  Si pasa las reglas, se quita el líquido.
    cantidadActual -= cantidad;

    cout << "Se bebieron " << cantidad << " ml.\n";
}

// =======================================================
// MÉTODO mostrarEstado()
// =======================================================

//  Este método solo muestra información.
//  No modifica ningún atributo.
void Botella::mostrarEstado() {

    cout << "Color: " << color << endl;
    cout << "Capacidad: " << capacidad << " ml" << endl;
    cout << "Cantidad actual: " << cantidadActual << " ml" << endl;

    //  Operador ternario para mostrar el estado.
    cout << "Estado: "
         << (abierta ? "Abierta" : "Cerrada") << endl;
}
