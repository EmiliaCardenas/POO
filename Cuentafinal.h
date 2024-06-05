#ifndef CUENTAFINAL_H
#define CUENTAFINAL_H
#include<iostream>
#include<stdlib.h>
#include "Cliente.h"
#include "Orden.h"
#include "Envioinfo.h"
using namespace std;

class Cuentafinal{
  private:
    Cliente * cliente[20];
    int no;

  public:
    Cuentafinal(): no(0){};

    void registros_clientes();
    void ver_registros();
    void ver_registros(string clase);
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


#endif
