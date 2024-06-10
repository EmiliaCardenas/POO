#ifndef CUENTAFINAL_H
#define CUENTAFINAL_H
#include<iostream>
#include<stdlib.h>
#include "Cliente.h"
#include "Orden.h"
using namespace std;

class Cuentafinal{
  private:
    Cliente * cliente[50];
    Envioinfo * envio[50];
    int no;

  public:
    Cuentafinal(): no(0){};

    void registros_clientes();
    void registro_envio();
    void ver_registros();
    void ver_envios();
    void ver_registros(string clase);
    void ver_envios(string metodo);
};

void Cuentafinal::registros_clientes(){
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

void Cuentafinal::registro_envio(){
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

void Cuentafinal::ver_registros(){
  for (int i = 0; i < no; i++){
    cliente[i]->info_productos();
  }
}

void Cuentafinal::ver_registros(string clase){
  for (int i = 0; i < no; i++){
    if (cliente[i] -> getClase() == clase){
      cliente[i]->info_productos();
    }
  }
}

void Cuentafinal::ver_envios(){
  for (int i = 0; i < no; i++){
    envio[i]->anadir_envio();
  }
}

void Cuentafinal::ver_envios(string metodo){
  for (int i = 0; i < no; i++){
    if (envio[i] -> getMetodo() == metodo){
      envio[i]->anadir_envio();
    }
  }
}


#endif
