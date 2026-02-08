// =======================================================
// Archivo: main.cpp
// =======================================================
//  Este archivo es el PROGRAMA PRINCIPAL.
//  Aquí NO se define la clase.
//  Aquí se CREAN y se USAN objetos.
//  Es como usar una botella, no fabricarla.

// -------------------------------------------------------
// INCLUSIÓN DE LIBRERÍAS Y ARCHIVOS
// -------------------------------------------------------

//  Incluimos <iostream> para poder mostrar mensajes.
#include <iostream>

//  Incluimos nuestro archivo de clase.
//  Esto nos permite usar la clase Botella.
#include "Botella.h"

//  Usamos el espacio de nombres estándar.
using namespace std;

// -------------------------------------------------------
// FUNCIÓN PRINCIPAL
// -------------------------------------------------------

int main() {

    // ===================================================
    // CREACIÓN DE OBJETOS
    // ===================================================

    //  Se crean DOS OBJETOS de la misma clase.
    //  Ambos son botellas, pero cada una es independiente.
    Botella botella1("Verde", 1000, 300);
    Botella botella2("Azul", 600, 100);

    // ===================================================
    // USO DEL OBJETO 1
    // ===================================================

    //  Mostramos el estado inicial de la botella 1.
    cout << "Estado inicial de la botella 1:\n";
    botella1.mostrarEstado();

    //  Abrimos la botella 1.
    botella1.abrir();

    //  Intentamos llenar 400 ml.
    botella1.llenar(400);

    //  Mostramos el estado después de llenar.
    botella1.mostrarEstado();

    // ===================================================
    // USO DEL OBJETO 2
    // ===================================================

    //  Mostramos el estado inicial de la botella 2.
    cout << "\nEstado inicial de la botella 2:\n";
    botella2.mostrarEstado();

    //  Abrimos la botella 2.
    botella2.abrir();

    //  Intentamos llenar 800 ml.
    //  Esta es una PRUEBA INVÁLIDA porque excede la capacidad.
    botella2.llenar(800);

    //  Ahora llenamos una cantidad válida.
    botella2.llenar(200);

    //  Mostramos el estado final de la botella 2.
    botella2.mostrarEstado();

    // ===================================================
    // FIN DEL PROGRAMA
    // ===================================================

    return 0;
}

/*
================== PRUEBAS ==================

✔ Prueba correcta:
Abrir botella 1 y llenarla con 400 ml.
Resultado: aumenta la cantidad.

❌ Prueba inválida:
Intentar llenar botella 2 con 800 ml.
Resultado: se bloquea y se llena al máximo.

🔁 Segunda botella:
Botella 2 funciona de forma independiente
a la botella 1.

============================================
*/
