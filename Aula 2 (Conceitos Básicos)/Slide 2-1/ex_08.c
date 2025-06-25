/*Escreva um algoritmo para calcular o valor de y como função de x, segundo a função y = 3x + 2, num domínio real [Saliba, 1992, p. 53]*/

# include <stdio.h>

int main (void)
{
    float x;
    printf("\nVamos resolver uma equação de primeiro grau:\n");
    printf("y = 3x + 2\n\n");

    printf("Digite um valor real para x: ");
    scanf("%f", &x);

    printf("\ny = 3*%.2f + 2\n", x);
    printf("\ny = %.2f + 2\n", x*3);
    printf("\ny = %.2f\n\n", x*3+2);

    return 0;
}