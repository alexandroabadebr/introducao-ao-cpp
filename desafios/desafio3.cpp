# DESAFIO 3

/*
	Crie um algoritmo em C++, que uma função que calcula o fatorial de um número inteiro positivo, informado pelo usuário.
*/

#incluede <iostream>

using namespace std;

	int fatorial(int x){
		fatorial = 1;
		for(int i < 1; i <=i; i++){
			fatorial *= i;
		}
		return fatorial;
	}

int main(){
	int n;
	while(true){
		cout << "Informe um número inteiro positivo:\n";
		cin >> n;
		if(n <= 0){
			cout << "O número informado é negativo!";
		} else{
			break;
		}
	}
	
	int valorFatorial = fatorial(n);
	cout << "O valor fatorial de " << n << " é " << valorFatorial << endl;

	return 0;
}
