/**
 * @file Almacen.h
 * @authors Antonio Luzón Ventura y Emilio Román Núñez Hurtado
 */

#ifndef PROYECTOFINAL_ALMACEN_H
#define PROYECTOFINAL_ALMACEN_H

#include <utility>
#include <vector>
#include "Ruta.h"

using namespace std;

class Almacen {
private:
    vector<Ruta> rutas;

public:

    /**
     * @brief Constructor por defecto
     */
    Almacen() = default;

    /**
     * @brief Constructor
     * @param vrutas
     */
    explicit Almacen(vector<Ruta> vrutas) : rutas(std::move(vrutas)) {}

    /**
     * @brief Constructor de copia
     * @param A
     */
    Almacen(Almacen &A);

    /**
     *
     * @param r
     */
    void introducir(const Ruta &r);

    /**
     * @brief Operador de salida de datos
     * @param os
     * @param A
     * @return
     */
    friend ostream &operator<<(ostream &os, const Almacen &A);

    /**
     * @brief Operador de salida de datos
     * @param is
     * @param A
     * @return
     */
    friend istream &operator>>(istream &is, Almacen &A);


    /**
     * @brief Comprueba si la ruta dada como parámetro se encuentra en el almacén de rutas
     * @param R ruta a buscar en el almacén
     * @return Verdadero o falso
     */
    bool contieneRuta(const Ruta &R);

};


#endif //PROYECTOFINAL_ALMACEN_H
