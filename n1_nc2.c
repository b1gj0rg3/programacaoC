#include <stdio.h>
 
int main() {
    int idade = 31;
    float altura = 1.90;
    double saldoBancario = 12345.67;
    char inicial = 'J';
    char nome[20] = "Jorge";
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);

    return 0;
}