cmake_minimum_required(VERSION 4.1)
project(EjerciciosListas)

set(CMAKE_CXX_STANDARD 20)

add_executable(EjerciciosListas main.cpp
        ListaEnteros.cpp
        ListaEnteros.h
        NodoLE.cpp
        NodoLE.h
        ListaBusqueda.cpp
        ListaBusqueda.h
        NodoLC.cpp
        NodoLC.h
        ListaCaracteres.cpp
        ListaCaracteres.h
        NodoLR.cpp
        NodoLR.h
        ListaReales.cpp
        ListaReales.h)
