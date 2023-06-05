#include <stdio.h>

int main (){


    int i, par, impar;
    int numero[6];

    for ( i = 0; i < 6; i++)
    {
        printf ("Digite um número:");
        scanf ("%d", &numero[i]);

    if (numero[i]%2==0)
    {
        par++;
    }
    else 
    {
        impar++;
    }
    }

    for (i = 0; i < 6; i++) 
    {
        
        printf ("Nota %d ª: %d \n", i+1 , numero[i]);

    }

   printf ("Quantidade de numeros pares: %d \n", par-1);
   printf ("Quantidade de numeros impares: %d \n", impar); 
    
}