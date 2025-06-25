/*Construa um algoritmo que calcule a média aritmética entre duas notas
bimestrais quaisquer fornecidas por um usuário.

Imprima a situação do aluno, isto é, “Aluno aprovado” se a média for maior
ou igual a 7,0. Imprima “Aluno reprovado” caso contrário.*/

# include <stdio.h>

int main (void)
{
    float media, p1, p2;
    media = 0;
    p1 = 0;
    p2 = 0;

    printf("\nDigite a nota 1: ");
    scanf("%f", &p1);
    printf("Digite a nota 2: ");
    scanf("%f", &p2);

    media = (p1 + p2)/2;

    if (media >= 7)
    {
        printf("A média é %.2f\n", media);
        printf("Aluno aprovado!");
    }
    else
    {
        printf("A média é %.2f\n", media);
        printf("Aluno reprovado!\n\n");
    }

    return 0;

}