#include <stdio.h>

void Linha(int tam) {  //Função 1 explicada logo abaixo
    for (int i = 0; i < tam; i++) {
        printf("==");
    } printf("\n");
}

int Soma(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, resultado;

    //1 - Função void sem retorno de função diferente de tipagens com valores que retornam o resutado para a função
    Linha(45);

    printf("Digite o primeiro Número para a soma: ");
    scanf("%d", &num1);
    printf("Digite outro Número para completar a soma: ");
    scanf("%d", &num2);

    //2 - Função com tipagen de retorno de valores de soma isso serve para tudo ( int, double, float, char, *char )
    resultado = Soma(num1, num2);
    printf("A soma entre %d + %d = %d \n", num1, num2, resultado);

}