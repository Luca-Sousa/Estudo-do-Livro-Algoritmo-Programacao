#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero inteiro e diferente de 0: ");
        scanf("%d", &numero);
        //error
        if (numero == 0) {
            puts("ERROR: o numero precisa ser diferente de 0!");
        }
    } while (numero == 0);

    if (numero > 0) {
        printf("O numero %d e Positivo\n", numero);
    }
    else {
        printf("O numero %d e Negativo\n", numero);
    }

    return 0;
}