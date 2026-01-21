//
// Created by Oscar on 20/1/2026.
//

#include "ListaDuplicados.h"

ListaDuplicados::ListaDuplicados() {
    primero=nullptr;
}

ListaDuplicados::~ListaDuplicados() {
    while (!vacia())
        eliminarInicio();
}

bool ListaDuplicados::vacia() {
    return primero==nullptr;
}

void ListaDuplicados::agregarInicio(int valor) {
    NodoLE*nuevo = new NodoLE(valor,primero);
    primero=nuevo;
}

bool ListaDuplicados::eliminarInicio() {
    if (vacia()) return false;

    NodoLE* nuevo =primero;
    primero=primero->getSig();
    delete nuevo;

    return true;
}

string ListaDuplicados::toString() {
    stringstream ss;
    NodoLE* actual = primero;

    while (actual != nullptr) {
        ss << actual->getX() << endl;
        actual = actual->getSig();
    }

    return ss.str();
}

bool ListaDuplicados::tieneDuplicados() {
    NodoLE* actual1=primero;

    while (actual1!=nullptr) {

        NodoLE* actual2=actual1->getSig();

        while (actual2!=nullptr) {

            if (actual1->getX()==actual2->getX())
                return true;

            actual2=actual2->getSig();
        }
        actual1=actual1->getSig();
    }
    return false;
}

void ListaDuplicados::eliminarDuplicados() {
    NodoLE* actual1=primero;

    while (actual1!=nullptr) {

        NodoLE* prev=actual1;
        NodoLE* actual2=actual1->getSig();

        while (actual2!=nullptr) {

            if (actual1->getX()==actual2->getX()) {
                prev->setSig(actual2->getSig());
                delete actual2;
                actual2=prev->getSig();
            } else {
                prev=actual2;
                actual2=actual2->getSig();
            }
        }
        actual1=actual1->getSig();
    }
}

int ListaDuplicados::contarUnicos() {
    if (vacia()) return 0;

    int cant=0;
    NodoLE* actual1=primero;

    while (actual1!=nullptr) {

        bool unico=true;
        NodoLE* actual2=actual1->getSig();

        while (actual2!=nullptr) {

            if (actual1->getX()==actual2->getX()) {
                unico=false;
                break;
            }

            actual2=actual2->getSig();
        }
        if (unico)
            cant++;

        actual1=actual1->getSig();
    }
    return cant;
}

ListaDuplicados * ListaDuplicados::obtenerUnicos() {
    if (vacia()) return 0;

    ListaDuplicados* nuevaLista = new ListaDuplicados();
    NodoLE* actual1=primero;

    while (actual1!=nullptr) {

        bool unico=true;
        NodoLE* actual2=actual1->getSig();

        while (actual2!=nullptr) {

            if (actual1!=actual2 && actual1->getX()==actual2->getX()) {
                unico=false;
                break;
            }

            actual2=actual2->getSig();
        }
        if (unico)
            nuevaLista->agregarInicio(actual1->getX());

        actual1=actual1->getSig();
    }
    return nuevaLista;


}