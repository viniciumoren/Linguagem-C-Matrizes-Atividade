#include <stdio.h>

int main (){

    int i;
    int maior_nota, menor_nota;
    int nota[5];

    menor_nota = 99999;

    for (i=0; i<5; i++) {

        printf ("Digite o numero %d :", i+1);
        scanf ("%d", &nota[i]);

    if (nota[i] > maior_nota)
    {
        maior_nota = nota[i];
    }

    if (nota[i] < menor_nota)
    {
        menor_nota = nota[i];
    }   
    }

    for (i=0; i<5; i++){
        printf ("Nota %d : %d\n", i+1, nota[i]);
    }
    printf ("Maior numero: %d\n", maior_nota);
    printf ("Menor numero: %d\n", menor_nota);

}