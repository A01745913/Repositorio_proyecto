using namespace std;
/*
Código individual de Jorge Rojas Rivas A01745334
*/
class Jornada{
    private:
        int numProducVend;
        double dineroGanado;
        int trabajadoresActivos;
    public:
        Jornada(){
            numProducVend = 0;
            dineroGanado = 0.0;
            trabajadoresActivos = 0;
        }
        Jornada(int numProducVend, double dineroGanado, int trabajadoresActivos){
            this->numProducVend = numProducVend;
            this->dineroGanado = dineroGanado;
            this->trabajadoresActivos = trabajadoresActivos;
        }

        void estadoActual(){
            cout << "La cantidad de productos vendidos al momento es: " << numProducVend << endl;
            cout << "Se ha ganado la cantidad de: " << dineroGanado << "MXN" << endl;
            cout << "Se encuentran " << trabajadoresActivos << " trabajando actualmente.\n" << endl;
        }
        void registrarGanancia(int cant){
            dineroGanado = dineroGanado + cant;
        }
        void registrarTrabajadores(int cant){
            trabajadoresActivos = trabajadoresActivos + cant;
        }
        void reducirTrabajadores(int cant){
            trabajadoresActivos = trabajadoresActivos - cant;
        }
};