//
// Created by Oscar on 19/1/2026.
//

#ifndef EJERCICIOSLISTAS_LISTACARACTERES_H
#define EJERCICIOSLISTAS_LISTACARACTERES_H

#include "NodoLC.h"

#include <string>
#include <sstream>
using namespace std;

class ListaCaracteres {
private:
    NodoLC *primero;
    NodoLC *actual;
public:
    ListaCaracteres();
    ~ListaCaracteres();

    bool vacia();
    void agregarInicio(char c);
    void agregarFinal(char c);
    bool eliminarInicio();

    int contarCaracter(char c); //cuenta apariciones de un carácter
    bool esPalindromo(); //verifica si la lista forma un palíndromo
    string obtenerCadena(); //retorna los caracteres como string
    void invertir(); //invierte el orden de los elementos

    string toString();

};

#endif //EJERCICIOSLISTAS_LISTACARACTERES_H
