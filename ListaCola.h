//
// Created by Oscar on 20/1/2026.
//

#ifndef EJERCICIOSLISTAS_LISTACOLA_H
#define EJERCICIOSLISTAS_LISTACOLA_H

#include "NodoLE.h"

#include <string>
#include <sstream>
using namespace std;

class ListaCola {
private:
    NodoLE *primero;
    NodoLE *actual;
public:
    ListaCola();
    ~ListaCola();

    void encolar(int valor); //agrega elemento (al final)
    int desencolar(); //elimina y retorna el primer elemento
    int frente(); //retorna el primer elemento sin eliminarlo
    bool estaVacia(); //verifica si está vacía
    int tamanno(); //retorna el tamaño

    string toString();
};


#endif //EJERCICIOSLISTAS_LISTACOLA_H