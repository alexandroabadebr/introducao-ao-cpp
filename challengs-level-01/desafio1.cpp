DASAFIO 1

Dada a função f(x) = x² - 3x + 5.

Crie um algoritmo em C++, que tenha uma função que calcula o valor de f(a), em que
a é um número real informado pelo usuário.

#include <iostream>

using namespace std;

float f(float x){
	float valor;
	valor = x*x - 3*x + 5;
	return valor;
}

int main(){
	
	float a;
	cout << "Digite um número: "\n;
	cin >> a;
	float valorf = f(a);
	cout << "O valor da função no ponto " << a << " é igual a " << valorf << endl;

	return 0;
} 
