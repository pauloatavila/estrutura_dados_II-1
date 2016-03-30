#include <iostream>
#include <string>

using namespace std;

class Veiculo{

  protected:
    string marca;
    string modelo;
    float preco;

  private:
    int teste;

  public:
    Veiculo(){
      marca = "Nothing";
      modelo = "";
      preco = 0.0;
    };

    Veiculo(string mc, string md, float pr){
      marca = mc;
      modelo = md;
      preco = pr;
    };

    ~Veiculo(){
        cout << "Estou deletando Todo mundo" << endl;
    };


    string getMarca(){
      return marca;
    };
    string getModelo(){
      return modelo;
    };
    float getPreco(){
      return preco;
    };

    void setModelo(string md){
      modelo = md;
    }
    void setMarca(string mc){
      marca = mc;
    };
    void setPreco(float pr){
      preco = pr;
    };
};

class Carro:public Veiculo{

  protected:
    int tipoCambio;
    int numeroAssentos;

  public:

      Carro(){

      };
      Carro(string mc, string md, float pr, int tc, int na){
        marca = mc;
        modelo = md;
        preco = pr;
        tipoCambio = tc;
        numeroAssentos = na;
      };
      ~Carro(){
        cout << "Seu carro foi pro ferro velho" << endl << endl;
      };

      void Imprimir(){
        cout << "Marca "<< marca << endl;
        cout << "Modelo "<< modelo << endl;
        cout << "Preço "<< preco << endl;
        cout << "Tipo de Câmbio "<< tipoCambio << endl;
        cout << "Número de Assentos "<< numeroAssentos << endl << endl;
      }
      void setTipoCambio(int tc){
        tipoCambio = tc;
      };

      int getTipoCambio(){
        return tipoCambio;
      };

      void setNumeroAssentos(int na){
        numeroAssentos = na;
      };

      int getNumeroAssentos(){
        return numeroAssentos;
      };
};

class Aviao:public Veiculo{

    protected:
      string piloto;
      int poltronas;

    public:
      Aviao(){

      };
      Aviao(string mc, string md, float pr, string pl, int po){

        marca = mc;
        modelo = md;
        preco = pr;
        piloto = pl;
        poltronas = po;
      };
      ~Aviao(){
        cout << "Só sobrou a caixa preta" << endl;
      };

      void setPiloto(string pl){
        piloto = pl;
      };
      void setPoltronas(int po){
        poltronas = po;
      };

      string getPiloto(){
        return piloto;
      };
      int getPoltrona(){
        return poltronas;
      };


};
