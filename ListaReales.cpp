//
// Created by Oscar on 20/1/2026.
//

#include "ListaReales.h"

ListaReales::ListaReales() {
    primero=nullptr;
    actual=nullptr;
}

ListaReales::~ListaReales() {
    while (!vacia())
        eliminarInicio();
}

bool ListaReales::vacia() {
    return primero==nullptr;
}

void ListaReales::agregarInicio(double n) {
    NodoLR*nodo = new NodoLR(n,primero);
    primero=nodo;
}

void ListaReales::agregarFinal(double n) {
    if (vacia())
        agregarInicio(n);
    else {
        actual=primero;
        while (actual->getSig()!=nullptr) {
            actual=actual->getSig();
        }
        actual->setSig(new NodoLR(n,new NodoLR(n,nullptr)));
    }
}

bool ListaReales::eliminarInicio() {
    if (vacia())
        return false;

    NodoLR*nodo = primero;
    primero = primero->getSig();
    delete nodo;

    return true;
}

string ListaReales::toString() {
    if (vacia()) return "";

    stringstream ss;
    actual=primero;
    while (actual!=nullptr) {
        ss<< actual->getX()<<endl;
        actual=actual->getSig();
    }
    return ss.str();
}

double ListaReales::suma() {
    if (vacia()) return 0;

    double suma=0;
    actual=primero;
    while (actual!=nullptr) {
        suma+=actual->getX();
        actual=actual->getSig();
    }
    return suma;
}

double ListaReales::promedio() {
    if (vacia()) return 0;

    double suma=0;
    int cant=0;
    actual=primero;
    while (actual!=nullptr) {
        cant++;
        suma+=actual->getX();
        actual=actual->getSig();
    }
    return suma/cant;
}

double ListaReales::producto() {
    if (vacia()) return 0;

    double suma=0;
    actual=primero;
    while (actual!=nullptr) {
        suma*=actual->getX();
        actual=actual->getSig();
    }
    return suma;
}

int ListaReales::contarPositivos() {
    if (vacia()) return 0;

    int cant=0;
    actual=primero;
    while (actual!=nullptr) {
        if (actual->getX()>0)
            cant++;

        actual=actual->getSig();
    }
    return cant;
}

int ListaReales::contarNegativos() {
    if (vacia()) return 0;

    int cant=0;
    actual=primero;
    while (actual!=nullptr) {
        if (actual->getX()<0)
            cant++;

        actual=actual->getSig();
    }
    return cant;
}

double ListaReales::encontrarMayor() {
    if (vacia()) return 0;

    double mayor=0;
    actual=primero;
    while (actual!=nullptr) {
        if (actual->getX()>mayor)
            mayor=actual->getX();

        actual=actual->getSig();
    }
    return mayor;
}

double ListaReales::encontrarMenor() {
    if (vacia()) return 0;

    double menor=0;
    actual=primero;
    while (actual!=nullptr) {
        if (actual->getX()<menor)
            menor=actual->getX();

        actual=actual->getSig();
    }
    return menor;
}
