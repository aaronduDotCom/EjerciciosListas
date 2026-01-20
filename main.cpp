#include <iostream>

#include "ListaEnteros.h"
#include "ListaBusqueda.h"
#include "ListaCaracteres.h"

using namespace std;

int main() {
    int opcion=-1;
    while (opcion!=0) {{cout<<"Elije del 1 al 40 para ver el ejerciciorespectivo\n";cin>>opcion;}
        switch (opcion) {
            //Primeros 5
            {
                case 1: {
                    ListaEnteros lista;

                    cout<<"Ejercicio 1"<<"\n\n";

                    cout<<"Primer prueba nada"<<"\n\n";
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Segunda prueba agregamos unos nodos (inicio y final)"<<"\n\n";
                    lista.agregarInicio(1);
                    lista.agregarInicio(2);
                    lista.agregarFinal(3);
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Tercer prueba eliminar nodos (inicio y final)"<<"\n\n";
                    lista.eliminarInicio();
                    lista.eliminarFinal();
                    cout<<lista.toString()<<"\n\n";
                }break;
                case 2: {
                    ListaEnteros lista;

                    cout<<"Ejercicio 2"<<"\n\n";

                    cout<<"Primer prueba nada"<<"\n\n";
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Segunda prueba agregamos unos nodos (inicio y final)"<<"\n\n";
                    lista.agregarInicio(1);
                    lista.agregarInicio(2);
                    lista.agregarFinal(3);
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Tercer prueba obtener primero"<<"\n";
                    cout<<lista.obtenerPrimero()<<"\n\n";

                    cout<<"Cuarta prueba obtener ultimo"<<"\n";
                    cout<<lista.obtenerUltimo()<<"\n\n";

                    cout<<"Quinta prueba suma de todos"<<"\n";
                    cout<<lista.sumarElementos()<<"\n\n";

                    cout<<"Sexta prueba promedio"<<"\n";
                    cout<<lista.promedio()<<"\n\n";

                    cout<<"Septima prueba maximo"<<"\n";
                    cout<<lista.encontrarMaximo()<<"\n\n";

                    cout<<"Octava prueba minimo"<<"\n";
                    cout<<lista.encontrarMinimo()<<"\n\n";
                }break;
                case 3: {
                    ListaBusqueda lista;

                    cout<<"Ejercicio 1"<<"\n\n";

                    cout<<"Primer prueba nada"<<"\n\n";
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Segunda prueba agregamos unos nodos (inicio y final)"<<"\n\n";
                    lista.agregarInicio(1);
                    lista.agregarInicio(2);
                    lista.agregarInicio(3);
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Tercer prueba buscar (bool)"<<"\n";
                    cout<<lista.buscar(3)<<"\n\n";

                    cout<<"Cuarta prueba contar apariciones"<<"\n";
                    cout<<lista.contarApariciones(3)<<"\n\n";

                    cout<<"Quinta prueba obtener posicion"<<"\n";
                    cout<<lista.obtenerPosicion(3)<<"\n\n";

                    cout<<"Sexta prueba eliminar por valor"<<"\n";
                    cout<<lista.eliminarPorValor(3)<<"\n\n";

                    cout<<"Septima prueba eliminar todos de un valor"<<"\n";
                    cout<<lista.eliminarTodasOcurrencias(3)<<"\n\n";

                }break;
                case 4: {
                    ListaBusqueda lista;

                    cout<<"Ejercicio 1"<<"\n\n";

                    cout<<"Primer prueba nada"<<"\n\n";
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Segunda prueba agregamos unos nodos (inicio y final)"<<"\n\n";
                    lista.agregarInicio(1);
                    lista.agregarInicio(2);
                    lista.agregarInicio(3);
                    cout<<lista.toString()<<"\n\n";
                }break;
                case 5:{}
            }
            //6-10
        }
    }
}