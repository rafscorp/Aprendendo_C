#include <stdio.h>

int main() {
    int secreto = 7;  // número que o usuário precisa adivinhar
    int chute;        // número que o usuário vai chutar

    printf("Tente adivinhar o número secreto (1 a 10):\n");

    // Enquanto o chute for diferente do número secreto, continue pedindo
    while (1) {
        printf("Seu chute: ");
        scanf("%d", &chute);

        if (chute == secreto) {
            printf("Parabéns! Você acertou!\n");
            break; // sai do loop
        } else if (chute < secreto) {
            printf("Tente um número maior.\n");
        } else {
            printf("Tente um número menor.\n");
        }
    }

    return 0;
}
