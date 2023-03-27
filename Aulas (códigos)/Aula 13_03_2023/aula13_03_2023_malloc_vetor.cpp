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

    // Alocando um espa�o de mem�ria e apontando para ele
    // Neste caso criamos um vetor por meio do malloc criando a qtd de espa�os reservados em mem�ria que o usu�rio digitou
    p = (int *) malloc(qtd*sizeof(int));

    printf("\n\nPonteiro - conte�do / para onde ele est� apontando (p) = %x", p);
    printf("\nPonteiro - endere�o do ponteiro (&p) = %x\n\n", &p);

    for(int i = 0; i < qtd; i ++)
    {
        printf("Digite o dado da posi��o %d: ", i);
        scanf("%d%*c", &p[i]);
    }

    printf("\n\n");

    for(int i = 0; i < qtd; i ++)
    {
        printf("\nPosi��o [%x] - p[%d] - %d", &p[i], i, p[i]);
    }

    printf("\n\n");
    getchar();
    return 0;
}
