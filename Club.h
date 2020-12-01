#include <array>
#include <string>
using namespace std;
class Club{
  private:
    array<string, 1> listaClientes;
    string ofertaYPromociones;
    array<string, 5> accesoCatalogo;
  public:
    Club(){
      listaClientes = {"a"};
      ofertaYPromociones = "Hoy no hay promociones.";
      accesoCatalogo = {"Playera i", "Pantalon j", "Gorra k", "Guante x", "Zapato y"};
    }
    Club(array<string, 1> listaClientes, string ofertaYPromociones, array<string, 5> accesoCatalogo){
      this->listaClientes = listaClientes;
      this->ofertaYPromociones = ofertaYPromociones;
      this->accesoCatalogo = accesoCatalogo;
    }

    void enviarOfertas(){

    }
    void imprimirLista(){

    }
};