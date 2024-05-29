#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
#include<stdlib.h>
using namespace std;

class Cliente{
  protected:
    string nombre_usuario, contrasena, info_direccion;
    int id_num;
    int cantidad, precio;

  public:
    Cliente(): nombre_usuario(""), contrasena(""), info_direccion(""), id_num(){};
    Cliente(string _nom, string _contrasena, string _info, int _num);
    virtual void anadir_orden(); // Polimorfismo

    void setNom(string _nom);
    string getNom(){return nombre_usuario;}
    void setContrasena(string _contrasena);
    string getContrasena(){return contrasena;}
    void setInfo(string _info);
    string getInfo(){return info_direccion;}
    void setNum(int _num);
    int getNum(){return id_num;}
};

Cliente::Cliente(string _nom, string _contrasena, string _info, int _num){
  nombre_usuario =_nom; 
  contrasena = _contrasena;
  info_direccion = _info;
  id_num = _num;
}

void Cliente::anadir_orden(){
  cout << "\nCuantos de este producto quieres? " << endl;
  cin >> cantidad;
  cout << "\nCuanto cuesta este producto? " << endl;
  cin >> precio;
}

void Cliente::setNom(string _nom){
  nombre_usuario = _nom;
}

void Cliente::setContrasena(string _contrasena){
  contrasena = _contrasena;
}

void Cliente::setInfo (string _info){
  info_direccion = _info;
}
void Cliente::setNum (int _num){
  id_num = _num;
}

class Anime : public Cliente{
  private:
    string serie;

  public:
    Anime(): Cliente("","","",int()){};
    Anime (string _nom, string _contrasena, string _info, int _num):Cliente(_nom,_contrasena,_info,_num){
    }
    void anadir_orden();
    void ir_orden();
    void info_productos();
    void registrarse();

    void setSerie(string _serie);
    string getSerie(){return serie;}
    void setCantidad (int _cantidad);
    int getCantidad(){return cantidad;}
    void setPrecio (int _precio);
    int getPrecio() {return precio;}
};

void Anime::anadir_orden(){
  cout << "\nQue producto quieres (mangas, figuras, llaveros, etc.)? " << endl;
  cin >> serie;
  Cliente::anadir_orden();
}

void Anime::registrarse(){
  cout << "\nNombre de usuario: " << nombre_usuario << endl;
  cout << "Direccion de envio: " << info_direccion << endl;
  cout << "Numero de identificacion: " << id_num << endl;
}

void Anime::info_productos(){
  cout << "\nProducto: " << serie << endl;
  cout << "Cantidad: " << cantidad << endl;
  cout << "Precio total: " << (precio*cantidad) << endl;
}

void Anime::setSerie(string _serie){
  serie = _serie;
}

void Anime::setCantidad(int _cantidad){
  cantidad = _cantidad;
}

void Anime::setPrecio (int _precio){
  precio = _precio;
}

class Kpop : public Cliente{
  private:
    string grupo;

  public:
    Kpop(): Cliente("","","",int()){};
    Kpop (string _nom, string _contrasena, string _info, int _num):Cliente(_nom,_contrasena,_info,_num){
  }
    void anadir_orden();
    void ir_orden();
    void info_productos();
    void registrarse();

    void setGrupo(string _grupo);
    string getGrupo(){return grupo;}
    void setCantidad (int _cantidad);
    int getCantidad(){return cantidad;}
    void setPrecio (int _precio);
    int getPrecio(){return precio;}
};

void Kpop::anadir_orden(){
  cout << "\nQue producto quieres (Pcs, Albumes, Banners, etc.)? " << endl;
  cin >> grupo;
  Cliente::anadir_orden();
}

void Kpop::registrarse(){
  cout << "\nNombre de usuario: " << nombre_usuario << endl;
  cout << "Direccion de envio: " << info_direccion << endl;
  cout << "Numero de identificacion: " << id_num << endl;
}

void Kpop::info_productos(){
  cout << "\nProducto: " << grupo << endl;
  cout << "Cantidad: " << cantidad << endl;
  cout << "Precio total: " << (precio*cantidad) << endl;
}

void Kpop::setGrupo(string _grupo){
  grupo = _grupo;
}

void Kpop::setCantidad(int _cantidad){
  cantidad = _cantidad;
}

void Kpop::setPrecio (int _precio){
  precio = _precio;
}
#endif
