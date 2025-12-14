#include <stdio.h>

int main() {
    int numero;   // número digitado pelo usuário
    int soma = 0; // inicializa a soma com 0

    printf("Digite números para somar (0 para sair):\n");

    // Enquanto o usuário não digitar 0, continue pedindo números
    while (1) { // loop infinito, será interrompido com break
        printf("Número: ");
        scanf("%d", &numero);

        if (numero == 0) { // condição de parada
            break; // sai do loop
        }

        soma += numero; // adiciona o número digitado à soma
    }

    printf("A soma dos números digitados é: %d\n", soma);

    return 0;
}
