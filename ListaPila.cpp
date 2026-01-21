//
// Created by Oscar on 20/1/2026.
//

#include "ListaPila.h"

#include "NodoLR.h"

ListaPila::ListaPila() {
    primero = nullptr;
    actual=nullptr;
}

ListaPila::~ListaPila() {
    while (!estaVacia()) {
        pop();
    }
}

//agrega elemento (al inicio)
void ListaPila::push(int valor) {
    NodoLE* nodo = new NodoLE(valor,primero);
    primero = nodo;
}

//elimina y retorna el último elemento agregado
int ListaPila::pop() {
    if (estaVacia()) {return 0;}

    int result = primero->getX();
    NodoLE* temp = primero;

    primero=primero->getSig();
    delete temp;

    return result;
}

//retorna el último elemento sin eliminarlo
int ListaPila::top() {
    if (estaVacia()) {
        return 0;
    }
    actual=primero;
    while (actual->getSig()==nullptr) {
        actual=actual->getSig();
    }
    int result=actual->getX();
    return result;
}

bool ListaPila::estaVacia() {
    return primero==nullptr;
}

int ListaPila::tamanno() {
    actual=primero;
    int cant=0;
    while (actual!=nullptr) {
        cant++;
        actual=actual->getSig();
    }
    return cant;
}

string ListaPila::toString() {
    if (estaVacia()) return "";

    stringstream ss;
    actual=primero;
    while (actual!=nullptr) {
        ss<<actual->getX()<<endl;
        actual =actual->getSig();
    }
    return ss.str();
}