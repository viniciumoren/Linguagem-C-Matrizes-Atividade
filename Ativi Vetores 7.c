#include <stdio.h>

int main (){

    int i;
    int numero[5];

    for ( i = 0; i < 5; i++)
    {
        
       do {

        printf ("Digite um numero %d:", i+1);
        scanf ("%d", &numero[i]);

        system ("cls");

        }
        while (numero[i]%2==1);      
       
    }

    for (i = 5; i > 0; i--)
    {
        printf ("Numero %d: %d\n", i, numero[i]);
    }
      
    

}