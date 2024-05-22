#include <iostream>
#include <stdlib.h>
#include "Cliente.h"
using namespace std;

int main() {
  Anime madoka{};
  madoka.anadir_orden();
  madoka.registrarse();
  madoka.info_productos();
  Anime naruto("Emilia", "A01706807", "Mexico", 12125858);
  naruto.anadir_orden();
  naruto.registrarse();
  naruto.info_productos();

  Kpop stray_kids{};
  stray_kids.anadir_orden();
  stray_kids.registrarse();
  stray_kids.info_productos();
  Anime ateez("Victoria", "A01708200", "Japon", 184752610);
  ateez.anadir_orden();
  ateez.registrarse();
  ateez.info_productos();
  
}
