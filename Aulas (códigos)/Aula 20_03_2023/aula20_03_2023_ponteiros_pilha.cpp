#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Criando a struct do tipo aluno
typedef struct Aluno
{
    int RA;

    // ponteiro que irá apontar para o próximo elemento da pilha
    Aluno * prox;
};

void dados_ponteiros(Aluno *topo, Aluno *aux);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Aqui criamos mais 2 ponteiro, o primeiro irá apontar para o topo da pilha
    // O segundo será um ponteiro auxiliar que usaremos para criar os novos elementos e nos ajudar
    // a não perder a referência
    // Obs: os ponteiros são do tipo Aluno (struct criada acima)
    Aluno * topo = NULL;
    Aluno * aux;

    int op, conta_num_itens;

    do
    {
        printf("\nDigite a opcao que deseja!");
        printf("\n\n1 - ADICIONAR");
        printf("\n2 - LISTAR");
        printf("\n3 - REMOVER O ULTIMO");
        printf("\n4 - REMOVER TUDO");
        printf("\n5 - SAIR");
        printf("\n\nQual a sua escolha: ");
        scanf("%d%*c", &op);

        switch(op)
        {
            case 1:
                printf("\n\n\n=*=*=*=*=*=*=*=*=*=*=*=*==*==*=\n\nO user escolheu a opcao ADICIONAR!\n\n=*=*=*=*=*=*=*=*=*=*=*=*==*==*=\n\n\n");

                // User selecionou add um novo elemento na pilha
                // Reservando um espaço de memória para o ponteiro apontar para ele
                // Deixando um espaço para caber uma struct do tipo Aluno
                aux = (Aluno *) malloc (sizeof(Aluno));

                dados_ponteiros(topo, aux);

                printf("\nDigite o RA do aluno: ");
                scanf("%d%*c", &aux->RA);

                // Mudando o endereço de memória que o ponteiro "prox" usa
                // aux->prox = NULL
                aux->prox = topo;

                // Colocando o "topo" e uma nova posição
                // topo = 010F (EXEMPLOs)
                topo = aux;

                dados_ponteiros(topo, aux);
            break;

            case 2:
                printf("\n\n\n=*=*=*=*=*=*=*=*=*=*=*=*==*==*=\n\nO user escolheu a opcao LISTAR!\n\n=*=*=*=*=*=*=*=*=*=*=*=*==*==*=\n\n\n");

                conta_num_itens = 1;

                if(topo == NULL)
                {
                    printf("\n\nNAO TEMOS REGISTROS\n\n\n");
                }
                else
                {
                    while(aux != NULL)
                    {
                        dados_ponteiros(topo, aux);

                        printf("\n\nITEM [ %d ] --> RA: %d\n\n", conta_num_itens, aux->RA);

                        conta_num_itens++;
                        aux = aux->prox;
                    }
                }

                aux = topo;
            break;

            case 3:
                printf("\n\n\n=*=*=*=*=*=*=*=*=*=*=*=*==*==*=\n\nO user escolheu a opcao EXLCUIR ULTIMO!\n\n=*=*=*=*=*=*=*=*=*=*=*=*==*==*=\n\n\n");

                if(topo == NULL)
                {
                    printf("\n\nNAO TEMOS REGISTROS\n\n\n");
                }
                else
                {
                    dados_ponteiros(topo, aux);

                    topo = aux->prox;

                    dados_ponteiros(topo, aux);

                    free(aux);

                    dados_ponteiros(topo, aux);

                    aux = topo;

                    dados_ponteiros(topo, aux);
                }
            break;

            case 4:
                printf("\n\n\n=*=*=*=*=*=*=*=*=*=*=*=*==*==*=\n\nO user escolheu a opcao EXLCUIR TUDO!\n\n=*=*=*=*=*=*=*=*=*=*=*=*==*==*=\n\n\n");

                if(topo == NULL)
                {
                    printf("\n\nNAO TEMOS REGISTROS\n\n\n");
                }
                else
                {
                    while(aux != NULL)
                    {
                        topo = aux->prox;

                        free(aux);

                        aux = topo;
                    }
                }
            break;

            case 5:
                printf("\n\nSAINDO DO PROGRAMA!\n\n");
            break;
        }
    } while (op != 5);

    printf("\n\n");
    getchar();
    return 0;
}

void dados_ponteiros(Aluno *topo, Aluno *aux)
{
    printf("\n\n############# DADOS DOS PONTEIROS #############\n");

    printf("\nPonteiro &topo (endereco onde esta localizado): %x", &topo);
    printf("\nPonteiro topo (endereco para onde esta apontando): %x", topo);

    printf("\n\nPonteiro &aux (endereco do ponteiro): %x", &aux);
    printf("\nPonteiro aux (endereco para onde esta apontando): %x", aux);

    printf("\n\nPronteiro &prox (endereco do ponteiro): %x", &aux->prox);
    printf("\nPronteiro prox (endereco para onde esta apontando): %x", aux->prox);

    printf("\n\n###############################################\n");
}

