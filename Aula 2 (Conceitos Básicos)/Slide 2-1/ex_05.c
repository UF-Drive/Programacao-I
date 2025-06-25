/*Construa um algoritmo que calcule a média aritmética entre duas notas bimestrais quaisquer fornecidas por um aluno (usuário).*/

# include <stdio.h>

int main (void)
{
    float nota1, nota2, media;

    printf("\nVamos calcular a média das suas provas!!");
    printf("\nDigite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2 ;

    printf("\nA média das suas notas é %.2f\n\n", media);

    return 0;
}