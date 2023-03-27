#include <stdio.h>
#include <locale.h>

// Struct global
struct p
{
    int codigo;
    char nome[30];
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Criando um array de tamanho 4 onde cada posição é uma var baseada na struct, ou seja, tem nome e codigo
    struct p pessoa[4];

    // Preenchendo o array
    for(int i = 0; i < 4; i++)
    {
        printf("\n\nPESSOA [%d]\n", i);
        printf("Digite (NOME - Pessoa [%d]): ", i);
        scanf("%s%*c", &pessoa[i].nome);

        printf("Digite (CÓDIGO - Pessoa [%d]): ", i);
        scanf("%d%*c", &pessoa[i].codigo);
    }

    // Mostrando dados
    for(int i = 0; i < 4; i++)
    {
        printf("\n\nPESSOA [%d]", i);
        printf("\nNome: %s", pessoa[i].nome);
        printf("\nCodigo: %d", pessoa[i].codigo);
    }

    printf("\n");
    return 0;
}
