#ifndef ENVIOINFO_H
#define ENVIOINFO_H
#include<iostream>
#include<stdlib.h>
#include "Cliente.h"
#include "Orden.h"
using namespace std;

class Envioinfo : public Orden{
  private:
    string metodo_envio;

  public:
    Envioinfo(): Orden(0,0,0,0,0,0), metodo_envio(""){};
    Envioinfo(int _id, int _dia, int _mes, int _anio, int _min, int _hora, string _metodo): Orden(_id,_dia,_mes,_anio,_min,_hora), metodo_envio(_metodo){};

    void anadir_envio();

    void setMetodo(string _metodo);
    string getMetodo(){return metodo_envio;}
};

void Envioinfo::anadir_envio(){
  Orden::orden_final();
  cout << "Metodo de envio: " << metodo_envio << endl;
}

void Envioinfo::setMetodo(string _metodo){
  metodo_envio = _metodo;
}

#endif
