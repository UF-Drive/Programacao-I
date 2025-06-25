/*Escreva a sequência de comandos necessária para o cálculo da área de
um triângulo de base 9 e altura 6.*/

# include <stdio.h>

int main (void)
{
    float base, altura, area;

    base = 9;
    altura = 6;
    area = 0;

    area = base * altura;

    printf("A area do triângulo é %.2f", area);

    return 0;
}