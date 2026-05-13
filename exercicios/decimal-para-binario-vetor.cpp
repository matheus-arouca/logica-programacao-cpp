/*
 Conversão de decimal para binário com vetor

Enunciado:
Criar um vetor A de 15 elementos.
Solicitar um valor inteiro positivo na base decimal.
Transformar o valor em binário e inserir o binário calculado no vetor A.
Após o cálculo, mostrar o número binário na ordem correta.
OBS: Mostrar somente os elementos inseridos.

Conteúdos praticados:
- Vetores
- Estrutura de repetição
- Validação de entrada
- Conversão de decimal para binário
*/
#include <iostream>
using namespace std;

int main() {
    int A[15];
    int numero, resto, i = 0;

    do {
        cout << "Digite um valor inteiro positivo na base decimal: ";
        cin >> numero;
    } while (numero <= 0);

    while (numero > 0 && i < 15) {
        resto = numero % 2;
        A[i] = resto;
        numero = numero / 2;
        i++;
    }

    cout << "Numero em binario: ";

    for (int j = i - 1; j >= 0; j--) {
        cout << A[j];
    }

    return 0;
}
