/*Faça um algoritmo que efetue a apresentação do valor da conversão em real
de um valor lido em dólar. O programa lerá o valor da cotação do dólar e a
quantidade de dólares com o usuário, para apresentar o valor em moeda
brasileira.*/

# include <stdio.h>

int main (void)
{
    float cotacao, dolares, reais;
    cotacao = 0;
    dolares = 0;
    reais = 0;

    printf("\nQual a cotação do dolar nesse momento? $");
    scanf("%f", &cotacao);
    printf("Quantos dolares você tem? $");
    scanf("%f", &dolares);

    reais = cotacao * dolares;

    printf("Isso equivale a R$%.2f\n\n", reais);

    return 0;
}