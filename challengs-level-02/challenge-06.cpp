#include <iostream>
using namespace std;

int main(){
	float familia1, familia2, familia3, familia4, familia5;
	
	cout << "Por favor, informe os gastos da primeira família: ";
	cin >> familia1; 
	cout << "Por favor, informe os gastos da segunda família: ";
	cin >> familia2; 
	cout << "Por favor, informe os gastos da terceira família: ";
	cin >> familia3;
	cout << "Por favor, informe os gastos da quarta família: ";
	cin >> familia4;
	cout << "Por favor, informe os gastos da quinta família: ";
	cin >> familia5;

	float mediaCadaFamilia = (familia1 + familia2 + familia3 + familia4 + familia5);
	float media = mediaCadaFamilia / 5;


	if (mediaCadaFamilia < media){
		cout << ">> O gasto da família está abaixo da média. MÉDIA: " << media << endl;
		cout << endl;
	} else if (mediaCadaFamilia > media){	
		cout << ">> O gasto da família está abaixo da média. MÉDIA: " << media << endl;
		cout << endl;
	} else {
		cout << ">> O gasto da família está na média" << media << endl;
		}
		
	return 0;
}

