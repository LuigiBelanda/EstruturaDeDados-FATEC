#include <stdio.h>
#include <locale.h>

// Struct global
/*
struct p
{
    int codigo;
    char nome[30];
    int filhos;
};
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Criando a struct e suas vars (var local)
    struct
    {
        int codigo;
        char nome[30];
    } pessoa1, pessoa2;

    // Criando uma var pessoa1 com base na struct p
    // struct p pessoa1;

    // Criando um array de vars da struct (cada posição do array é uma struct com codigo, nome e filhos)
    // struct p pessoa[5];
    // pessoa[index].campo
    // pessoa[0].codigo

    // Colocando dados na struct (pessoa1)
    printf("Nome Pessoa 1: ");
    scanf("%s%*c", &pessoa1.nome);

    printf("Codigo Pessoa 1: ");
    scanf("%d%*c", &pessoa1.codigo);

    // Mostrando dados
    printf("\n\nNome Pessoa 1: %s", pessoa1.nome);
    printf("\nCodigo Pessoa 1: %d", pessoa1.codigo);

    // Mostrando o endereço de memória dos dados na struct
    printf("\n\nEndereço de memória (nome): %x", &pessoa1.nome);
    printf("\nEndereço de memória (codigo): %x", &pessoa1.codigo);

    // Descobrindo o tamanho da var (pessoa1)
    printf("\n\nTamanho da var pessoa1: %d", sizeof(pessoa1));

    printf("\n");
    return 0;
}
