/*
Exercício - Fatorial com função

Enunciado:
Solicitar um valor inteiro positivo, consistindo a entrada utilizando função.
Calcular o fatorial do número informado.
Mostrar o resultado do fatorial.

Conteúdos praticados:
- Funções
- Validação de entrada
- Estrutura de repetição
- Cálculo de fatorial
*/
#include <iostream>

using namespace std;
int consistir () {
	int x;
	cout<<"Digite um valor inteiro positivo:";
	cin>>x;
	while(x<=0){
		cout<<"Valor invalido. Digite novamente:";
		cin>>x;
	}
	return x;
}
int calcularfatorial(int x){
	int fatorial=1;
	int i;
	for(i=1;i<=x;i++){
		fatorial=fatorial*i;
		
	}
	return fatorial;	
}
int main (){
    int n, fatorial;
	n=consistir();
	fatorial = calcularfatorial(n);
	cout<<"O fatoral eh:" <<fatorial;
	
	
	
	return 0;	
	
	
	
	
}
