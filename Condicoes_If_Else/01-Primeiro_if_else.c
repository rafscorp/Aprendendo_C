#include <stdio.h>  //Biblioteca IO

int main() {
    int Num1;

    printf("---Programa | Verdadeiro ou Falso | < 5 False | > 5 True\n Informe um Número: ");
    scanf("%d", &Num1);

    if (Num1 <= 5) {
        printf("Hmm..Número Falso");
    } else {
        printf("Aee..Número Verdadeiro");
    }

}
