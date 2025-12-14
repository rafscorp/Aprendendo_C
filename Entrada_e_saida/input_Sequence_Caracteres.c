#include <stdio.h>

int main() {
  char nome[50];
  
  printf("Digite uma palavra: ");
  fgets(nome, 50, (stdin));
  printf("A palavra digitada foi: %s", nome);
}
