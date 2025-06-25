/*Escreva um programa que pergunte a quantidade de km percorridos por um carro
alugado pelo usuário, assim como a quantidade de dias pelos quais o carro foi alugado.
Calcule o preço a pagar, sabendo que o carro custa R$ 60 por dia e R$ 0,15 por km
rodado.*/

# include <stdio.h>

int main (void)
{
    float percorrido, dias, taxa_dia, taxa_km, preco;
    percorrido = 0;
    dias = 0;
    taxa_dia = 60;
    taxa_km = 0.15;
    preco = 0;

    printf("\nVamos calcular o valor do carro alugado!\n");
    printf("Por quantos dia foi usado? ");
    scanf("%f", &dias);
    printf("Quantos km foi percorrido? ");
    scanf("%f", &percorrido);

    preco = taxa_dia * dias + taxa_km * percorrido;

    printf("\nO valor a ser pago por esse aluguel é R$%.2f\n\n", preco);

    return 0;
}