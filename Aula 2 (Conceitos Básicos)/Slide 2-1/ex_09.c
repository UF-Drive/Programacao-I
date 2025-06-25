/*Ler dois valores para as variáveis A e B, efetuar a troca de valores de forma que a variável A passe a possuir o valor da variável B e que a variável B passe a possuir o valor da variável A. Apresentar os valores trocados.*/

# include <stdio.h>

int main (void)
{
    float a, b, c;

    printf("\nDigite um valor para A: ");
    scanf("%f", &a);
    printf("Digite um valor para B: ");
    scanf("%f", &b);

    c = a;
    a = b;
    b = c;

    printf("\nA = %.2f \nB = %.2f\n\n", a, b);

    return 0;
}