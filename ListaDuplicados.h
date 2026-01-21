//
// Created by Oscar on 20/1/2026.
//

#ifndef EJERCICIOSLISTAS_LISTADUPLICADOS_H
#define EJERCICIOSLISTAS_LISTADUPLICADOS_H

#include "NodoLE.h"

#include <string>
#include <sstream>
using namespace std;

class ListaDuplicados {
private:
    NodoLE* primero;
public:
    ListaDuplicados();
    ~ListaDuplicados();
    bool vacia();
    void agregarInicio(int valor);
    bool eliminarInicio();

    string toString();

    bool tieneDuplicados(); //verifica si hay valores duplicados
    void eliminarDuplicados(); //elimina todos los duplicados, dejando solo una ocurrencia
    int contarUnicos(); //cuenta cuántos valores únicos hay
    ListaDuplicados* obtenerUnicos(); //retorna nueva lista solo con valores únicos
};


#endif //EJERCICIOSLISTAS_LISTADUPLICADOS_H