#include <stdio.h>

int main (){

    int i;
    float nota[4];
    float soma, media;

    for ( i = 0; i < 4; i++)
    {
        printf ("Digite sua nota:");
        scanf ("%f", &nota[i]);

        soma += nota[i];
        media = soma / (i+1);

    }

    for ( i = 0; i < 4; i++)
    {
        printf ("Nota %dª: %.2f\n", i , nota[i]);

    }

    printf ("Media: %.2f", media);

    if (media >= 7)
    {
        printf ("Aprovado");
    }
    else if ( media >= 5)
    {
        printf ("Recuperação");
    }
    else
    {
        printf ("Reprovado");
    }
    
    

}