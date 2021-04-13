//
// Created by Emilio on 07/01/2021.
//

#include "../include/Almacen.h"


Almacen::Almacen(Almacen &A) {
    rutas = A.rutas;
}

// _____________________________________________________________________________

void Almacen::introducir(const Ruta &r) {
        rutas.push_back(r);
}

// _____________________________________________________________________________

ostream &operator<<(ostream &os, const Almacen &A) {
    os << "#Rutas" << endl;
    for (const auto &ruta : A.rutas) {
        os << ruta << endl;
    }
    return os;
}

// _____________________________________________________________________________

istream &operator>>(istream &is, Almacen &A) {

    // Ejemplo
    // #Rutas
    // <ruta1>
    // <ruta2>
    //  #Puntos_de_Interes

    string pw;
    is >> pw;

    if (pw == "#Rutas") {
        while (is && is.peek() != '#'){
            Ruta r;
            is >> r;
            A.introducir(r);
        }
    }

    /*

    if (is >> pw && pw == "#Puntos_de_Interes")

    if (input >> cabecera and cabecera == "#Puntos_de_Interes")
        while (input.peek() and input)
            almacen.leeDescripcion(input);

    */

    return is;
}

// _____________________________________________________________________________

bool Almacen::contieneRuta(const Ruta &R) {
    bool tiene = false;
    for (auto it = rutas.begin(); it != rutas.end() && !tiene; ++it) {
        if ((*it).getCodigo() == R.getCodigo()) {
            tiene = true;
        }
    }
    return tiene;
}




