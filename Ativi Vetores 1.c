#include <stdio.h>

int main (){

    float nota[3];
    int i;
    float media, soma;

    i = 0;

    for ( i = 0; i < 3; i++)
    {
       printf ("Digite sua nota:");
       scanf ("%f", &nota[i]);
    
    soma += nota[i];

    }

    media = soma / i;

    for ( i = 0; i < 3; i++)
    {
        printf("Nota %dª: %.2f\n", i, nota[i]);
    }
    
    printf("Media: %.2f\n", media);

}