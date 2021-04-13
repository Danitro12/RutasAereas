/**
 * @file Ruta.h
 * @authors Antonio Luzón Ventura y Emilio Román Núñez Hurtado
 */

#ifndef PROYECTOFINAL_RUTA_H
#define PROYECTOFINAL_RUTA_H


#include <utility>
#include <vector>
#include <ostream>
#include <cstring>
#include "../include/Punto.h"

using namespace std;

class Ruta {
private:
    vector<Punto> puntos;
    string codigo;


public:

    /**
     * @brief Constructor
     *
     * @param Cadena
     */
    explicit Ruta(string c="") : codigo(std::move(c)) {}

    /**
     * @brief Constructor
     *
     * @param Vector de puntos
     */
    explicit Ruta(vector<Punto> p) : puntos(std::move(p)) {}


    /**
     * @brief Consulta código
     *
     * @return Código
     */
    string getCodigo() const;

    /**
     * @brief Introducir puntos
     *
     * @param Punto a introducir
     */
    void introducir(const Punto &p);

    /**
    * @brief Consulta número de puntos
    *
    * @return Número de puntos
    */
    int getNumPuntos() const;

    /**
     * @brief Modifica el código
     *
     * @param Código
     */
    void setCodigo(string c);

    /**
     * @brief Comprueba que contiene un punto
     *
     * @param Punto
     * @return true si contiene el punto y false si no lo contiene
     */
    bool tienePunto(Punto &pt);

    /**
    * @brief Operador de entrada de datos
    *
    * @param os
    * @param Ruta
    * @return Referencia ostream
    */
    friend ostream &operator<<(ostream &os, const Ruta &R);

    /**
     * @brief Operador de salida de datos
     *
     * @param is
     * @param Ruta
     * @return Referencia istream
     */
    friend istream &operator>>(istream &is, Ruta &R);



};


#endif //PROYECTOFINAL_RUTA_H
