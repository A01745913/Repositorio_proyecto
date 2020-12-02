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
        void registrarTrabajadores(int cant){
            if(cant < 0){
                cant = cant * -1;
            }
            trabajadoresActivos = trabajadoresActivos + cant;
        }
        void reducirTrabajadores(int cant){
<<<<<<< Updated upstream
            if(trabajadoresActivos > 0){
                trabajadoresActivos = trabajadoresActivos - cant;
=======
            if(cant < 0){
                cant = cant * -1;
            }
            if(trabajadoresActivos > 0){
                trabajadoresActivos = trabajadoresActivos - cant;
                if(trabajadoresActivos < 0){
                    trabajadoresActivos = 0;
                }
>>>>>>> Stashed changes
            }
            else{
                cout << "Ya no hay trabajadores activos." << endl;
            }
        }
};