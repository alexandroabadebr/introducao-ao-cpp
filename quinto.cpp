#include <iostream>

using namespace std;

//IF/ELSE - AND/OR/NOT

int main(){
  float nota1, float nota2;
  cout << "Informe a Nota 1\n";
  cin >> nota1;
  cout << "Informe a Nota 2\n";
  cin  >> nota2;
  float media = (nota1 + nota2) / 2;
  cout << "Media: " << media << endl;

// if(media >= 5){
//  cout << "Aluno aprovado!\n";
// }

if (media >= 5){
  cout << "Aluno aprovado!\n";
} else{
  cout << "Aluno Reprovado!\n";
}

// Comparações: Igual: == , Diferente: != , Outros: > , < , >= , <=
    //if (media >= 5){
    //    cout << "Aluno Aprovado\n";
    //}

    //if (media >= 5){
    //    cout << "Aluno Aprovado\n";
    //} else{
    //    cout << "Aluno Reprovado\n";
    //}

// 0-2.5 D , 2.5-5 C , 5-7.5 B , 7.5-10 A
  if (media < 2.5){
    cout << "Nota final: D\n";
  } else if (media < 5){
    cout << "Nota fina: C\n";
  } else if (media < 7.5){
    cout << "Nota final B\n";
  } else {
    cout << "Nota final A\n";

  return 0;
}
