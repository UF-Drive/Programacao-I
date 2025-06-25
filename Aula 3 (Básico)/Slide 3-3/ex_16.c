/*Escreva um programa que calcule o tempo de uma viagem de carro. Pergunte a
distância a percorrer e a velocidade média esperada para a viagem.*/

# include <stdio.h>

int main (void)
{
    float tempo, distancia, vmedia;
    tempo = 0;
    distancia = 0;
    vmedia = 0;

    printf("\nVamos calcular o tempo de uma viagem!\n");
    printf("Qual a distância que vai ser percorrida? (km): ");
    scanf("%f", &distancia);
    printf("Qual a velocidade media esperada para essa viagem? (km/h): ");
    scanf("%f", &vmedia);

    tempo = distancia / vmedia;

    printf("O tempo da viagem será de %.2fh\n\n", tempo);

    return 0;
}