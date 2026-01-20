//
// Created by Oscar on 20/1/2026.
//

#include "NodoLR.h"

NodoLR::NodoLR() {
    x=0;
    sig=nullptr;
}

NodoLR::NodoLR(double y, NodoLR *s) {
    x=y;
    sig=s;
}

NodoLR::~NodoLR() {
    //
}

double NodoLR::getX() {return x;}

void NodoLR::setX(double y) {x=y;}

NodoLR * NodoLR::getSig() {return sig;}

void NodoLR::setSig(NodoLR *s) {sig=s;}
