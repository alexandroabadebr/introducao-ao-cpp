//Crie um Algoritmo em C++, que o usuário informa o tamanho de um vetor, e sues elementos. O Algoritmo deve imprimir este valor e logo após, perguntar ao usuário se ele quer imprimir outro vetor. Utilize o delete após impressão do vetor.

#include <iostream>

using namespace std;

int main(){
  int tamanho, teste;
  
  do{
    cout << "Digite o tamanho do vetor\n";
    cin >> tamanho;
    float* vetor = new float[tamanho];
    for (int i = 0; i < tamanho; i++){
      cout << "Digite o elemento " << i+1 << "deste valor\n";
      cin >> vetor[i];
    }

    cout << "O vetor inserido é:\n[ ";
    for (int i = 0; i < tamanho; i++){
      cout << "]\n";

      cout << "Se deseja inserir outro vetor, digite 1, cao contrario, digite 0";
      cin >> teste;

      delete [] vetor;
    }
  } while (teste != 0);

  return 0;
}
