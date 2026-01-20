//
// Created by Oscar on 20/1/2026.
//

#ifndef EJERCICIOSLISTAS_LISTAREALES_H
#define EJERCICIOSLISTAS_LISTAREALES_H

#include "NodoLR.h"

#include <string>
#include <sstream>
using namespace std;

class ListaReales {
private:
    NodoLR *primero;
    NodoLR *actual;
public:
    ListaReales();
    ~ListaReales();
    bool vacia();
    void agregarInicio(double n);
    void agregarFinal(double n);
    bool eliminarInicio();


    string toString();

    double suma(); //suma todos los elementos
    double promedio(); //promedio de los elementos
    double producto(); //multiplica todos los elementos
    int contarPositivos(); //cuenta números positivos
    int contarNegativos(); //cuenta números negativos
    double encontrarMayor(); //encuentra el mayor valor
    double encontrarMenor(); //encuentra el menor valor
};


#endif //EJERCICIOSLISTAS_LISTAREALES_H