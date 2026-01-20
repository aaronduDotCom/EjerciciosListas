//
// Created by Oscar on 19/1/2026.
//

#ifndef EJERCICIOSLISTAS_LISTABUSQUEDA_H
#define EJERCICIOSLISTAS_LISTABUSQUEDA_H

#include "NodoLE.h"

#include <string>
#include <sstream>
using namespace std;

class ListaBusqueda {
private:
    NodoLE*primero;
    NodoLE* actual;
public:
    ListaBusqueda();
    ~ListaBusqueda();
    bool vacia();
    void agregarInicio(int valor);
    bool eliminarInicio();

    string toString();

    bool buscar(int valor); //retorna true si el valor existe
    int contarApariciones(int valor); //cuenta cuántas veces aparece un valor
    int obtenerPosicion(int valor); //retorna la posición (índice) de un valor, -1 si no existe
    bool eliminarPorValor(int valor); //elimina la primera ocurrencia de un valor
    int eliminarTodasOcurrencias(int valor); //elimina todas las ocurrencias y retorna cuántas eliminó
};


#endif //EJERCICIOSLISTAS_LISTABUSQUEDA_H