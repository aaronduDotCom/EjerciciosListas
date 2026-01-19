//
// Created by ESCINF on 19/01/2026.
//

#ifndef EJERCICIOSLISTAS_LISTAENTEROS_H
#define EJERCICIOSLISTAS_LISTAENTEROS_H

#include <string>

#include "NodoLE.h"

#include <string>
#include <sstream>
using namespace std;

class ListaEnteros {
    NodoLE *primero;
    NodoLE *ultimo;
    int cant;

    //NodoLE *primero;
    //NodoLe *acual;

    public:
    ListaEnteros();
    ~ListaEnteros();
    bool vacia();
    int getcant();
    void agregarInicio(int valor);
    void agregarFinal(int valor);
    bool eliminarInicio();
    bool eliminarFinal();
    string toString();
};


#endif //EJERCICIOSLISTAS_LISTAENTEROS_H