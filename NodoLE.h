//
// Created by ESCINF on 19/01/2026.
//

#ifndef EJERCICIOSLISTAS_NODOLE_H
#define EJERCICIOSLISTAS_NODOLE_H

class NodoLE {
private:
    int x;
    NodoLE *sig;
public:
    NodoLE();
    NodoLE(int y,NodoLE*s);
    ~NodoLE();
    int getX();
    NodoLE *getSig();
    void setSig(NodoLE *s);
};


#endif //EJERCICIOSLISTAS_NODOLE_H