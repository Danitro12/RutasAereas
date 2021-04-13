#ifndef PFINAL_PAIS_H
#define PFINAL_PAIS_H


#include "Punto.h"
#include <cstring>

class Pais {
private:
    Punto p;
    string pais;
    string bandera;

public:
    Pais() = default;

    Punto GetPunto() const { return p; }

    string GetPais() const { return pais; }

    string GetBandera() const { return bandera; }

    bool operator<(const Pais &P) const {
        return pais < P.pais;
    }

    bool operator==(const Pais &P) const {
        return pais == P.pais;
    }

    bool operator==(const Punto &P) const {
        return p == P;
    }

    friend istream &operator>>(istream &is, Pais &P) {
        double lat, lng;

        is >> lat >> lng >> P.pais >> P.bandera;

        // Modificado
        P.p = Punto(lat, lng);
        // P.p=Punto(lat,lng,"");
        return is;
    }

    friend ostream &operator<<(ostream &os, const Pais &P) {
        os << P.p << " " << P.pais << " " << P.bandera << endl;
        return os;
    }
};


#endif //PFINAL_PAIS_H
