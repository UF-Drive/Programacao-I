/*Escreva um programa para calcular o valor de y como função de x,
segundo a função y = 3x + 2, num domínio real [Saliba, 1992, p. 53]*/

# include <stdio.h>

int main (void)
{
    float y, x;
    y = 0;
    x = 0;

    printf("\nDada a fórmula: \ny = 3x + 2\n\n");
    printf("Digite um valor para x: ");
    scanf("%f", &x);

    y = 3 * x + 2;

    printf("\nO valor de y é %.2f\n\n", y);

    return 0;
}