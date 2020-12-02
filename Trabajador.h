using namespace std;
class Trabajador{
  private:
    int idTrabajador;
    string contrasenia;
    string turno;
    string nombreTrabajador;
    double totalVentas;
  public:
    Trabajador(){
      idTrabajador = 00000;
      contrasenia = "contraseña";
      turno = "Matutino";
      nombreTrabajador = "Nombre Apellido";
      totalVentas = 0.0;
    }
    Trabajador(int idTrabajador, string contrasenia, string turno, string nombreTrabajador, double totalVentas){
      this->idTrabajador = idTrabajador;
      this->contrasenia = contrasenia;
      this->turno = turno;
      this->nombreTrabajador = nombreTrabajador;
    }

    void imprimirTrabajador(){
      cout << "Id: " << idTrabajador << "\t" << "Nombre: " << nombreTrabajador << "\n" << "Turno: " << turno << "\t " << " Total de ventas: $" << totalVentas << "\n" << endl;
    }
    void cambiarTurno(){
      if(turno == "Matutino"){
        turno = "Vespertino";
      }
      else{
        turno = "Matutino";
      }
    }
    void terminarVenta(double venta){
      totalVentas = totalVentas + venta;
    }
};