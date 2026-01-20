//
// Created by ESCINF on 19/01/2026.
//

#include "NodoLE.h"

NodoLE::NodoLE() {
    x=0;
    sig=nullptr;
}

NodoLE::NodoLE(int y,NodoLE*s) {
    x=y;
    sig=s;
}

NodoLE::~NodoLE() {
    //No le toca al nodo
}

int NodoLE::getX() {return x;}

NodoLE * NodoLE::getSig() {return sig;}

void NodoLE::setSig(NodoLE *s) {sig=s;}
