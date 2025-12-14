#include <stdio.h> //Biblioteca IO

int main() {
    int i;  //Inicialização da variável inteira

    for (i = 0; i < 10+1; i++) { //Estrutura de repetição ( i começa em 0 depois entra em oitra condiçao por isso o ";" em vez de "," e enquanto for menor que dez i ganha +1) 
        if (i <= 10) {
            printf("%d - ", i);
        }
    }
    printf("FIM \n"); //Após o laço o fim poderia somente ser aqui senão seria execultado em cada repetição
}