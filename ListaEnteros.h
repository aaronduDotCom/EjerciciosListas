//
// Created by ESCINF on 19/01/2026.
//

#ifndef EJERCICIOSLISTAS_LISTAENTEROS_H
#define EJERCICIOSLISTAS_LISTAENTEROS_H

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

    int obtenerPrimero(); //retorna el valor del primer elemento
    int obtenerUltimo(); //retorna el valor del último elemento
    int sumarElementos(); //retorna la suma de todos los elementos
    double promedio(); //retorna el promedio de los elementos
    int encontrarMaximo(); //retorna el valor máximo
    int encontrarMinimo(); //retorna el valor mínimo
};


#endif //EJERCICIOSLISTAS_LISTAENTEROS_H