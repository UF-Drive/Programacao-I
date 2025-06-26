/*
NOME: Fernanda Coutinho Corrêa Calazans
TURMA: Engenharia Elétrica 2025/1
DATA: 25/06/2025

QUESTÃO 1:
Programa para calcular e analisar as notas de N alunos, exibindo
a situação de cada um e estatísticas finais da turma.
*/

# include <stdio.h>

/*  DECLARAÇÃO DAS FUNÇÕES  */
float nf_aluno(float nota1, float nota2);
float md_turma(float media, int i);
float nf_maior_menor(float media, int i, char tipo);

int main (void)
{
    int matricula, alunos, frequencia;
    float nota1, nota2, media, mturma, maior, menor;

    printf("\nQuantos alunos deseja cadastrar? ");
    scanf("%d", &alunos);

    for (int i = 1; i <= alunos; i++)
    {
        /*   ENTRADA DE DADOS    */
        printf("\n-------REGISTRO DO ALUNO [%d]-------\n", i); // cabeçalho de registro
        printf("Insira a matrícula: ");
        scanf("%d", &matricula);
        printf("Nota 1: ");
        scanf("%f", &nota1);
        printf("Nota 2: ");
        scanf("%f", &nota2);
        printf("Digite a frequência (quantas faltas): ");
        scanf("%d", &frequencia);

        /*  CHAMADA DE FUNÇÃO   */
        media = nf_aluno(nota1, nota2);
        mturma = md_turma(media, i);
        maior = nf_maior_menor(media, i, 'M');
        menor = nf_maior_menor(media, i, 'm');

        /*  SAÍDA DE DADOS*/
        printf("\nDados do Aluno [%d]:\n", i);
        printf("- Matrícula: %d\n", matricula);
        printf("- Frequência: %d\n", frequencia);
        printf("- Nota final: %.2f\n", media);

        /*  VERIFICADOR DE SITUAÇÃO  */
        if (media >= 7) // Condição para aprovação
        {
            printf("- Situação: aprovado.\n");
        }
        else if (media >= 3) // Condição para recuperação
        {
            printf("- Situação: em recuperação.\n");
        }
        else // Condição para reprovação
        {
            printf("- Situação: reprovado.\n"); 
        }
        printf("------------------------------------\n"); // separador
    }

    /*  ANÁLISE FINAL   */
    printf("\nANÁLISE FINAL:");
    printf("\nMaior nota final da turma: %.2f\n", maior);
    printf("Menor nota final da turma: %.2f\n", menor);
    printf("Média da turma: %.2f\n\n", mturma);

    return 0;
}

/*  FUNÇÃO PARA A NOTA FINAL DO ALUNO  */
float nf_aluno(float nota1, float nota2) // cálculo da média individual
{
    float media;
    media = (nota1 + nota2)/2;

    return media;
}

float md_turma(float media, int i) // cálculo da média da turma
{
    float md_turma;
    static float soma = 0;
    /*neste caso o static float foi usado como alternativa para a preservação da variável SOMA
    para que assim ela pudesse ser reutilizada nos passos seguintes*/

    soma += media;
    md_turma = soma/i;

    return md_turma;
}

float nf_maior_menor(float media, int i, char tipo)
{
    static float maior, menor;
    if (i == 1)
    {
        maior = media;
        menor = media;
    }
    else
    {
        if (media >= maior)
        {
            maior = media;
        }
        else if (media <= menor)
        {
            menor = media;
        }
    }

    if (tipo == 'M')
    {
        return maior;
    }
    else if (tipo == 'm')
    {
        return menor;
    }
    else
    {
        return 0;
    }   
}