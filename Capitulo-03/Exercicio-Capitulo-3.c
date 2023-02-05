#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d e Par!\n", numero);
    }
    else {
        printf("O numero %d e Impar!\n", numero);
    }
    
    return 0;
}