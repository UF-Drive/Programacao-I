/*Faça um algoritmo para calcular quantas ferraduras são necessárias para
equipar todos os cavalos comprados para um haras.*/

// um cavalo usa 4 ferraduras

# include <stdio.h>

int main (void)
{
    int cavalos, ferraduras;
    cavalos = 0;
    ferraduras = 0;

    printf("\nQuantos cavalos foram comprados para o haras? ");
    scanf("%d", &cavalos);

    ferraduras = cavalos * 4;

    printf("Deverá ser comprado %d ferraduras\n\n", ferraduras);

    return 0;
}