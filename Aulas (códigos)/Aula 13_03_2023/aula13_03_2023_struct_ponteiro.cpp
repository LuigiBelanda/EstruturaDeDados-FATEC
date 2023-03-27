#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct pessoa
{
    int cod;
    char nome[30];
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Criando o tipo do ponteiro sendo pessoa (nossa struct criado acima)
    pessoa *p;

    printf("Tamanho de pessoa (struct): %d", sizeof(pessoa));

    // Alocando um espaço em memória com malloc usando o tipo de dado pessoa (struct) exatamente do tamanho da struct
    p = (pessoa *) malloc(sizeof(pessoa));

    printf("\nEndereço do ponteiro (onde aponta): %x\n", p);

    printf("\n\nDigite o código: ");
    scanf("%d%*c", p->cod);

    printf("Digite o nome: ");
    scanf("%d%*c", p->nome);

    printf("\n\nCodigo: %d", p->cod);
    printf("\nNome: %d", p->nome);

    printf("\n\n");
    getchar();
    return 0;
}
