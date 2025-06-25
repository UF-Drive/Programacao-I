/*Entre com um valor e diga a qual mês do ano o mesmo corresponde.
Se o valor for maior que doze ou menor que um, diga que o valor não
corresponde a nenhum mês.*/

# include <stdio.h>

int main ()
{
    int mes;

    printf("Insira um numero entre 1 e 12: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        printf("O mes eh Janeiro.");
        break;
    case 2:
        printf("O mes eh Fevereiro.");
        break;
    case 3:
        printf("O mes eh Marco.");
        break;
    case 4:
        printf("O mes eh Abril.");
        break;
    case 5:
        printf("O mes eh Maio.");
        break;
    case 6:
        printf("O mes eh Junho.");
        break;
    case 7:
        printf("O mes eh Julho.");
        break;
    case 8:
        printf("O mes eh Agosto.");
        break;
    case 9:
        printf("O mes eh Setembro.");
        break;
    case 10:
        printf("O mes eh Outubro.");
        break;
    case 11:
        printf("O mes eh Novembro.");
        break;
    case 12:
        printf("O mes eh Dezembro.");
        break;
    
    default:
        printf("O numero inserido nao representa nenhum mes.");
        break;
    }
    return 0;
}