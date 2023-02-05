#include <stdio.h>

int main() {
    int ano;
    
    do {
        printf("Digite o ano d.C (depois de Cristo): ");
        scanf("%d", &ano);

        //error
        if (ano < 1)
            puts("ERROR: ano invalido! Tente novamente.");
    } while (ano < 1);
    
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        puts("O ano e bissexto.");
    }
    else {
        puts("O ano nao e bissexto.");
    }
  
    return 0;
}