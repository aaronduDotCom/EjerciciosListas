//
// Created by ESCINF on 19/01/2026.
//

#include "ListaEnteros.h"

ListaEnteros::ListaEnteros() {
    primero=nullptr;
    ultimo=nullptr;
    cant=0;
}

ListaEnteros::~ListaEnteros() {
    while (!vacia()) {
        eliminarInicio();
    }
}

bool ListaEnteros::vacia() {if (primero==nullptr) return true; else return false;}

int ListaEnteros::getcant() {return cant;}

void ListaEnteros::agregarInicio(int valor) {
    NodoLE *nuevo = new NodoLE(valor,primero);

    if (vacia())
        ultimo=nuevo;

    primero=nuevo;
    cant++;
}

void ListaEnteros::agregarFinal(int valor) {
    if (vacia()) {
        agregarInicio(valor);
    }else {
        ultimo->setSig(new NodoLE(valor,nullptr));
        ultimo=ultimo->getSig();
        cant++;
    }
}

bool ListaEnteros::eliminarInicio() {
    if (primero==nullptr) {return false;}

    NodoLE *temp = primero;
    primero=primero->getSig();
    delete temp;
    cant--;

    if (primero==nullptr)
        ultimo=nullptr;

    return true;
}

bool ListaEnteros::eliminarFinal() {
    if (primero==nullptr) {return false;}

    if (primero->getSig()==nullptr) {
        delete primero;
        primero=nullptr;
        ultimo=nullptr;
        cant=0;
    }

    NodoLE* actual = primero;
    while (actual->getSig()->getSig() != nullptr) {
        actual = actual->getSig();
    }

    delete actual->getSig();
    actual->setSig(nullptr);
    ultimo = actual;
    cant--;
    return true;
}

string ListaEnteros::toString() {
    stringstream ss;
    NodoLE* actual = primero;

    while (actual != nullptr) {
        ss << actual->getX() << endl;
        actual = actual->getSig();
    }

    return ss.str();
}

int ListaEnteros::obtenerPrimero() {
    return primero->getX();
}

int ListaEnteros::obtenerUltimo() {
    return ultimo->getX();
}

int ListaEnteros::sumarElementos() {
    if (vacia())
        return 0;

    NodoLE *actual = primero;
    int suma=0;
    while (actual!=nullptr) {
        suma+=actual->getX();
        actual=actual->getSig();
    }
    return suma;
}

double ListaEnteros::promedio() {
    if (vacia())
        return 0;

    NodoLE *actual = primero;
    double suma=0;
    while (actual!=nullptr) {
        suma+=actual->getX();
        actual=actual->getSig();
    }
    return suma/cant;
}

int ListaEnteros::encontrarMaximo() {
    if (vacia())
        return 0;

    NodoLE *actual = primero;
    int max=0;
    while (actual!=nullptr) {
        if (max<actual->getX())
            max=actual->getX();
        actual=actual->getSig();
    }
    return max;
}

int ListaEnteros::encontrarMinimo() {
    if (vacia())
        return 0;

    NodoLE *actual = primero;
    int min=actual->getX();
    while (actual!=nullptr) {
        if (min>actual->getX())
            min=actual->getX();
        actual=actual->getSig();
    }
    return min;
}
