#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
#include<stdlib.h>
using namespace std;

class Cliente{
  protected:
    string nombre_usuario, contrasena, info_direccion, objeto, clase;
    int precio, cantidad;

  public:
    Cliente(): nombre_usuario(""), contrasena(""), info_direccion(""), objeto(""), clase(""), precio(0), cantidad(0){};
    Cliente(string _nom, string _contrasena, string _info, string _objeto, string _clase, int _precio, int _cantidad) : nombre_usuario(_nom), contrasena(_contrasena), info_direccion(_info), objeto(_objeto), clase(_clase), precio(_precio), cantidad(_cantidad){};
    
    virtual void info_productos() = 0;

    void setNom(string _nom);
    string getNom(){return nombre_usuario;}
    void setContrasena(string _contrasena);
    string getContrasena(){return contrasena;}
    void setInfo(string _info);
    string getInfo(){return info_direccion;}
    void setPrecio (int _precio);
    int getPrecio(){return precio;}
    void setCantidad (int _cantidad);
    int getCantidad(){return cantidad;}
    void setObjeto(string _objeto);
    string getObjeto(){return objeto;}
    void setClase(string _clase);
    string getClase(){return clase;}
};


void Cliente::setNom(string _nom){
  nombre_usuario = _nom;
}
void Cliente::setContrasena(string _contrasena){
  contrasena = _contrasena;
}
void Cliente::setInfo (string _info){
  info_direccion = _info;
}
void Cliente::setCantidad(int _cantidad){
  cantidad = _cantidad;
}
void Cliente::setPrecio (int _precio){
  precio = _precio;
}
void Cliente::setObjeto(string _objeto){
  objeto = _objeto;
}
void Cliente::setClase(string _clase){
  clase = _clase;
}

class Anime : public Cliente{
  public:
    Anime(): Cliente("","","","","",0,0){};
    Anime (string _nom, string _contrasena, string _info, string _objeto, string _clase, int _precio, int _cantidad): Cliente(_nom,_contrasena,_info,_objeto,_clase,_precio,_cantidad){
    }

    void info_productos();
};

void Anime::info_productos(){
  cout << "\nNombre de usuario: " << nombre_usuario << endl;
  cout << "Direccion de envio: " << info_direccion << endl;
  cout << "Producto: " << objeto << endl;
  cout << "Cantidad: " << cantidad << endl;
  cout << "Precio del producto (c/u): $" << precio << endl;
  cout << "Precio total: $" << (precio*cantidad) << endl;
}


class Kpop : public Cliente{
  public:
    Kpop(): Cliente("","","","","",0,0){};
    Kpop (string _nom, string _contrasena, string _info, string _objeto, string _clase, int _precio, int _cantidad): Cliente(_nom,_contrasena,_info,_objeto,_clase,_precio,_cantidad){
  }

    void info_productos();
};


void Kpop::info_productos(){
  cout << "\nNombre de usuario: " << nombre_usuario << endl;
  cout << "Direccion de envio: " << info_direccion << endl;
  cout << "Producto: " << objeto << endl;
  cout << "Cantidad: " << cantidad << endl;
  cout << "Precio del producto (c/u): $" << precio << endl;
  cout << "Precio total: $" << (precio*cantidad) << endl;
}


#endif
