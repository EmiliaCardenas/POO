#include <iostream>
#include <stdlib.h>
#include "Cliente.h"
#include "Orden.h"
#include "Envioinfo.h"
#include "Cuentafinal.h"
using namespace std;

int main() {
  cout << "\n\n ------Todos los registros------" << endl;
  Cuentafinal cliente;
  cliente.registros_clientes();
  cliente.ver_registros();

  cout << "\n\n ------Imprimir registro de anime------" << endl;
  cliente.ver_registros("Anime");

  cout << "\n\n ------Imprimir registro de kpop------" << endl;
  cliente.ver_registros("Kpop");
  
  Envioinfo envio1(657493598,4,7,2024,37,20,"avión");
  envio1.anadir_envio();

}
