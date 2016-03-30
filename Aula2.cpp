#include "veiculo.hpp"

int main(){
  //string texto;
  //float preco;
  //int num;
  //Aviao *aviao;
  //aviao = new Aviao("Tam","Boing",25414,"Kleyson",890);
  //cout << endl;
  /*cout << aviao->getMarca() <endl;
  cout << aviao->getPreco() << endl ;
  cout << aviao->getPiloto() << endl ;
  cout << aviao->getPoltrona() << endl << endl;
*/
  Carro *vetor_motos;
  vetor_motos = new Carro[3];
  int i;

  for( i=0; i<3; i++){
    // vetor_motos[i] = new Carro();
    vetor_motos[i].setModelo("celta");
    vetor_motos[i].setMarca("tews");
    vetor_motos[i].setPreco(89.992);
    vetor_motos[i].setTipoCambio(4);
    vetor_motos[i].setNumeroAssentos(5);
  }

  for( i=0; i<3; i++){
    vetor_motos[i].Imprimir();
  }
  delete[] vetor_motos;

  return 0;
}
