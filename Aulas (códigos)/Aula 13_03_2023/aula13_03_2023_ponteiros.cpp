#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("\n\n#################### variavel1 ####################\n\n");

    int variavel1 = 10;
    printf("Valor vari�vel1: %d\n", variavel1);
    printf("Endere�o vari�vel1: %x\n", &variavel1);
    // quando colocamos o & e depois o nome da var no printf ele mostra o endere�o de mem�ria
    // recomendado usar %x para valores hexadecimal




    printf("\n\n#################### variavel2 ####################\n\n");

    int variavel2 = 5;
    printf("Valor vari�vel2: %d\n", variavel2);
    printf("Endere�o vari�vel2: %x\n", &variavel2);




    printf("\n\n#################### Criando ponteiro (p) e usando ele com a variavel1 ####################\n\n");

    // Criando um ponteiro
    // tipo *nome_ponteiro;
    // O tipo do ponteiro deve ser o mesmo para onde ele vai apontar (se a var que ele apontar for int, o ponteiro ser� int)
    // O ponteiro aponta para um endere�o de mem�ria
    int *p;

    // Como ele n�o aponta para nada quando � criado abaixo
    // adicionamos o endere�o de mem�ria da nossa "variavel1" ou para onde queremos que ele aponte
    p = &variavel1;
    printf("Ponteiro (endere�o de mem�ria para onde est� apontando) = %x (o mesmo da variavel1)\n", p);

    // *nome_ponteiro = mostra o conte�do de onde ele est� apontando
    printf("Pegando o valor da variavel1 usando ponteiro: %d\n", *p);




    printf("\n\n#################### Mudando o ponteiro para a variavel2 ####################\n\n");

    p = &variavel2;
    printf("Ponteiro (endere�o de mem�ria para onde est� apontando) = %x (o mesmo da variavel2)\n", p);
    printf("Pegando o valor da variavel2 usando ponteiro: %d\n", *p);

    // mesmo ap�s mudarmos para a variavel2 o endere�o de mem�ria do ponteiro n�o muda, mas seu conte�do (para onde ele aponta) sim




    printf("\n\n#################### Mudando o valor da vari�vel2 que o ponteiro est� apontando ####################\n\n");

    *p = 11;

    printf("Novo valor da vari�vel2 depois de mudarmos ela por ponteiro: %d\n", *p);
    printf("Ponteiro (endere�o de mem�ria para onde est� apontando) = %x (o mesmo da variavel2)\n", p);
    printf("Endere�o vari�vel2: %x\n", &variavel2);

    // p = conteudo do ponteiro
    // &p = endere�o de mem�ria do ponteiro
    // *p = onde ele est� apontando




    printf("\n\n#################### Malloc ####################\n\n");

    // reserva um espa�o de mem�ria com o malloc
    p = (int *) malloc(sizeof(int));

    printf("Ponteiro (endere�o de mem�ria para onde est� apontando) = %x (espa�o alocado com o malloc)\n", p);

    printf("\n\n");
    getchar();
    return 0;
}
