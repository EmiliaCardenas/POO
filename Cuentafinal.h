/*
Proyecto Tienda de anime y kpop
Emilia Cárdenas Lobatón
A01706807
13/06/2024

Esta clase define los objetos de las clases hijas de Cliente y Orden
incluyendo sus metodos
es para crea obejtos de Anime, Kpop y Envioinfo
*/

#ifndef CUENTAFINAL_H
#define CUENTAFINAL_H
#include<iostream>
#include<stdlib.h>
#include "Cliente.h"
#include "Orden.h"
using namespace std;

class Cuentafinal{
  private: // atributos y variables privadas
    Cliente * cliente[50]; // apuntador para polimorfismo
    Envioinfo * envio[50]; // apuntador para polimorfismo
    int no;

  public:
    Cuentafinal(): no(0){}; // constructor default

    // metodos
    void registros_clientes();
    void registro_envio();
    void ver_registros();
    void ver_envios();
    void ver_registros(string clase);
    void ver_envios(string metodo);
    void agrega_kpop(string _nombre, string _id, string _pais, string _objeto, string _clase, int _precio, int _cantidad);
    void agrega_anime(string _nombre, string _id, string _pais, string _objeto, string _clase, int _precio, int _cantidad);
};

/*
registros_clientes genera objetos de tipo Cliente[]

genera objetos de prueba de Anime y Kpop
los guarda en la variable cliente[] (arreglo de clientes)
son unicamente datos falsos y demostrativos

@param
@return
*/
void Cuentafinal::registros_clientes(){
  // uso de new para crear objetos con polimorfismo
  cliente [no] = new Anime ("Emilia", "A01706807", "Mexico", "Manga Banana Fish", "Anime", 150, 10);
  no++;
  cliente[no] = new Kpop("Victoria", "A01708200", "Japon", "BTS Album", "Kpop", 500, 30);
  no++;
  cliente [no] = new Anime ("Ash", "A01705849", "Colombia", "Figura de Zoro", "Anime", 4500, 1);
  no++;
  cliente[no] = new Kpop("Sofia", "A01701475", "Corea", "Lightstick Enhypen", "Kpop", 1500, 2);
  no++;
  cliente[no] = new Kpop("Emilia", "A01706807", "Mexico", "Pcs Han Jisung", "Kpop", 120, 298);
  no++;
  cliente [no] = new Anime ("Zoe", "A01706734", "China", "Peluche Pochita", "Anime", 350, 3);
  no++;
}

/*
registros_envio genera objetos de tipo Envioinfo[]

genera objetos de prueba de Envioinfo
los guarda en la variable envio[] (arreglo de envios)
son unicamente datos falsos y demostrativos

@param
@return
*/
void Cuentafinal::registro_envio(){
  // uso de new para crear objetos con polimorfismo
  envio [no] = new Envioinfo (657493598,4,6,2023,37,20,"aereo");
  no++;
  envio [no] = new Envioinfo (629748156,5,7,2024,43,10,"terrestre");
  no++;
  envio [no] = new Envioinfo (318165488,6,8,2026,12,9,"marino");
  no++;
  envio [no] = new Envioinfo (218432184,7,9,2027,6,18,"aereo");
  no++;
  envio [no] = new Envioinfo (348914896,8,10,2028,24,3,"marino");
  no++;
}

/*
ver_registros imprime los clientes

utilizando el arreglo cliente[] y no, recorre todo el arreglo
e imprime cada uno utilizando el metodo info_productos

@param
@return
*/
void Cuentafinal::ver_registros(){
  for (int i = 0; i < no; i++){
    cliente[i]->info_productos();
  }
}

/*
ver_registros imprime los clientes coincidiendo en la clase

utilizando el arreglo cliente[] y no, recorre todo el arreglo
e imprime cada uno utilizando el metodo info_productos
string clase ('Anime' o 'Kpop')

@param string clase debe ser: 'Anime' o 'Kpop'
@return
*/
void Cuentafinal::ver_registros(string clase){
  for (int i = 0; i < no; i++){
    if (cliente[i] -> getClase() == clase){
      cliente[i]->info_productos();
    }
  }
}

/*
ver_envios imprime los envios

utilizando el arreglo envio[] y no, recorre todo el arreglo
e imprime cada uno utilizando el metodo anadir_envio

@param
@return
*/
void Cuentafinal::ver_envios(){
  for (int i = 0; i < no; i++){
    envio[i]->anadir_envio();
  }
}

/*
ver_envios imprime los envios coincidiendo en el metodo

utilizando el arreglo envio[] y no, recorre todo el arreglo
e imprime cada uno utilizando el metodo anadir_envio
string metodo ('aereo', 'terrestre' o 'marino')

@param string metodo debe ser: 'aereo', 'terrestre' o 'marino'
@return
*/
void Cuentafinal::ver_envios(string metodo){
  for (int i = 0; i < no; i++){
    if (envio[i] -> getMetodo() == metodo){
      envio[i]->anadir_envio();
    }
  }
}

/*
agrega_kpop agrega un cliente de la clase Kpop

string ('_nombre', '_id', '_pais', '_objeto' o '_clase')
int ('_precio' o '_cantidad')

@param string: '_nombre', '_id', '_pais', '_objeto' o '_clase'
@param int: '_precio' o '_cantidad'
@return
*/
void Cuentafinal::agrega_kpop(string _nombre, string _id, string _pais, string _objeto, string _clase, int _precio, int _cantidad) {
  cliente[no] = new Kpop(_nombre, _id, _pais, _objeto, _clase, _precio, _cantidad);
  no++;
}

/*
agrega_anime agrega un cliente de la clase Anime

string ('_nombre', '_id', '_pais', '_objeto' o '_clase')
int ('_precio' o '_cantidad')

@param string: '_nombre', '_id', '_pais', '_objeto' o '_clase'
@param int: '_precio' o '_cantidad'
@return
*/
void Cuentafinal::agrega_anime(string _nombre, string _id, string _pais, string _objeto, string _clase, int _precio, int _cantidad){
  cliente[no] = new Anime(_nombre, _id, _pais, _objeto, _clase, _precio, _cantidad);
  no++;
}

#endif
