/*
Exercício 6 - Tabuada com vetor e matriz

Enunciado:
Criar um vetor de 10 elementos e uma matriz de 10 linhas por 10 colunas.
Solicitar ao usuário valores no intervalo de 1 a 10 e inserir no vetor.
Após a inserção no vetor, ler cada elemento e calcular sua tabuada, armazenando os resultados na matriz.
Ao final, mostrar cada elemento do vetor e a tabuada correspondente armazenada na matriz.

Conteúdos praticados:
- Vetores
- Matrizes
- Estrutura de repetição
- Validação de entrada
- Tabuada
*/
#include <iostream>
using namespace std;
int main(){
	int vetor [10];
	int matriz [10][10];
	int lin,col;
	
	cout<<"Digite 10 valores para o vetor:\n";
	for(lin=0;lin<10;lin++){
		cout<<"Vetor["<<lin<<"]:";
		cin>>vetor[lin];
	}
	for(lin=0;lin<10;lin++){
		for(col=0;col<10;col++){
		   matriz[lin][col]	=vetor[lin]*(col+1);
		}
	}
	cout<<"\nElemento do vetor e sua tabuada correspondente:\n";
	for(lin=0; lin<10; lin++){
		cout<<"Vetor["<<lin<<"]="<<vetor[lin]<<":";
		for(col=0;col<10;col++){
			cout<<matriz[lin][col]<<"";
		}
	}
return 0;	
}
	
	
	
	
	
	
