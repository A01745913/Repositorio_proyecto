using namespace std;
class Prenda{
  private:
    string tipo;
    int cantidad;
    double precio;
  public:
    Prenda(){
      tipo = "tipo";
      cantidad = 0;
      precio = 0.0;
    }
    Prenda(string tipo, int cantidad, double precio){
      this->tipo = tipo;
      this->cantidad = cantidad;
      this->precio = precio;
    }

    void cambiarPrenda(string cambio){
      tipo = cambio;
    }
    void sumar(int numero){
      cantidad = cantidad + numero;
    }
    void informar(){
      cout << "Se tiene " << cantidad << " piezas de " << tipo << "." << endl;
      cout << "Su precio actual es " << precio << endl;
    }
};