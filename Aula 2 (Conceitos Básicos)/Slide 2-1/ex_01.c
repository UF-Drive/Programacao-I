/*Escreva um programa que calcule o faturamento de um representante comercial que recebe R$ 500,00 fixos e 6% de comissão sobre as vendas do mês.
Considere que ele fechou o mês com um valor de R$ 12.398,00 em vendas. Exiba o resultado com duas casas decimais.*/


# include <stdio.h>

int main (void)
{
    float faturamento, vendas, comissao, fixo, percent;

    fixo = 500;
    percent = 0.06;
    vendas = 12398;

    comissao = vendas * percent;
    faturamento = fixo + comissao;

    printf("\nO valor de vendas foi de RS%.2f\n", vendas);
    printf("O valor da comissao foi de RS%.2f\n", comissao);
    printf("Portanto, o faturamento foi de RS%.2f\n\n", faturamento);

    return 0;
}