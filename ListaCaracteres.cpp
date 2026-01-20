//
// Created by Oscar on 19/1/2026.
//

#include "ListaCaracteres.h"

ListaCaracteres::ListaCaracteres() {
        primero=nullptr;
        actual=nullptr;
}

ListaCaracteres::~ListaCaracteres() {
        while (vacia()) {
                eliminarInicio();
        }
}

bool ListaCaracteres::vacia() {return primero == nullptr;}

void ListaCaracteres::agregarInicio(char c) {
        NodoLC* nodo = new NodoLC(c,primero);
        primero = nodo;
}

void ListaCaracteres::agregarFinal(char c) {
        if (vacia())
                agregarInicio(c);
        else {
                actual = primero;
                while (actual->getSig() != nullptr) {
                        actual=actual->getSig();
                }
                actual->setSig(new NodoLC(c,nullptr));
        }
}

bool ListaCaracteres::eliminarInicio() {
        if (primero==nullptr) {return false;}

        NodoLC *temp = primero;
        primero=primero->getSig();
        delete temp;

        return true;
}

int ListaCaracteres::contarCaracter(char c) {
        if (vacia())
                return 0;

        actual = primero;
        int cant=0;
        while (actual != nullptr) {
                if (actual->getCh() == c) {
                        cant++;
                }
                actual = actual->getSig();
        }
        return cant;
}

bool ListaCaracteres::esPalindromo() {
        this->invertir();
        const string s = this->obtenerCadena();
        this->invertir();

        if (obtenerCadena()==s) {
                return true;
        }

        return false;
}

string ListaCaracteres::obtenerCadena() {
        stringstream ss;
        actual = primero;
        while (actual != nullptr) {
                ss << actual->getCh();
                actual = actual->getSig();
        }
        return ss.str();
}

void ListaCaracteres::invertir() {
        NodoLC* anterior = nullptr;
        actual = primero;
        NodoLC* siguiente = nullptr;

        while (actual != nullptr) {
                siguiente = actual->getSig(); //guarda el siguiente a desencadenar
                actual->setSig(anterior); //actual se encadena a la nueva lista (en la prmer iteracion al final)
                anterior = actual; //anterior pasa a ser el ultimo encadenado || lista nueva
                actual = siguiente; //actual pasa a ser el proximo en desencadenar || lista vieja

                //iteracion 1 A → nullptr    B → C → nullptr
                //iteracion 2 B → A → nullptr    C → nullptr
                //iteracion 3 C → B → A → nullptr
        }
        primero = anterior;
}

string ListaCaracteres::toString() {
        stringstream ss;
        actual = primero;

        while (actual != nullptr) {
                ss << actual->getCh() << endl;
                actual = actual->getSig();
        }

        return ss.str();
}