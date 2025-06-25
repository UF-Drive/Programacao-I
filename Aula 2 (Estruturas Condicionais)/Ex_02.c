/*Escrever um algoritmo que determine se um número inteiro e positivo,
lido do usuário, é PAR ou ÍMPAR.*/

# include <stdio.h>

int main (void)
{
    int num, resto;

    printf("\nInsira um numero inteiro e positivo: ");
    scanf("%d", &num);

    while (num < 0){
        printf("O numero deve ser inteiro \n Digite outro: ");
        scanf("%d", &num);
    }

    resto = num % 2;

    if (resto == 0)
    {
        printf("O numero eh pa\n\nr");
    }
    else{
        printf("O numero eh impar.\n\n");
    }
    
    return 0;
}