/*Reescreva o programa acima alterando-o de modo que as vendas do
mês sejam lidas do teclado.*/

# include <stdio.h>

int main (void)
{
    float faturamento, vendas, perc, comissao, fixo;

    faturamento = 0;
    vendas = 0;
    comissao = 0;
    perc = 0.06;
    fixo = 500;

    printf("\n\nQual foi o valor das vendas? R$");
    scanf("%f", &vendas);

    comissao = vendas * perc;
    faturamento = fixo + comissao;

    printf("O faturamento foi de R$%.2f\n\n", faturamento);

    return 0;
}