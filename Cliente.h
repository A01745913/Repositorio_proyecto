using namespace std;
class Cliente{
  private:
    int idCliente;
    string nombreCliente;
    int edadCliente;
    string correo;
    double dineroGastado;
  public:
    Cliente(){
      idCliente = 00000;
      nombreCliente = "Nombre Apellidos";
      edadCliente = 99;
      correo = "ejemplo@correo.com";
      dineroGastado = 0.0;
    }
    Cliente(int idCliente, string nombreCliente, int edadCliente, string correo, double dineroGastado){
      this->idCliente = idCliente;
      this->nombreCliente = nombreCliente;
      this->edadCliente = edadCliente;
      this->correo = correo;
      this->dineroGastado = dineroGastado;
    }

    double descuentoCumpleaños(double precio){
      return precio*0.9;
    }
    void agregarDineroGastado(){

    }
    void aplicarDescuento(){

    }
};