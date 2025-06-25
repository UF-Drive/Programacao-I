/*Faça um algoritmo que leia dois valores reais para as variáveis A e B e efetue as operações de adição, subtração, multiplicação e divisão de A por B, apresentando ao final os resultados obtidos.*/

# include <stdio.h>

int main (void)
{
    float a, b ;

    printf("\nInsira um valor para A: ");
    scanf("%f", &a);
    printf("Insira um valor para B: ");
    scanf("%f", &b);

    while (b == 0)
    {
        printf("B não pode ser 0. Insira outro: ");
        scanf("%f", &b);
    }

    printf("\n- A soma é: %.2f \n", a+b);
    printf("- A subtração é: %.2f \n", a-b);
    printf("- A multiplicação é: %.2f \n", a*b);
    printf("- A divisão é: %.2f \n\n", a/b);

    return 0;
}