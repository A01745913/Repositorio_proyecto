#include <iostream>
#include <math.h>
#include "Moneda.h"
#include "Prenda.h"
#include "Cliente.h"
#include "Trabajador.h"
#include "Jornada.h"
using namespace std;

int main() {
  Trabajador tra{7812, "Kli2as", "Vespertino", "Raul Casas", 10.0};  
  tra.imprimirTrabajador();
  tra.cambiarTurno();
  tra.terminarVenta(190.80);
  tra.imprimirTrabajador();

  Prenda pre{"Gorro rojo Adidas", 2, 20.0};
  pre.informar();
  pre.sumar(7);
  pre.cambiarPrenda("Gorro negro nike");
  pre.informar();

  Cliente cli{7769, "Rexa Gautier", 19, "rexa89@hotmail.com", 90};
  cli.imprimirCliente();
  cli.agregarDineroGastado(cli.aplicarDescuento(cli.descuentoCumpleanios(100.0), 20));
  cli.imprimirCliente();

  Jornada jor{};
  jor.estadoActual();
  jor.registrarTrabajadores(3);
  jor.reducirTrabajadores(1);
  jor.agregarVenta(19018.50, 12);
  jor.estadoActual();

  Moneda mon;
  mon.opcionesMoneda(190.0);

  return 0;
}