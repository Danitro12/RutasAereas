#include "Ruta.h"
#include <map>

#ifndef UNTITLED2_ALMACEN_H
#define UNTITLED2_ALMACEN_H



class Almacen{
private:
    map<string,Ruta> rutas;

public:
    Almacen();
    void add(const Ruta &ruta);
    bool find(const Ruta &ruta);
    Ruta get(const string &a);
    int size()const{return rutas.size();}
    class iterator{
    private:
        map<string, Ruta>::iterator p;
    public:
        iterator() = default;
        iterator &operator=(const iterator it){
            p = it.p;
            return *this;
        }
        bool operator==(const iterator it){
            return p == it.p;
        }
        bool operator!=(const iterator it){
            return p != it.p;
        }
        iterator &operator++(){
            ++p;
            return *this;
        }
        iterator &operator--(){
            --p;
            return *this;
        }
        const pair<string,Ruta> &operator*()const{
            return *p;
        }
        friend class Almacen;
        friend class const_iterator;
    };

    class const_iterator{
    private:
        map<string,Ruta>::const_iterator p;
    public:
        const_iterator() = default;
        const_iterator &operator=(const const_iterator it){
            p = it.p;
            return *this;
        }
        const_iterator &operator++(){
            ++p;
            return *this;
        }
        const_iterator &operator--(){
            --p;
            return *this;
        }
        bool operator==(const const_iterator it){
            return p == it.p;
        };
        bool operator!=(const const_iterator it){
            return p != it.p;
        }
        const pair<string,Ruta> &operator*()const{
            return *p;
        }

        friend class Almacen;
    };
    iterator begin(){
        iterator it;
        it.p = rutas.begin();
        return it;
    }
    iterator end(){
        iterator it;
        it.p = rutas.end();
        return it;
    }
    const_iterator begin()const{
        const_iterator it;
        it.p = rutas.begin();
        return it;
    }
    const_iterator end()const{
        const_iterator it;
        it.p = rutas.end();
        return it;
    }



};
ostream &operator<<(ostream &os, const Almacen &R);
istream &operator>>(istream &is, Almacen &R);
#endif //UNTITLED2_ALMACEN_H
