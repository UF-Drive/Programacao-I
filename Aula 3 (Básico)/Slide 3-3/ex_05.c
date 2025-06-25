/*Escreva um programa que calcule a média aritmética entre quatro notas
bimestrais quaisquer fornecidas por um aluno (usuário).
Dados de entrada: quatro notas bimestrais
Dados de saída: média aritmética anual*/

# include <stdio.h>

int main (void)
{
    float nota, soma, media, qtd_avaliacao;
    nota = 0;
    soma = 0 ;
    media = 0;
    qtd_avaliacao = 4;

    printf("\nVamos calcular a média aritmética das suas 4 notas!!\n");

    for (int i = 1; i <= qtd_avaliacao; i++)
    {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }

    media = soma / qtd_avaliacao;
    printf("A média das notas é: %.2f\n", media);

    return 0;

}
