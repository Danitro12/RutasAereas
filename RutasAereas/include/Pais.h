#include "Punto.h"
#include <string>
#include <cstring>
class Pais{
  private:
    Punto p;
    string pais;
    string bandera;
    
  public:
    Pais();
    Punto GetPunto()const;
    string GetPais()const;
    string GetBandera()const;
    void SetPunto(Punto p);
    void SetBandera(const string &bd){this->bandera = bd;}
    void SetPais(const string &ps){this->pais = ps;}
    
    bool operator<(const Pais &P)const;
    bool operator==(const Pais &P)const;
    bool operator==(const Punto &P)const;

};
istream & operator>>(istream & is, Pais & P);
ostream & operator<<(ostream & os, const Pais &P);
