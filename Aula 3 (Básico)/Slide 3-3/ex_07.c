/*Faça um programa que leia dois valores reais para as variáveis A e B e
efetue as operações de adição, subtração, multiplicação e divisão de A
por B, apresentando ao final os resultados obtidos.*/

# include <stdio.h>

int main (void)
{
    float a, b;
    a = 0;
    b = 0;

    printf("\nVamos realizar operações entre dois números!\n");
    printf("Digite um valor para A: ");
    scanf("%f", &a);
    printf("Digite um valor para B: ");
    scanf("%f", &b);
    while (b == 0)
    {
        printf("B não pode ser 0. Insira outro: ");
        scanf("%f", &b);
    }

    printf("\n- Soma: %.2f\n- Subtração: %.2f\n- Multiplicação: %.2f\n- Divisão: %.2f\\nn", a+b, a-b, a*b, a/b);
}