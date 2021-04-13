#include <iostream>
#include "../include/Punto.h"
#include "../include/Ruta.h"
#include "../include/Almacen.h"

using namespace std;

int main() {
    cout << "<---------- Punto -------->" << endl;
    Punto p(2, 4), p2(5, 6);
    Punto p3(0, 2), p4(8, 1);

    cout << p << endl;
    cout << p2 << endl;


    cout << endl << "<---------- Ruta -------->" << endl;

    Ruta r("R1");
    r.introducir(p);
    r.introducir(p2);

    Ruta r2("R2");
    r2.introducir(p3);
    r2.introducir(p4);

    cout << r << endl;
    cout << r2 << endl;

    cout << endl << "<---------- Almacen -------->" << endl;
    Almacen a;
    a.introducir(r);
    a.introducir(r2);
    cout << a;


    return 0;
}
