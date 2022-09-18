#include <iostream>

using namespace std;

int main(){
	int variavel;
	int* ponteiro;
	variavel = 5;
	ponteiro =&variavel;

	cout << "Valor da variável pelo nome: " << variavel << endl;
	cout << "Endereço armazenado no ponteiro: " << ponteiro << endl;
	cout << "Valor da variável, através do ponteiro: " << *ponteiro << endl;

	return 0;
}