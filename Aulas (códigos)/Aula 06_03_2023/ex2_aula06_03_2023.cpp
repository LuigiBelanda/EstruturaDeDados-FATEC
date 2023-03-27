#include <stdio.h>
#include <locale.h>

// Criando um tipo de dado (p) que � uma struct
typedef struct p {
    int codigo;
    char nome[30];
};

int main()
{
    int qtd_de_cadastros;

    setlocale(LC_ALL, "Portuguese");

    // Pegando a qtd que o usu�rio quer digitar
    printf("Qual a qtd de cadastros que vc deseja realizar? (no minimo 1 - m�ximo 10): ");
    scanf("%d%*c", &qtd_de_cadastros);

    while(qtd_de_cadastros < 1 || qtd_de_cadastros > 10)
    {
        printf("\n\nDIGITE NO M�NIMO 1 E NO M�XIMO 10!!!");

        printf("\nQual a qtd de cadastros que vc deseja realizar? (no m�nimo 1 - m�ximo 10): ");
        scanf("%d%*c", &qtd_de_cadastros);
    }

    // Usando nosso tipo de dado (p) que � uma struct para criar um array pessoa com a qtd que o usu�rio digitou
    p pessoa[qtd_de_cadastros];

    printf("\n\n=======================\n\n");

    // Colocando os dados em cada posi��o do array
    for(int i = 0; i < qtd_de_cadastros; i++)
    {
        printf("\nNome [PESSOA %d]: ", i);
        scanf("%s%*c", &pessoa[i].nome);

        printf("Codigo [PESSOA %d]: ", i);
        scanf("%d%*c", &pessoa[i].codigo);
    }

    // Mostrando os registros
    for(int i = 0; i < qtd_de_cadastros; i++)
    {
        printf("\n\nNome [PESSOA %d]: %s", i, pessoa[i].nome);
        printf("\nC�digo [PESSOA %d]: %d", i, pessoa[i].codigo);
    }

    printf("\n");
    return 0;
}
