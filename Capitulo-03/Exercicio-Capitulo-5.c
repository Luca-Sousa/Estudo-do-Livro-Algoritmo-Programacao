#include <stdio.h>

//Funcao LIMPAR BUFFER 
void limparBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//Funcao PRINCIPAL
int main() {
    char resposta1, resposta2, resposta3;
    char gabarito1, gabarito2, gabarito3;
    int respostas_corretas = 0;
    
    //leitura da resposta da questao 01
    do {
        printf("Informe a resposta da primeira questao (a, b, c, d): ");
        resposta1 = getchar();
        limparBuffer();

        //error
        if (resposta1 != 'a' && resposta1 != 'b' && resposta1 != 'c' && resposta1 != 'd')
            puts("ERROR: resposta invalida! Tente novamente.");
    } while (resposta1 != 'a' && resposta1 != 'b' && resposta1 != 'c' && resposta1 != 'd');

    //leitura da resposta da questao 02
    do {
        printf("Informe a resposta da segunda questao (a, b, c, d): ");
        resposta2 = getchar();
        limparBuffer();

        //error
        if (resposta2 != 'a' && resposta2 != 'b' && resposta2 != 'c' && resposta2 != 'd')
            puts("ERROR: resposta invalida! Tente novamente.");
    } while (resposta2 != 'a' && resposta2 != 'b' && resposta2 != 'c' && resposta2 != 'd');

    //leitura da resposta da questao 03
    do {
        printf("Informe a resposta da terceira questao (a, b, c, d): ");
        resposta3 = getchar();
        limparBuffer();

        //error
        if (resposta3 != 'a' && resposta3 != 'b' && resposta3 != 'c' && resposta3 != 'd')
            puts("ERROR: resposta invalida! Tente novamente.");
    } while (resposta3 != 'a' && resposta3 != 'b' && resposta3 != 'c' && resposta3 != 'd');
    
    //leitura do gabarito da questão 01
    do {
        printf("Informe o gabarito da primeira questao (a, b, c, d): ");
        gabarito1 = getchar ();
        limparBuffer();

        //error
        if (gabarito1 != 'a' && gabarito1 != 'b' && gabarito1 != 'c' && gabarito1 != 'd')
            puts("ERROR: gabarito invalido! Tente novamente.");
    } while (gabarito1 != 'a' && gabarito1 != 'b' && gabarito1 != 'c' && gabarito1 != 'd');

    //leitura do gabarito da questão 02
    do {
        printf("Informe o gabarito da segunda questao (a, b, c, d): ");
        gabarito2 = getchar ();
        limparBuffer();

        //error
        if (gabarito2 != 'a' && gabarito2 != 'b' && gabarito2 != 'c' && gabarito2 != 'd')
            puts("ERROR: gabarito invalido! Tente novamente.");
    } while (gabarito2 != 'a' && gabarito2 != 'b' && gabarito2 != 'c' && gabarito2 != 'd');

    //leitura do gabarito da questão 03
    do {
        printf("Informe o gabarito da terceira questao (a, b, c, d): ");
        gabarito3 = getchar ();
        limparBuffer();

        //error
        if (gabarito3 != 'a' && gabarito3 != 'b' && gabarito3 != 'c' && gabarito3 != 'd')
            puts("ERROR: gabarito invalido! Tente novamente.");
    } while (gabarito3 != 'a' && gabarito3 != 'b' && gabarito3 != 'c' && gabarito3 != 'd');


    //Verificacao das respostas corretas
    if (resposta1 == gabarito1) {
        respostas_corretas++;
    }
    if (resposta2 == gabarito2) {
        respostas_corretas++;
    }
    if (resposta3 == gabarito3) {
        respostas_corretas++;
    }
    
    //Exibir a quantidade de respostas corretas
    printf("Quantidade de respostas corretas: %d.\n", respostas_corretas);

    return 0;
}