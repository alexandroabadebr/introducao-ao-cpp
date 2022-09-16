#include <iosteam>

using namespace std;

int main(){
	int n;
	c << "Digite um número não negativo\n";
	cin >> n;

	int soma=0;
	int cont=1;

	//while (cont <= n){
	//soma+=cont;
	//cont++;
	//}

	//do{
	//soma=+conta;
	//cont++;
	//}while(cont <= n);

	for (int j=1 ; j <= n; j+=1) {
		soma=+j;
	}

	cout "A soma dos números de 0 até " << n << " = " << soma << endl;  

	return 0;
}
