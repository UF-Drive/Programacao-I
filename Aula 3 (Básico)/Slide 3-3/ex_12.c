/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus
Fahrenheit. A fórmula de conversão é F = (9 * c)/5 + 32    */

# include <stdio.h>

int main (void)
{
    float f, c;
    f = 0;
    c = 0;

    printf("\nVamos fazer uma conversão de celcius para fahrenheit!!\n");
    printf("Digite quantos ºC: ");
    scanf("%f", &c);

    f = (9 * c)/5 + 32;

    printf("\nIsso equivale a %.2fºF\n", f);

    return 0;
}