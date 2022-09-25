#include <iostream>

using namespace std;

int main(){
	float gastoFamilia[5];
	for (int i=0; i<5; i++){
		cout << "Digite os gastos da família: " << i+1 << endl;
		cin >> gastoFamilia[i];
	}
	float media=0;
	for (int i=0; i<5; i++){
		media+=gastoFamilia[i];
	}
	media=media/5;
	cout << "Média de gastos: " << media << endl;

	for (int i=0; i<5; i++){
		if (gastoFamilia[i] < media){
			cout << "A familia " << i+1 << "tem gastos abaixo da média: ";
	} else if (gastoFamilia[i] == media){
		cout << "A familia " << i+1 << "tem gastos na media: ";
	} else {
		cout << "A família " << i+1 << " tem gastos acima da média: ";
		}
	}

	return 0;
}
