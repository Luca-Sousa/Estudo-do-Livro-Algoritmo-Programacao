#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero %d e Positivo\n", numero);
    }
    else {
        if (numero < 0) {
            printf("O numero %d e Negativo\n", numero);
        }
        else {
            printf("O numero e zero\n");
        }
    }

    return 0;
}