#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("\n\n#################### variavel1 ####################\n\n");

    int variavel1 = 10;
    printf("Valor variável1: %d\n", variavel1);
    printf("Endereço variável1: %x\n", &variavel1);
    // quando colocamos o & e depois o nome da var no printf ele mostra o endereço de memória
    // recomendado usar %x para valores hexadecimal




    printf("\n\n#################### variavel2 ####################\n\n");

    int variavel2 = 5;
    printf("Valor variável2: %d\n", variavel2);
    printf("Endereço variável2: %x\n", &variavel2);




    printf("\n\n#################### Criando ponteiro (p) e usando ele com a variavel1 ####################\n\n");

    // Criando um ponteiro
    // tipo *nome_ponteiro;
    // O tipo do ponteiro deve ser o mesmo para onde ele vai apontar (se a var que ele apontar for int, o ponteiro será int)
    // O ponteiro aponta para um endereço de memória
    int *p;

    // Como ele não aponta para nada quando é criado abaixo
    // adicionamos o endereço de memória da nossa "variavel1" ou para onde queremos que ele aponte
    p = &variavel1;
    printf("Ponteiro (endereço de memória para onde está apontando) = %x (o mesmo da variavel1)\n", p);

    // *nome_ponteiro = mostra o conteúdo de onde ele está apontando
    printf("Pegando o valor da variavel1 usando ponteiro: %d\n", *p);




    printf("\n\n#################### Mudando o ponteiro para a variavel2 ####################\n\n");

    p = &variavel2;
    printf("Ponteiro (endereço de memória para onde está apontando) = %x (o mesmo da variavel2)\n", p);
    printf("Pegando o valor da variavel2 usando ponteiro: %d\n", *p);

    // mesmo após mudarmos para a variavel2 o endereço de memória do ponteiro não muda, mas seu conteúdo (para onde ele aponta) sim




    printf("\n\n#################### Mudando o valor da variável2 que o ponteiro está apontando ####################\n\n");

    *p = 11;

    printf("Novo valor da variável2 depois de mudarmos ela por ponteiro: %d\n", *p);
    printf("Ponteiro (endereço de memória para onde está apontando) = %x (o mesmo da variavel2)\n", p);
    printf("Endereço variável2: %x\n", &variavel2);

    // p = conteudo do ponteiro
    // &p = endereço de memória do ponteiro
    // *p = onde ele está apontando




    printf("\n\n#################### Malloc ####################\n\n");

    // reserva um espaço de memória com o malloc
    p = (int *) malloc(sizeof(int));

    printf("Ponteiro (endereço de memória para onde está apontando) = %x (espaço alocado com o malloc)\n", p);

    printf("\n\n");
    getchar();
    return 0;
}
