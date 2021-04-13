
#include "../include/Punto.h"


double Punto::getX() const {
    return x;
}

// _____________________________________________________________________________

double Punto::getY() const {
    return y;
}

// _____________________________________________________________________________

void Punto::setX(double coordenadaX) {
    x = coordenadaX;
}

// _____________________________________________________________________________

void Punto::setY(double coordenadaY) {
    y = coordenadaY;
}

// _____________________________________________________________________________

ostream &operator<<(ostream &os, const Punto &pt) {
    // (x,y)

    os << "(" << pt.x << "," << pt.y << ")";
    return os;
}

// _____________________________________________________________________________

istream &operator>>(istream &is, Punto &pt) {
    char p, p1, c;
    double lat, lon;
    is >> p >> lat >> c >> lon >> p1;

    pt.setX(lat);
    pt.setY(lon);
    return is;
}

// _____________________________________________________________________________

bool Punto::operator==(const Punto otro) const {
    return (x == otro.getX() && y == otro.getY());
}
