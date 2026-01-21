//
// Created by Oscar on 20/1/2026.
//

#ifndef EJERCICIOSLISTAS_LISTAORDENADA_H
#define EJERCICIOSLISTAS_LISTAORDENADA_H

#include "NodoLE.h"

#include <string>
#include <sstream>
using namespace std;

class ListaOrdenada {
private:
    NodoLE *primero;
public:
    ListaOrdenada();
    ~ListaOrdenada();
    bool vacia();
    void eliminarInicio();

    string toString();

    void insertarOrdenado(int valor); //inserta manteniendo orden ascendente
    void insertarOrdenadoDesc(int valor); //inserta manteniendo orden descendente
    bool estaOrdenada(); //verifica si la lista está ordenada
    void ordenar(); //ordena la lista usando algoritmo de burbuja
    void ordenarDesc(); //ordena en orden descendente

};


#endif //EJERCICIOSLISTAS_LISTAORDENADA_H