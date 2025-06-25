/*Escreva um programa que leia dois inteiros para as variáveis A e B e crie
um algoritmo para trocar os valores dessas variáveis.*/

# include <stdio.h>

int main (void)
{
    // VARIAVEIS
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;

    // ENTRADA
    printf("\nDigite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);

    // TROCA
    c = a;
    a = b;
    b = c;

    // SAIDA
    printf("A = %d   e   B = %d\n\n", a, b);

    return 0;
}