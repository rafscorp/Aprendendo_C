#include <stdio.h>  //Biblioteca IO.

int main() {
    int Num1;

    printf("Digite um Número para a verificação: ");
    scanf("%d", &Num1);

    if (Num1 % 2 == 0) {
        printf("O seu Número ( %d ) é Par \n", Num1);
    } else {
        printf("Seu Número ( %d ) é ímpar \n", Num1);
    }
}
