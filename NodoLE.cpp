//
// Created by ESCINF on 19/01/2026.
//

#include "NodoLE.h"

NodoLE::NodoLE() {
    x=0;
    sig=nullptr;
}

NodoLE::NodoLE(int x,NodoLE*s) {
    this->x=x;
    sig=s;
}

NodoLE::~NodoLE() {
    //
}

int NodoLE::getX() {return x;}

NodoLE * NodoLE::getSig() {return sig;}

void NodoLE::setSig(NodoLE *sig) {this->sig=sig;}
