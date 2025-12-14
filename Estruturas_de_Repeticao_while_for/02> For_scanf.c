#include <stdio.h>  //BIblioteca IO

int main() {  
    int choice;  //Inicializando a variável

    printf(" 1 - For Ínicio e Fim \n 2 - For Reverso \n Escolha: ");
    scanf("%d", &choice);  //scanf da escolha numerada

    if (choice == 1) {  //Verdadeiro se for escolhido

        for (int i = 0; i < 10+1; i++) {  //for Crescente
            printf("%d - ", i);
        }

    } else if (choice == 2) {

        for (int i = 10; i >= 1; i--) {  //for descrescente
            printf("%d - ", i);
        }
    printf("Fim \n"); //fim com new line

    } else {  //exceção caso escolha for diferente de 1 ou 2
        printf("Erro dado inválido");
    }
}