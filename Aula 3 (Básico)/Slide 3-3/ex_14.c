/*Leia dois números inteiros e exiba o resto da divisão do primeiro pelo
segundo.*/

# include <stdio.h>

int main (void)
{
    int a, b;
    a = 0;
    b = 0;

    printf("\nDigite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);
    while (b == 0)
    {
        printf("B não pode ser 0. Insira outro: ");
        scanf("%d", &b);
    }
    
    printf("\nO resto da divisão de %d por %d é %d\n\n", a, b, a % b);

    return 0;
}