//
// Created by Oscar on 20/1/2026.
//

#include "ListaCola.h"

ListaCola::ListaCola() {
    primero = nullptr;
    actual=nullptr;
}

ListaCola::~ListaCola() {
    while (!estaVacia()) {
        desencolar();
    }
}

//agrega elemento (al final)
void ListaCola::encolar(int valor) {
    if (estaVacia()) {
        primero = new NodoLE(valor, nullptr);
    } else {
        NodoLE* actual = primero;
        while (actual->getSig() != nullptr) {
            actual = actual->getSig();
        }
        actual->setSig(new NodoLE(valor, nullptr));
    }
}

//elimina y retorna el primer elemento
int ListaCola::desencolar() {
    if (estaVacia()) {return 0;}

    int result = primero->getX();
    NodoLE* temp = primero;

    primero=primero->getSig();
    delete temp;

    return result;

}

//retorna el primer elemento sin eliminarlo
int ListaCola::frente() {
    if (estaVacia())
        return 0;

    return primero->getX();
}

//verifica si está vacía
bool ListaCola::estaVacia() {
    return primero==nullptr;
}

//retorna el tamaño
int ListaCola::tamanno() {
    actual=primero;
    int cant=0;
    while (actual!=nullptr) {
        cant++;
        actual=actual->getSig();
    }
    return cant;
}

string ListaCola::toString() {
    if (estaVacia()) return "";

    stringstream ss;
    actual=primero;
    while (actual!=nullptr) {
        ss<<actual->getX()<<endl;
        actual =actual->getSig();
    }
    return ss.str();
}
