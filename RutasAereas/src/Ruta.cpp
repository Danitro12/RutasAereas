#include "../include/Ruta.h"

using namespace std;


string Ruta::getCodigo() const {
    return codigo;
}

// _____________________________________________________________________________

void Ruta::introducir(const Punto &p) {
    puntos.push_back(p);
}

// _____________________________________________________________________________

int Ruta::getNumPuntos() const {
    return puntos.size();
}

// _____________________________________________________________________________

void Ruta::setCodigo(string c) {
    codigo = std::move(c);
}

// _____________________________________________________________________________

bool Ruta::tienePunto(Punto &pt) {
    bool tiene = false;
    for (auto it = puntos.begin(); it != puntos.end() && !tiene; ++it) {
        if (*it == pt) {
            tiene = true;
        }
    }
    return tiene;
}

// _____________________________________________________________________________

ostream &operator<<(ostream &os, const Ruta &R) {
    // Por ejemplo
    // R1 5 (34.5204,69.2008) (52.5079,13.4261) (7.40665,12.3446) (-0.186596,-
    //78.4305) (40.4005,-3.59165)

    os << R.getCodigo() << ' ' << R.getNumPuntos() << ' ';
    for (auto punto : R.puntos) {
        os << punto << ' ';
    }
    return os;
}

// _____________________________________________________________________________

istream &operator>>(istream &is, Ruta &R) {
    // Por ejemplo
    // R1 5 (34.5204,69.2008) (52.5079,13.4261) (7.40665,12.3446) (-0.186596,-
    //78.4305) (40.4005,-3.59165)

    string c;
    int num;
    Punto pt;

    is >> c >> num;
    R.setCodigo(c);
    for (int i = 0; i < num; i++) {
        is >> pt;
        R.introducir(pt);
    }

    return is;
}