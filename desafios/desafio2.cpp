#DASAFIO 2
*/
	Crie um algoritmo em C++, em que um usuario informa a nota de três provas de um determinado aluno e também a média de nota da turma toda. O Algoritmo deve calcular a média deste aluno e informar se sua nota é acima da média, abaixo da média ou está na média.
*/

#include <iostream> 

using namespace std; 

int main(){ 
	float nota1, nota2, nota3, mediaDaTurma;

	cout << "Digite a nota 1: ";
	cin >> nota1;
	cout << "Digite a nota 2: ";
	cin >> nota2;
	cout << "Digite a nota 3: ";
	cin >> nota3;
	cout << "Digite a média da turma: "
	cin >> mediaDaTurma;
	
	float mediaDoAluno(nota1+nota2+nota3)/3;
	cout << "A média do aluno é: " << mediaDoAluno << endl;


	if (mediaDoAluno < mediaDaTurma){
		cout << "O aluno esta abaixo da média.";
	} else if(mediaDoAluno == mediaDaTurma){
		cout << "O aluno está na média da média";
	} else{
		cout << "O aluno está da media";
	}



	return 0;
}
