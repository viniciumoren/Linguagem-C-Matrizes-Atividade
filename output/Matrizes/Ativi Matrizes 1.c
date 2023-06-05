#include <stdio.h>

int main (){

    int i,j;
    float notas [3];
    float media[2];
    float soma;
    char disciplinas [3][250];

    for ( i = 0; i < 3; i++)
    {
        printf ("Digite o nome da %dª disciplina:", i+1);
        gets(disciplinas);

        

        for ( j = 0; i < 3; i++)
        {
           printf ("Digite a nota %dª da unidade %dª", i+1,j+1);
           scanf("%f", notas[i][j]);

            soma += notas[i][j];

        

        }

        media[i]=soma/(j-1);

    

    }

        for ( i = 0; i < 3; i++)
        {
           printf ("%c :\n", disciplinas[i]);
        
        for ( j = 0; j < 3; i++)
        {
            printf ("Notas %dª:",j , nota[i][j]);
        }
        
        printf ("Media: %.2f", media);

        }
        
    

}