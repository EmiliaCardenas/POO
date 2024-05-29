#include <iostream>
#include <stdlib.h>
#include "Cliente.h"
using namespace std;

int main() {
  Anime naruto("Emilia", "A01706807", "Mexico", 12125858);
  naruto.anadir_orden();
  naruto.registrarse();
  naruto.info_productos();

  Kpop ateez("Victoria", "A01708200", "Japon", 184752610);
  ateez.anadir_orden();
  ateez.registrarse();
  ateez.info_productos();

  //Prueba Polimorfismo
  Cliente *cliente = new Cliente();
  cliente -> anadir_orden();
  
  Cliente *anime = new Anime();
  anime -> anadir_orden();

  Cliente *kpop = new Kpop();
  kpop -> anadir_orden();
}
