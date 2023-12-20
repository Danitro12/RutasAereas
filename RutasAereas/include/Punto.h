 /**
  * @file Punto.h
  * @brief Fichero cabecera de la clase Punto
  *
  *
  */

#ifndef _PUNTO_H_
#define _PUNTO_H_


#include <fstream>
 using namespace std;

class Punto{
	private:
	double x, y;
	
	public:
	Punto();
	Punto(double x, double y, const string &d);
	double GetX()const{return x;};
	double GetY()const{return y;};
	void SetX(double x){this->x = x;};
	void SetY(double y){this->x = y;};
	bool operator==(const Punto &P)const;
};

ostream &operator<<(ostream &os, const Punto &p);
istream &operator>>(istream &is, Punto &p);

#endif

