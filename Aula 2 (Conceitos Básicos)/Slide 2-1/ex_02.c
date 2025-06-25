/*Reescreva o programa acima alterando-o de modo que as vendas do mês sejam lidas do teclado.*/


# include <stdio.h>

int main (void)
{
    float faturamento, vendas, fixo, comissao, percent;

    printf("\nDigite o valor de vendas desse mês: R$");
    scanf("%f", &vendas);
    percent = 0.06;
    fixo = 500;

    comissao = vendas * percent;
    faturamento = fixo + comissao;

    printf("O faturamento desse mês foi de R$%.2f\n\n", faturamento);

    return 0;
}