#include <stdio.h>

//Funcao LIMPAR BUFFER 
void limparBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//Funcao PRINCIPAL
int main() {
    float numero1, numero2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    //apresentacao do Menu de Operacoes
    do {
        puts("======= MENU =======");
        puts("[+] : soma");
        puts("[-] : subtracao");
        puts("[*] : multiplicacao");
        puts("[/] : divisao");
        printf("Operacao escolhida: ");
        operacao = getchar();
        limparBuffer();

        //error
        if (operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/')
            puts("ERROR: operacao nao reconhecida! Tente novamente.\n");
    } while (operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/');

    //definicao das funcoes das operacoes e exibicao do resultado
    switch (operacao) {
        case '+': resultado = numero1 + numero2; 
                printf("O resultado da soma e %g\n", resultado);
                break;
        case '-': resultado = numero1 - numero2; 
                printf("O resultado da subtracao e %g\n", resultado);
                break;
        case '*': resultado = numero1 * numero2; 
                printf("O resultado da multiplicacao e %g\n", resultado);
                break;
        case '/': 
                if (numero2 == 0)
                    puts("AVISO: Nao e possivel dividir por zero!");
                else {
                    resultado = numero1 / numero2;
                    printf("O resultado da divisao e %g\n", resultado);
                }
                break;
    }

    return 0;
}
