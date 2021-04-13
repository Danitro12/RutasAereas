cmake_minimum_required(VERSION 3.15)
project(ProyectoFinal)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProyectoFinal ../src/Ruta.cpp ../include/Ruta.h ../include/Almacen.h ../src/Almacen.cpp ../include/Punto.h ../src/Punto.cpp
        ../include/ImagenES.h ../include/Imagen.h ../src/Imagen.cpp ../src/ImagenES.cpp ../src/prueba.cpp
        ../include/Pais.h ../include/Paises.h)