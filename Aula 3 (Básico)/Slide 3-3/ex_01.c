/*Escreva um algoritmo que calcule o faturamento de um representante
comercial que recebe R$ 500,00 fixos e 6% de comissão sobre as vendas
do mês.
Considere que ele fechou o mês com um valor de R$ 12.398,00 em
vendas. Exiba o resultado.*/

# include <stdio.h>

int main (void)
{
    float faturamento, comissao, fixo, perc, vendas;

    faturamento = 0;
    comissao = 0;
    perc = 0.06;
    fixo = 500;
    vendas = 12398;

    comissao = vendas * perc;
    faturamento = comissao + fixo;

    printf("\nO faturamento foi de R$%.2f\n\n", faturamento);

    return 0;
}