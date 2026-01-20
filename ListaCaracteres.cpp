//
// Created by Oscar on 19/1/2026.
//

#include "ListaCaracteres.h"

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
                while (actual != nullptr) {
                        actual=actual->getSig();
                }
                actual->setSig(new NodoLC(c,nullptr));
        }
}

int ListaCaracteres::contarCaracter(char c) {

}

bool ListaCaracteres::esPalindromo() {
}

string ListaCaracteres::obtenerCadena() {
}

void ListaCaracteres::invertir() {
}

string ListaCaracteres::toString() {
        stringstream ss;
        NodoLC* actual = primero;

        while (actual != nullptr) {
                ss << actual->getCh() << endl;
                actual = actual->getSig();
        }

        return ss.str();
}