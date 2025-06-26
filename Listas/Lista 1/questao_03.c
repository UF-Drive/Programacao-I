/*
NOME: Fernanda Coutinho Corrêa Calazans
TURMA: Engenharia Elétrica 2025/1
DATA: 25/06/2025

QUESTÃO 1:

*/

# include <stdio.h>

int soma_algarismos(int numero)
{
    int soma = 0;

    while (numero > 0) {
        soma += numero % 10; // Pega o último algarismo e soma
        numero /= 10; // Remove o último algarismo para reiniciar o ciclo      
    }

    return soma;
    
}

int main (void)
{
    int num, soma;

    printf("\n\n>> PROGRAMA DE SOMA DOS ALGARISMOS <<\n");
    printf("-------------------------------------");

    do
    {
        printf("\n\nDigite um número. Use 0 para sair: ");
        scanf("%d", &num);

        while (num < 0)
        {
            printf("\nPor favor, use apenas valores positivos! Digite um novo valor: ");
            scanf("%d", &num);
        }
        if (num == 0)
        {
            break;
        }

        soma = soma_algarismos(num);
        printf("Soma dos algarismos: %d", soma);
    } while (1);

    printf("\n\n-------------------------\n\n");
    printf("Programa encerrado.\n\n");

    return 0;
}