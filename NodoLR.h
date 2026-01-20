//
// Created by Oscar on 20/1/2026.
//

#ifndef EJERCICIOSLISTAS_NODOLR_H
#define EJERCICIOSLISTAS_NODOLR_H


class NodoLR {
private:
    double x;
    NodoLR *sig;
public:
    NodoLR();
    NodoLR(double y,NodoLR*s);
    ~NodoLR();
    double getX();
    void setX(double y);
    NodoLR *getSig();
    void setSig(NodoLR *s);
};


#endif //EJERCICIOSLISTAS_NODOLR_H