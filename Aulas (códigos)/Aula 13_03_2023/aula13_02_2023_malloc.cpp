#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Criando ponteiro
    int *p;

    // Alocando um espaço de memória e apontando para ele
    p = (int *) malloc(sizeof(int));

    // Armazenando o dado que o user digitar para onde o ponteiro (p) está apontando
    printf("Digite o dado para ser armazenado em %x: ", p);
    scanf("%d%*c", &*p);

    // p = conteúdo do ponteiro (endereço que ele está apontando)
    // *p = substitui pelo dado de onde ele está apontando (aponta e busca o dado)
    printf("\nDado armazenado em %x: %i", p, *p);

    printf("\n\n");
    getchar();
    return 0;
}
