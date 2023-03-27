#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Criando ponteiro
    int *p;
    int qtd;

    printf("Digite o tamanho do vetor: ");
    scanf("%d%*c", &qtd);

    // Alocando um espaço de memória e apontando para ele
    // Neste caso criamos um vetor por meio do malloc criando a qtd de espaços reservados em memória que o usuário digitou
    p = (int *) malloc(qtd*sizeof(int));

    printf("\n\nPonteiro - conteúdo / para onde ele está apontando (p) = %x", p);
    printf("\nPonteiro - endereço do ponteiro (&p) = %x\n\n", &p);

    for(int i = 0; i < qtd; i ++)
    {
        printf("Digite o dado da posição %d: ", i);
        scanf("%d%*c", &p[i]);
    }

    printf("\n\n");

    for(int i = 0; i < qtd; i ++)
    {
        printf("\nPosição [%x] - p[%d] - %d", &p[i], i, p[i]);
    }

    printf("\n\n");
    getchar();
    return 0;
}
