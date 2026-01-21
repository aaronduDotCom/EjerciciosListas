#include <iostream>

#include "ListaEnteros.h"
#include "ListaBusqueda.h"
#include "ListaCaracteres.h"
#include "ListaReales.h"
#include "ListaPila.h"
#include "ListaCola.h"
#include "ListaDuplicados.h"
#include "ListaOrdenada.h"

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

                    cout<<"Ejercicio 3"<<"\n\n";

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
                    ListaCaracteres lista;

                    cout<<"Ejercicio 4"<<"\n\n";

                    cout<<"Primer prueba nada"<<"\n\n";
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Segunda prueba agregamos unos nodos (inicio y final)"<<"\n\n";
                    lista.agregarInicio('a');
                    lista.agregarInicio('2');
                    lista.agregarInicio('a');
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Tercer prueba contar x caracteres"<<"\n";
                    cout<<lista.contarCaracter('a')<<"\n\n";

                    cout<<"Cuarta prueba saber si es un palindromo"<<"\n";
                    cout<<lista.esPalindromo()<<"\n\n";

                    cout<<"Quinta prueba obtener la lista como cadena"<<"\n";
                    cout<<lista.obtenerCadena()<<"\n\n";

                    cout<<"Sexta prueba invertir la lista"<<"\n";
                    lista.invertir();
                    cout<<lista.toString()<<"\n\n";

                }break;
                case 5: {
                    ListaReales lista;

                    cout<<"Ejercicio 5"<<"\n\n";

                    cout<<"Primer prueba nada"<<"\n\n";
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Segunda prueba agregamos unos nodos (inicio y final)"<<"\n\n";
                    lista.agregarInicio(127.3);
                    lista.agregarInicio(4/3);
                    lista.agregarInicio(0.1234);
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Tercer prueba suma"<<"\n";
                    cout<<lista.suma()<<"\n\n";

                    cout<<"Cuarta prueba promedio"<<"\n";
                    cout<<lista.promedio()<<"\n\n";

                    cout<<"Quinta prueba produco"<<"\n";
                    cout<<lista.producto()<<"\n\n";

                    cout<<"Sexta prueba cantidad de positivos"<<"\n";
                    cout<<lista.contarPositivos()<<"\n\n";

                    cout<<"Septima prueba cantidad de negativos"<<"\n";
                    cout<<lista.contarNegativos()<<"\n\n";

                    cout<<"Octava prueba mayor"<<"\n";
                    cout<<lista.encontrarMayor()<<"\n\n";

                    cout<<"Novena prueba menor"<<"\n";
                    cout<<lista.encontrarMenor()<<"\n\n";
                }break;
            }
            //6-10
            {
                case 6: {
                    ListaPila lista;

                    cout<<"Ejercicio 6 LIFO mete al inicio y saca al inicio"<<"\n\n";

                    cout<<"Primer prueba nada"<<"\n\n";
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Segunda prueba agregamos unos nodos (inicio)"<<"\n\n";
                    lista.push(127);
                    lista.push(4);
                    lista.push(0);
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Tercer prueba pop"<<"\n";
                    cout<<lista.pop()<<"\n\n";
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Cuarta prueba top"<<"\n";
                    cout<<lista.top()<<"\n\n";

                    cout<<"Quinta prueba saber si esta vacia"<<"\n";
                    cout<<lista.estaVacia()<<"\n\n";

                    cout<<"Sexta prueba saber el tamanno"<<"\n";
                    cout<<lista.tamanno()<<"\n\n";

                }break;
                case 7: {
                    ListaCola lista;

                    cout<<"Ejercicio 7 FIFO mete al final y saca al final"<<"\n\n";

                    cout<<"Primer prueba nada"<<"\n\n";
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Segunda prueba agregamos unos nodos (final)"<<"\n\n";
                    lista.encolar(127);
                    lista.encolar(4);
                    lista.encolar(0);
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Tercer prueba desencolar"<<"\n";
                    cout<<lista.desencolar()<<"\n\n";
                    //cout<<lista.toString()<<"\n\n";

                    cout<<"Cuarta prueba frente"<<"\n";
                    cout<<lista.frente()<<"\n\n";

                    cout<<"Quinta prueba saber si esta vacia"<<"\n";
                    cout<<lista.estaVacia()<<"\n\n";

                    cout<<"Sexta prueba saber el tamanno"<<"\n";
                    cout<<lista.tamanno()<<"\n\n";
                }break;
                case 8: {
                    ListaDuplicados lista;

                    cout<<"Ejercicio 8"<<"\n\n";

                    cout<<"Primer prueba nada"<<"\n\n";
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Segunda prueba agregamos unos nodos"<<"\n\n";
                    lista.agregarInicio(0);
                    lista.agregarInicio(4);
                    lista.agregarInicio(0);
                    lista.agregarInicio(13);
                    lista.agregarInicio(88);
                    lista.agregarInicio(0);
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Tercer prueba saber si hay duplicados"<<"\n";
                    cout<<lista.tieneDuplicados()<<"\n\n";

                    cout<<"Cuarta prueba eliminar los duplicados"<<"\n";
                    lista.eliminarDuplicados();
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Quinta prueba contar los unicos"<<"\n";
                    cout<<lista.contarUnicos()<<"\n\n";

                    cout<<"Sexta prueba obtener los unicos (nueva lista)"<<"\n";
                    cout<<lista.obtenerUnicos()->toString()<<"\n\n";

                }break;
                case 9: {
                    ListaOrdenada lista;

                    cout<<"Ejercicio 9 Esta la hice casi toda con chat para irla arreglando y aprendiendo"<<"\n\n";

                    cout<<"Primer prueba nada"<<"\n\n";
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Segunda prueba agregamos unos nodos manteniendo el oreden ascendente y descendente"<<"\n\n";
                    lista.insertarOrdenado(0);
                    lista.insertarOrdenado(4);
                    lista.insertarOrdenado(0);
                    lista.insertarOrdenadoDesc(13);
                    lista.insertarOrdenadoDesc(88);
                    lista.insertarOrdenadoDesc(0);
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Quinta prueba saber si esta ordenada ambos sentidos"<<"\n";
                    cout<<lista.estaOrdenada()<<"\n\n";

                    cout<<"Sexta prueba ordenarla de forma ascendete"<<"\n";
                    lista.ordenar();
                    cout<<lista.toString()<<"\n\n";

                    cout<<"Septima prueba ordenarla de forma descendete"<<"\n";
                    lista.ordenarDesc();
                    cout<<lista.toString()<<"\n\n";
                }break;
                case 10:{}break;
            }
        }
    }
}