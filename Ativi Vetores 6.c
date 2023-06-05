#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "");

    int i;
    int numero [10];
    int soma, negativo;

    for ( i = 0; i < 10; i++)
    {
        printf ("Digite um número %d ª:", i+1);
        scanf ("%d", &numero[i]);

    if (numero[i] >= 0)
    {
        soma += numero[i];
    }
    else 
    { 
        negativo++; 
    }
}

    for ( i = 0; i < 10; i++)
    {
        printf ("Numero: %d: %d\n", i+1, numero[i]);
    }
        printf ("A soma: %d\n", soma);
        printf ("Negativos: %d\n", negativo);
    


}