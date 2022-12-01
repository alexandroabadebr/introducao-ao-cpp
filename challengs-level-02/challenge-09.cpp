// Crie uma Algoritmo em C++ utilizando apenas ponteiros, em que o usuário informa a idade de duas pessoas, e o Algoritmo informa a média desta duas idades.

#include <iostream>

using namespace std;

int main() {
  int* idadeUm = new int;
  int* idadeDois = new int;

  cout << "Qual a idade da primeira pessoa?\n";
  cin >> *idadeUm;
  cout << "Qual idade da segunda pessoa?\n";
  cin >> *idadeDois;

  float* media = new float;
  *media = (*idadeUm + *idadeDois)/2;
  cout << "A media das idades é: " << *media << endl;

  return 0;
}
