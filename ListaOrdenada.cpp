//
// Created by Oscar on 20/1/2026.
//

#include "ListaOrdenada.h"

ListaOrdenada::ListaOrdenada() {
    primero=nullptr;
}

ListaOrdenada::~ListaOrdenada() {
    while (!vacia())
        eliminarInicio();
}

bool ListaOrdenada::vacia() {
}

void ListaOrdenada::eliminarInicio() {
    NodoLE* aux = primero;
    primero=primero->getSig();
    delete aux;
}

string ListaOrdenada::toString() {
    stringstream ss;
    NodoLE* actual = primero;

    while (actual != nullptr) {
        ss << actual->getX() << endl;
        actual = actual->getSig();
    }

    return ss.str();
}

void ListaOrdenada::insertarOrdenado(int valor) {
    NodoLE* nuevo = new NodoLE(valor, nullptr);

    if (vacia()) {
        primero = nuevo;
    } else if (valor < primero->getX()) {
        nuevo->setSig(primero);
        primero = nuevo;
    } else {
        NodoLE* aux = primero;

        while (aux->getSig() != nullptr && aux->getSig()->getX() < valor) {
            aux = aux->getSig();
        }

        nuevo->setSig(aux->getSig());
        aux->setSig(nuevo);
    }
}

void ListaOrdenada::insertarOrdenadoDesc(int valor) {
    NodoLE* nuevo = new NodoLE(valor, nullptr);

    if (vacia()) {
        primero = nuevo;
    } else if (valor > primero->getX()) {
        nuevo->setSig(primero);
        primero = nuevo;
    } else {
        NodoLE* aux = primero;

        while (aux->getSig() != nullptr && aux->getSig()->getX() > valor) {
            aux = aux->getSig();
        }

        nuevo->setSig(aux->getSig());
        aux->setSig(nuevo);
    }
}


bool ListaOrdenada::estaOrdenada() {
    if (vacia() || primero->getSig()==nullptr) {return true;}

    NodoLE* aux = primero;

    bool asc=true;
    bool desc=true;

    while (aux->getSig()!=nullptr) {
        if (aux->getX() > aux->getSig()->getX())
            asc = false;
        aux = aux->getSig();

        if (aux->getX() < aux->getSig()->getX())
            desc = false;
        aux = aux->getSig();
    }

    return asc || desc;
}

void ListaOrdenada::ordenar() {
    if (vacia() || primero->getSig() == nullptr)
        return;

    bool cambio;
    NodoLE* actual;
    NodoLE* siguiente;

    do {
        cambio = false;
        actual = primero;

        while (actual->getSig() != nullptr) {
            siguiente = actual->getSig();

            if (actual->getX() > siguiente->getX()) {
                int temp = actual->getX();
                actual->setX(siguiente->getX());
                siguiente->setX(temp);
                cambio = true;
            }

            actual = actual->getSig();
        }
    } while (cambio);

}

void ListaOrdenada::ordenarDesc() {
    if (vacia() || primero->getSig() == nullptr)
        return;

    bool cambio;
    NodoLE* actual;
    NodoLE* siguiente;

    do {
        cambio = false;
        actual = primero;

        while (actual->getSig() != nullptr) {
            siguiente = actual->getSig();

            if (actual->getX() < siguiente->getX()) {
                int temp = actual->getX();
                actual->setX(siguiente->getX());
                siguiente->setX(temp);
                cambio = true;
            }

            actual = actual->getSig();
        }
    } while (cambio);

}
