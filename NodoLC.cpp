//
// Created by Oscar on 19/1/2026.
//

#include "NodoLC.h"

NodoLC::NodoLC() {
    ch=' ';
    sig=nullptr;
}

NodoLC::NodoLC(char c,NodoLC*s) {
    ch=c;
    sig=s;
}

NodoLC::~NodoLC() {
    //
}

char NodoLC::getCh() {return ch;}

void NodoLC::setCh(char ch) {ch=ch;}

NodoLC * NodoLC::getSig() {return sig;}

void NodoLC::setSig(NodoLC *s) {sig=s;}
