#include <stdio.h>

int main() {

    double numero_1, numero_2, numero_3, numero_4, media;

    printf("Digite a sua 1 Nota: ");
    scanf("%lf", &numero_1);

    printf("Digite a sua 2 Nota: ");
    scanf("%lf", &numero_2);

    printf("Digite a sua 3 Nota: ");
    scanf("%lf", &numero_3);

    printf("Digite a sua 4 Nota: ");
    scanf("%lf", &numero_4);
    
    media = (numero_1 + numero_2 + numero_3 + numero_4) / 4;

    printf("A sua Media e: %.2lf\n", media);
    
    return 0;
}