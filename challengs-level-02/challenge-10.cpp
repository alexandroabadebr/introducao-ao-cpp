# Crie um Algoritmo em C++, que tenha uma função que recebe dos ponteiros e troca o valor de 
referência entre os dois.

#include <iostream>

using namespace std;

void troca(int* &pont1, int* &pont2){
  int temp;
  temp = *pont1;
  *pont1 = *pont2;
  *pont = temp;
}

int main(){
  int* = pont1 = new int; 
  *pont1 = 5;
  int* pont2 = new int;
  *pont2 = 7;

  count << "Ponteiro 1: " << pont1 << " e " << *pont1 << endl;
  count << "Ponteiro 2: " << pont1 << " e " << *pont2 << endl;

  troca(pont1, pont2) 

  count << "Ponteiro 1: " << pont1 << " e " << *pont1 << endl;
  count << "Ponteiro 2: " << pont1 << " e " << *pont2 << endl;


  return 0;
}
