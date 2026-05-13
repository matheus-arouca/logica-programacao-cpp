/*
- Verificação de número primo com for

Enunciado:
Solicitar ao usuário um número inteiro positivo.
Consistir a entrada para aceitar somente valores maiores que zero.
Verificar se o número informado é ou não primo utilizando a estrutura de repetição for.
Mostrar o resultado ao final.

Conteúdos praticados:
- Estrutura de repetição for
- Validação de entrada
- Operador de resto da divisão
- Verificação de número primo
*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    int divisores = 0;

    do {
        cout << "Digite um numero inteiro positivo: ";
        cin >> numero;
    } while (numero <= 0);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        cout << numero << " e um numero primo.";
    } else {
        cout << numero << " nao e um numero primo.";
    }

    return 0;
}
