//② ARCHIVO Botella.h
// Declaración de la clase (EL QUÉ)
// Este archivo únicamente define la estructura de la clase,
// no contiene la lógica de los métodos.

// =======================================================
// Archivo: Botella.h
// =======================================================
// Este archivo describe la CLASE Botella.
// Aquí se indican sus características y acciones,
// funcionando como el molde de un objeto del mundo real.
// La implementación real se realiza en Botella.cpp.

// -------------------------------------------------------
// PROTECCIÓN PARA EVITAR MÚLTIPLES INCLUSIONES
// -------------------------------------------------------

// Si BOTELLA_H no ha sido definido previamente,
// el compilador entra a este bloque.
#ifndef BOTELLA_H

// Se define BOTELLA_H para marcar que este archivo
// ya fue procesado una vez.
#define BOTELLA_H

// -------------------------------------------------------
// LIBRERÍAS NECESARIAS
// -------------------------------------------------------

// Se incluye <string> para poder usar variables de texto.
#include <string>

// Se utiliza el espacio de nombres estándar.
using namespace std;

// -------------------------------------------------------
// DEFINICIÓN DE LA CLASE
// -------------------------------------------------------

// La clase Botella representa una botella de agua.
// Aquí solo se define su estructura general.
class Botella {

private:
    // ---------------------------------------------------
    // ATRIBUTOS (DATOS INTERNOS DEL OBJETO)
    // ---------------------------------------------------
    // Estos atributos están protegidos mediante private,
    // aplicando el principio de encapsulamiento.

    string color;        // Color de la botella
    int capacidad;       // Capacidad máxima en mililitros
    int cantidadActual;  // Cantidad actual de líquido
    bool abierta;        // Estado de la botella

public:
    // ---------------------------------------------------
    // MÉTODOS DISPONIBLES PARA EL USUARIO
    // ---------------------------------------------------
    // Al ser públicos, pueden llamarse desde main.cpp.

    // Constructor que inicializa los valores principales.
    Botella(string col, int cap, int actual);

    // Métodos que modifican o muestran el estado del objeto.
    void abrir();              // Cambia el estado a abierta
    void cerrar();             // Cambia el estado a cerrada
    void llenar(int cantidad); // Agrega líquido
    void beber(int cantidad);  // Quita líquido
    void mostrarEstado();      // Muestra información actual
};

// -------------------------------------------------------
// FIN DEL BLOQUE DE PROTECCIÓN
// -------------------------------------------------------

// Cierra la protección del encabezado.
#endif
