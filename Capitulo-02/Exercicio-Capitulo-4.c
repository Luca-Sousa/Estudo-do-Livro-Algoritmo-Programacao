#include <stdio.h>

int main() {

    double graus_celsius, graus_fahrenheint;

    printf("Digite a Temperatura em Graus Celsius: ");
    scanf("%lf", &graus_celsius);

    graus_fahrenheint = (1.8 * graus_celsius) + 32;

    printf("A temperatura %.2lf Graus Celsius em Fahrenheit, e igual a %.2lf!\n", graus_celsius, graus_fahrenheint);

    return 0;
}