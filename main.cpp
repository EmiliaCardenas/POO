
/*
Proyecto Tienda de anime y kpop
Emilia Cárdenas Lobatón
A01706807
13/06/2024
*/


#include <iostream>
#include <stdlib.h>
#include "Cliente.h"
#include "Orden.h"
#include "Cuentafinal.h"
using namespace std;

int main() {
  int n, k;
  cout << "Bienvenidx al registro de compras, elige una opcion." << endl;
  cout << "---Ver registros  1" << endl;
  cout << "---Ver envios     2" << endl;
  cout << "Cual es tu eleccion? " << endl;
  cin >> k;

  if (k == 1){
    cout << "---Todos  1" << endl;
    cout << "---Anime  2" << endl;
    cout << "---Kpop   3" << endl;
    cout << "Cuales registros quieres ver? " << endl;
    cin >> n;

    Cuentafinal cliente;
    cliente.registros_clientes();

    if (n == 1) {
      cout << "\n\n ------Todos los registros------" << endl;
      cliente.ver_registros();
    }

    if (n == 2) {
    cout << "\n\n ------Imprimir registro de anime------" << endl;
    cliente.ver_registros("Anime");
    }

    if (n == 3) {
    cout << "\n\n ------Imprimir registro de kpop------" << endl;
    cliente.ver_registros("Kpop");
    }
  }
  
  if (k == 2){
    cout << "---Todos      1" << endl;
    cout << "---Terrestre  2" << endl;
    cout << "---Aereo      3" << endl;
    cout << "---Marino     4" << endl;
    cout << "Cuales registros quieres ver? " << endl;
    cin >> n;
    Cuentafinal envio1;
    envio1.registro_envio();

    if (n == 1) {
      cout << "\n\n ------Imprimir envios------" << endl;
      envio1.ver_envios();
    }

    if (n == 2) {
      cout << "\n\n ------Imprimir envios Terrestres------" << endl;
      envio1.ver_envios("terrestre");
    }

    if (n == 3) {
      cout << "\n\n ------Imprimir envios Aereos------" << endl;
      envio1.ver_envios("aereo");
    }

    if (n == 4) {
      cout << "\n\n ------Imprimir envios Marinos------" << endl;
      envio1.ver_envios("marino");
    }
  }

}
