// Crie um Algoritmo em C++, em que o usuário informa a dimensão de uma matriz, e os elementos de duas matrizes [ambas com a mesma dimensão] e o Algoritmo mostra a soma entre estas duas matrizes.

#include <iostream>

using namespace std;

int main(){
  int numeroDeLinhas, numeroDeColunas;
  cout << "Qual é a quantidade de linhas?\n";
  cin >> numeroDeLinhas;
  cout << "Qual é a quantidade de colunas";
  cin >> numeroDeColunas;

  float matriz1[numeroDeLinhas][numeroDeColunas], matriz2[numeroDeLinhas][numeroDeColunas];
  cout << "Digite abaixo os elementos da matriz 1: \n";
  for (int i=0; i<numeroDeLinhas; i++){
    for (int j=0; j<numeroDeColunas; j++){
      cout << "Digite o elemento da linha " << " coluna " << j+1 << endl;
      cin >> matriz1[i][j];
    }
  }

  cout << "Digite abaixo os elementos da matriz 2: \n";
  for (int i=0; i<numeroDeLinhas; i++){
    for (int j=0; j<numeroDeColunas; j++){
      cout << "Digite o elemento da linha " << " coluna " << j+1 << endl;
      cin >> matriz2[i][j];
    }
  }

  float matrizSoma[numeroDeLinhas][numeroDeColunas];
  for (int i=0; i<numeroDeLinhas; i++){
    for (int j=0; j<numeroDeColunas; j++){
      matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }

  for (int i=0; i<numeroDeLinhas; i++){
    for (int j=0; j<numeroDeColunas; i++){
      cout << matrizSoma[i][j] << " ";
    }
    cout << endl;

  }

  return 0;
}
