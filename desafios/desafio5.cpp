#DASAFIO 5
/*
 Em um programa de de Moradia Popular, somente pessoas maiores de 21 anos e com renda abaixo de R$1200,00 podem participar.
 Crie um Algoritmo em C++, em que o usuário informa a sua idade e sua renda, e é informado se ele pode ou não participar desse programa. 
 */

#include <iostream>

using namespace std;

int main(){
	float renda;
	int idade;
	cout << "Qual a sua idade?\n";
	cin >> idade;
	cout << "Qual a sua renda?\n";
	cin >> renda;

	if (idade >= 21 && renda < 1200){
		cout << "Você está apto a participar do programa!\n";
	} else{
		cout << "Você não pode participar do programa!\n";
	}

	return 0;
}
