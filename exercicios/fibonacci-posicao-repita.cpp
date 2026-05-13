/*
- Termo da posição informada da série de Fibonacci

Enunciado:
Solicitar ao usuário uma posição da série de Fibonacci.
Mostrar apenas o valor do termo correspondente à posição informada.
Fazer o exercício utilizando estrutura de repetição do tipo repita.

Conteúdos praticados:
- Estrutura de repetição do tipo repita
- Validação de entrada
- Série de Fibonacci
- Variáveis acumuladoras
*/

#include <iostream>
using namespace std;

int main() {
    int posicao;
    int anterior = 1, atual = 1, proximo;
    int contador = 3;
    int resultado;

    do {
        cout << "Digite a posicao desejada da serie de Fibonacci: ";
        cin >> posicao;
    } while (posicao <= 0);

    if (posicao == 1 || posicao == 2) {
        resultado = 1;
    } else {
        do {
            proximo = anterior + atual;
            resultado = proximo;
            anterior = atual;
            atual = proximo;
            contador++;
        } while (contador <= posicao);
    }

    cout << "Valor do termo na posicao " << posicao << ": " << resultado;

    return 0;
}
