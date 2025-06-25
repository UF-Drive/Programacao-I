/*Leia um valor numérico inteiro e apresente o valor lido como sendo
um valor positivo, negativo ou igual a zero.*/

# include <stdio.h>

int main (void)
{
    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("O numero eh positivo.");
    }
    else if (num < 0)
    {
        printf("O numero eh negativo.");
    }
    else
    {
        printf("O numero eh zero.");
    }
    return 0;
    
}