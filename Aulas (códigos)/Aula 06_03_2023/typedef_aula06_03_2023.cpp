#include <stdio.h>
#include <locale.h>

// Criando um tipo de dado (p) que é uma struct
typedef struct p {
    int codigo;
    char nome[30];
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    p pessoa[4];
    p pessoa2;

    printf("\n");
    return 0;
}
