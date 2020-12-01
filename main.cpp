#include <iostream>
#include <math.h>
#include "Moneda.h"
#include "Prenda.h"
#include "Cliente.h"
#include "Trabajador.h"
#include "Club.h"
#include "Jornada.h"
using namespace std;

int main() {
  Trabajador tra;  
  tra.imprimirTrabajador();
  Jornada jor;
  jor.estadoActual();
  return 0;
}