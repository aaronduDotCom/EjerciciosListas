//
// Created by Oscar on 19/1/2026.
//

#include "ListaBusqueda.h"

ListaBusqueda::ListaBusqueda() {
    primero = nullptr;
    actual = primero;
}

bool ListaBusqueda::vacia() {
    return primero == nullptr;
}


void ListaBusqueda::agregarInicio(int valor) {
    NodoLE *nuevo = new NodoLE(valor,primero);

    primero=nuevo;
}

string ListaBusqueda::toString() {
    stringstream ss;
    actual = primero;

    while (actual != nullptr) {
        ss << actual->getX() << endl;
        actual = actual->getSig();
    }

    return ss.str();
}

bool ListaBusqueda::buscar(int valor) {
    if (primero==nullptr)
        return false;
    actual=primero;
    while (actual!=nullptr) {
        if (actual->getX()==valor)
            return true;
        actual=actual->getSig();
    }
    return false;
}

int ListaBusqueda::contarApariciones(int valor) {
    if (primero==nullptr)
        return 0;
    actual=primero;
    int cant=0;
    while (actual!=nullptr) {
        if (actual->getX()==valor)
            cant++;
        actual=actual->getSig();
    }
    return cant;
}

int ListaBusqueda::obtenerPosicion(int valor) {
    if (primero==nullptr)
        return -1;

    actual=primero;
    int pos=0;

    while (actual!=nullptr) {
        if (actual->getX()==valor) {
            return pos;
        }
        actual=actual->getSig();
        pos++;
    }
    return -1;
}

bool ListaBusqueda::eliminarPorValor(int valor) {
    if (vacia())
        return false;

    if (primero->getX() == valor) {
        NodoLE* temp = primero;
        primero = primero->getSig();
        delete temp;
        return true;
    }

    actual=primero;

    while (actual->getSig() != nullptr) {
        if (actual->getSig()->getX() == valor) {
            NodoLE* temp = actual->getSig();
            actual->setSig(temp->getSig());
            delete temp;
            return true;
        }
        actual = actual->getSig();
    }

    return false;
}

int ListaBusqueda::eliminarTodasOcurrencias(int valor) {
    if (vacia())
        return 0;

    int cant = 0;

    while (primero != nullptr && primero->getX() == valor) {
        NodoLE* temp = primero;
        primero = primero->getSig();
        delete temp;
        cant++;
    }

    actual = primero;

    while (actual != nullptr && actual->getSig() != nullptr) {
        if (actual->getSig()->getX() == valor) {
            NodoLE* temp = actual->getSig();
            actual->setSig(temp->getSig());
            delete temp;
            cant++;
        } else {
            actual = actual->getSig();
        }
    }

    return cant;
}
