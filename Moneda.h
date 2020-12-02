using namespace std;
class Moneda{
  private: 
    double dollar;
    double euro;
    double yen;
    double peso;
  public:
    Moneda(){
      dollar= 0.050;
      euro = 0.041;
      yen = 5.21;
      peso = 1;
    }

    void opcionesMoneda(double total){
      char var2;

      cout<< "Dolar = d"<<"\nEuro= e"<<"\nYenes = y" << "\nEscriba la opción en la que desee pagar"<< "\t" <<endl;
      cin>>var2;

      switch (var2){
        case 'd':
          pesoadolar(total);
          break;
        
        case 'e':
          pesoaeuro(total);
          break;
        case 'y':
          pesoayen(total);
          break;
      }

    }
    void pesoadolar(double total){
      cout<< "Total en dolares: " << total*dollar<< "\t"<< endl;
    }
    void pesoaeuro(double total){
      cout<< "Total en euros: " << total*euro<< "\t"<< endl;
    }
    void pesoayen(double total){
      cout<< "Total en Yenes: " <<total*yen<< "\t" << endl;
    }
};