/*
Faça um algoritmo em C que leia dois números e escreva o maior. Se
forem iguais imprima uma mensagem.
*/

# include <stdio.h>

int main (void)
{
    float a, b;
    a = 0;
    b = 0;

    printf("\nDigite um valor para A: ");
    scanf("%f", &a);
    printf("Digite um valor para B: ");
    scanf("%f", &b);
    printf("A = %.2f    //    B = %.2f\n\n", a, b);

    if (a > b)
    {
        printf("A = %.2f é maior do que B = %.2f\n\n", a, b);
    }
    else if (a < b)
    {
        printf("B = %.2f é maior do que A = %.2f\n\n", b, a);
    }
    else
    {
        printf("Os valores são iguais\n\n");
    }

    return 0;
}