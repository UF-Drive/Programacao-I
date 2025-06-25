/*Construa um algoritmo que calcule a média aritmética entre duas notas
bimestrais quaisquer fornecidas por um aluno (usuário). Imprima a situação 
do aluno, isto é, “Aluno aprovado” se a média for maior ou igual a 7,0. 
“Aluno em recuperação” se a média for menor que 7,0 e maior ou igual a 3,0. 
“Aluno reprovado” se a média for menor do que 3,0.*/

#include <stdio.h>

int main (void)
{
    float nota1, nota2, media;
    printf("\nInsira a nota 1: ");
    scanf("%f", &nota1);
    printf("Insira a nota 2: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2)/2;
    printf("\nAs notas digitadas foram %.2f e %.2f.", nota1, nota2);
    printf("\nA media das notas eh %.2f", media);

    if (media >= 7)
    {
        printf("\n\n- Aluno aprovado!");
    }
    else
    {
        if (media >= 3)
        {
            printf("\n\n- Aluno em recuperacao!");
        }
        else
        {
            printf("\n\n- Aluno reprovado!");
        }
    }
    return 0;
}