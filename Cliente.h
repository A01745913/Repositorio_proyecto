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

    double descuentoCumpleanios(double precio){
      edadCliente++;
      return precio*0.9;
    }
    void agregarDineroGastado(double dinero){
      dineroGastado = dineroGastado + dinero;
    }
    double aplicarDescuento(double precio, double descuento){
      descuento = descuento/100;
      return precio*descuento;
    }
    void imprimirCliente(){
      cout << "Nombre: " << nombreCliente << "\t" << "ID: " << idCliente << endl;
      cout << "Edad: " << edadCliente << "\t" << "Correo: " << correo << endl;
      cout << "Dinero gastado: " << dineroGastado << endl;
    }
};