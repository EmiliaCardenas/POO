#ifndef ORDEN_H
#define ORDEN_H
#include<iostream>
#include<stdlib.h>
#include "Cliente.h"
using namespace std;

class Orden{
  private:
    int id_orden, fecha_dia, fecha_mes, fecha_anio, fecha_min, fecha_hora;

  public:
    Orden(): id_orden(0), fecha_dia(0), fecha_mes(0), fecha_anio(0), fecha_min(0), fecha_hora(0){};
    Orden (int _id, int _dia, int _mes, int _anio, int _min, int _hora ) : id_orden(_id), fecha_dia(_dia), fecha_mes(_mes), fecha_anio(_anio), fecha_min(_min), fecha_hora(_hora) {};
    void fecha_completa();
    void orden_final();

    void setId(int _id);
    int getId(){return id_orden;}
    void setDia(int _dia);
    int getDia(){return fecha_dia;}
    void setMes(int _mes);
    int getMes(){return fecha_mes;}
    void setAnio(int _anio);
    int getAnio(){return fecha_anio;}
    void setMin(int _min);
    int getMin(){return fecha_min;}
    void setHora(int _hora);
    int getHora(){return fecha_hora;}

};

void Orden::fecha_completa(){
  cout << "Fecha de registro: " << fecha_dia << "/" << fecha_mes << "/" << fecha_anio << ", " << fecha_hora << ":" << fecha_min << endl;
}

void Orden::orden_final(){
  cout << "\nID de la orden: " << id_orden << endl;
  fecha_completa();
}

void Orden::setId(int _id){
  id_orden = _id;
}
void Orden::setDia(int _dia){
  fecha_dia = _dia;
}
void Orden::setMes(int _mes){
  fecha_mes = _mes;
}
void Orden::setAnio(int _anio){
  fecha_anio = _anio;
}
void Orden::setMin(int _min){
  fecha_min = _min;
}
void Orden::setHora(int _hora){
  fecha_hora = _hora;
}

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
