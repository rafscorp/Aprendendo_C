#include <stdio.h>

int Soma(int a, int b) {
    return a + b;
}


int main() {     //Temos duas formas de criar funções podemos faze-la com so retorno que será mais profissional ou Fazer a funçao fazer a entrada de usuário e o calculo
    int num1, num2, resultado;
//porem dessa vez iremos fazer a mais profissiional respeitando a regra de Entrada de usuário e lógica
    printf("Digite um Número para a soma: ");        scanf("%d", &num1);
    printf("Digite outro Número para a soma: ");     scanf("%d", &num2);

    resultado = Soma(num1, num2);
    printf("A soma entre %d + %d = %d \n", num1, num2, resultado);
}