//
// Created by Oscar on 19/1/2026.
//

#ifndef EJERCICIOSLISTAS_NODOLC_H
#define EJERCICIOSLISTAS_NODOLC_H


class NodoLC {
private:
    NodoLC* sig;
    char ch;
public:
    NodoLC();
    NodoLC(char ch,NodoLC*s);
    ~NodoLC();
    char getCh();
    void setCh(char c);
    NodoLC* getSig();
    void setSig(NodoLC* s);
};

#endif //EJERCICIOSLISTAS_NODOLC_H
