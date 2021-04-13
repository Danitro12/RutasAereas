//
// Created by Emilio on 07/01/2021.
//

#ifndef PROYECTOFINAL_PUNTO_H
#define PROYECTOFINAL_PUNTO_H

#include <iostream>

using namespace std;


class Punto {

private:
    double x, y;

public:


    /**
     * @brief Constructor por defecto
     * @param x
     * @param y
     */
    explicit Punto(double x = 0, double y = 0) : x(x), y(y) {}

    /**
     * @brief Consulta el valor de la coordenada X
     * @return x
     */
    [[nodiscard]] double getX() const;

    /**
     * @brief Consulta el valor de la coordenada Y
     * @return y
     */
    [[nodiscard]] double getY() const;

    /**
     * @brief Modifica el valor de la coordenada X
     * @param coordenadaX
     */
    void setX(double coordenadaX);

    /**
     * @brief Modifica el valor de la coordenada Y
     * @param coordenadaY
     */
    void setY(double coordenadaY);

    /**
     * @brief Operador de salida de datos
     * @param os
     * @param pt
     * @return Referencia a ostream
     */
    friend ostream &operator<<(ostream &os, const Punto &pt);

    /**
     * @brief Operador de entrada de datos
     * @param is
     * @param pt
     * @return Referencia a istream
     */
    friend istream &operator>>(istream &is, Punto &pt);

    /**
     * @brief Operador de comparación
     * @param otro
     * @return Verdadero o Falso
     */
    bool operator==(const Punto otro) const;



};


#endif //PROYECTOFINAL_PUNTO_H
