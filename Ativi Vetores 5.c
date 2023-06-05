#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int i;
    int idade[5];
    char nome[5][250];

    for (i = 0; i < 5; i++)
    {

        printf("Digite seu nome:\n");
        gets(nome[i]);

        printf("Digite sua idade:\n");
        scanf("%d", &idade[i]);

        fflush(stdin);

        system ("cls");
    }

    for (i = 0; i < 5; i++)
    {

        printf("Nome %dª : %s \n", i+1 , nome[i]);
        printf("idade %dª : %d \n \n", i+1 , idade[i]);

    }
}