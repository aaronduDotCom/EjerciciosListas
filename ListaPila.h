//
// Created by Oscar on 20/1/2026.
//

#ifndef EJERCICIOSLISTAS_LISTAPILA_H
#define EJERCICIOSLISTAS_LISTAPILA_H

#include "NodoLE.h"

#include <string>
#include <sstream>
using namespace std;

class ListaPila {
private:
    NodoLE *primero;
    NodoLE *actual;
public:
    ListaPila();
    ~ListaPila();
    void push(int valor); //agrega elemento (al inicio)
    int pop(); //elimina y retorna el último elemento agregado
    int top(); //retorna el último elemento sin eliminarlo
    bool estaVacia(); //verifica si está vacía
    int tamanno(); //retorna el tamaño

    string toString();
};


#endif //EJERCICIOSLISTAS_LISTAPILA_H