using namespace std;
class Trabajador{
  private:
    int idTrabajador;
    string contraseña;
    string turno;
    string nombreTrabajador;
    double totalVentas;
  public:
    Trabajador(){
      idTrabajador = 00000;
      contraseña = "contraseña";
      turno = "Matutino";
      nombreTrabajador = "Nombre Apellido";
      totalVentas = 0.0;
    }
    Trabajador(int idTrabajador, string contraseña, string turno, string nombreTrabajador, double totalVentas){
      this->idTrabajador = idTrabajador;
      this->contraseña = contraseña;
      this->turno = turno;
      this->nombreTrabajador = nombreTrabajador;
    }

    void imprimirTrabajador(){
      cout << "Id: " << idTrabajador << "\t" << "Nombre: " << nombreTrabajador << "\n" << "Turno: " << turno << "\t " << " Total de ventas: $" << totalVentas << "\n" << endl;
    }

    void ingresarPrenda(){

    }
    void registrarCliente(){

    }
    void eliminarCliente(){
      
    }
};