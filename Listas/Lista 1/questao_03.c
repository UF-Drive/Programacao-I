/*
    NOME: Fernanda Coutinho Corrêa Calazans
    TURMA: Engenharia Elétrica 2025/1 (06.1 N)
    DATA: 25/06/2025

    QUESTÃO 3:
    Código que implementa uma função para somar os algarismos de um
    número inteiro positivo fornecido pelo usuário.
*/

# include <stdio.h>

/*  DECLARAÇÃO DAS FUNÇÕES  */
int soma_algarismos(int numero);

/* FUNÇÃO PRINCIPAL (main)*/
int main (void)
{
    /* Declaração e inicialização de variáveis locais 
        - a inicialização das variáveis é importante para realizar a limpeza do lixo de memória
        - elas foram todas inicializadas em linhas separadas pois, embora iniciem no mesmo valor, caso seja 
        necessario inicializar uma delas com outro valor, é mais fácil encontrar quem devo trocar dessa forma 
        ao invés de algo como matricula = alunos = frequencia = 0.*/
    int num, soma;
    num = 0;
    soma = 0;

    /*TITULO*/
    printf("\n\n>> PROGRAMA DE SOMA DOS ALGARISMOS <<\n");
    printf("-------------------------------------");

    do
    {
        /*Entrada de Dados*/
        printf("\n\nDigite um número. Use 0 para sair: ");
        scanf("%d", &num);

        while (num < 0) // impede o usuário de digitar valores negativos
        {
            printf("\nPor favor, use apenas valores positivos! Digite um novo valor: ");
            scanf("%d", &num);
        }
        if (num == 0)
        {
            break; // encerra o ciclo se o usuário digitar 0
        }

        soma = soma_algarismos(num); // chamada da funcao
        printf("Soma dos algarismos: %d", soma);
    } while (1);

    printf("\n\n-------------------------\n\n"); // separador
    printf("Programa encerrado.\n\n");

    return 0;
}


int soma_algarismos(int numero)
{
    int soma = 0;

    while (numero > 0) {
        soma += numero % 10; // Pega o último algarismo e soma
        numero /= 10; // Remove o último algarismo para reiniciar o ciclo até que não sobre mais algarismos (ou seja, quando num = 0)     
    }

    return soma;
    
}