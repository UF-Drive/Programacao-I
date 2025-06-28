/*
    NOME: Fernanda Coutinho Corrêa Calazans
    TURMA: Engenharia Elétrica 2025/1 (06.1 N)
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


/* FUNÇÃO PRINCIPAL (main)*/
int main (void)
{
    /* Declaração e inicialização de variáveis locais 
        - a inicialização das variáveis é importante para realizar a limpeza do lixo de memória
        - elas foram todas inicializadas em linhas separadas pois, embora iniciem no mesmo valor, caso seja 
        necessario inicializar uma delas com outro valor, é mais fácil encontrar quem devo trocar dessa forma 
        ao invés de algo como matricula = alunos = frequencia = 0.*/
    int matricula, alunos, frequencia;
    float nota1, nota2, media, mturma, maior, menor;
    matricula = 0;
    alunos = 0;
    frequencia = 0;
    nota1 = 0;
    nota2 = 0;
    media = 0;
    mturma = 0;
    maior = 0;
    menor = 0;

    /* TITULO */
    printf("\n>>> Seja bem-vindo! <<<");
    printf("\nEste é um programa para analisar o desempenho de alunos.");
    printf("\n\n- Quantos alunos deseja cadastrar? ");
    scanf("%d", &alunos);
    while (alunos < 0) // impede o usuario de digitar alunos negativos
    {
        printf("\nUe, alunos negativos...? Por favor, digite uma quantidade valida de alunos."); 
        printf("\n- Quantos alunos deseja cadastrar? ");
        scanf("%d", &alunos);
    }

    for (int i = 1; i <= alunos; i++)
    {
        /*   ENTRADA DE DADOS    */
        printf("\n\n-------REGISTRO DO ALUNO [%d]-------\n", i); // cabeçalho de registro
            // matricula
        printf("Para a matrícula, use apenas uma sequência de numeros inteiros positivos.\n");
        printf("- Insira a matrícula: ");
        scanf("%d", &matricula);
        while (matricula < 0) // impede o usuario de inserir uma matrícula negativa
        {
            printf("\nUe, uma matrícula negativa...? Por favor, digite uma matricula valida.");
            printf("\n- Insira a matrícula: ");
            scanf("%d", &matricula);
        }
            // notas
        printf("Para as notas, utilize uma escala de 0 a 10.\n");
        printf("- Nota 1: ");
        scanf("%f", &nota1);
        while (nota1 < 0 || nota1 > 10) // impede o usuario de sair do intervalo determinado
        {
            printf("\nO valor inserido se encontra fora do intervalo de nota.");
            printf("\n- Por favor, insira a [Nota 1] em um intervalo de 0 a 10: ");
            scanf("%f", &nota1);
        }
        printf("- Nota 2: ");
        scanf("%f", &nota2);
        while (nota2 < 0 || nota2 > 10) // impede o usuario de sair do intervalo determinado
        {
            printf("\nO valor inserido se encontra fora do intervalo de nota.");
            printf("\n- Por favor, insira a [Nota 2] em um intervalo de 0 a 10: ");
            scanf("%f", &nota2);
        }
            // frequencia
        printf("- Digite a frequência (quantidade de aulas frequentadas): "); // impede o usuario de determinar faltas negativas
        scanf("%d", &frequencia);
        while (frequencia < 0)
        {
            printf("\nUe, aulas negativas...? Por favor, digite uma quantidade de aulas valida.");
            printf("\nQuantas vezes o aluno faltou? ");
            scanf("%d", &frequencia);
        }

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
        printf("\n------------------------------------\n"); // separador
    }

    if (alunos == 0)
    {
        printf("\nVocê digitou 0, portanto não analisaremos nenhum aluno.");
        printf("\nPrograma encerrado.\n\n");
    }
    else
    {
        /*  ANÁLISE FINAL   */
        printf("\nANÁLISE FINAL:");
        printf("\nMaior nota final da turma: %.2f\n", maior);
        printf("Menor nota final da turma: %.2f\n", menor);
        printf("Média da turma: %.2f\n\n", mturma);
    }
    return 0;
}



/*  FUNÇÕES  */
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

float nf_maior_menor(float media, int i, char retorno)
{
    static float maior, menor;
    if (i == 1)
    {
        /*Se eu estiver lendo meu primeiro aluno, a maior e a menor nota 
        serão a nota desse aluno*/
        maior = media;
        menor = media;
    }
    else
    {
        if (media >= maior)
        {
            /*Se a media que eu acabei de ler for maior do que a maior nota 
            que eu tinha, então a media atual é o meu novo maior*/
            maior = media;
        }
        else if (media <= menor)
        {
            /*Se a media que eu acabei de ler for menor do que a menor nota 
            que eu tinha, então a media atual é o meu novo menor*/
            menor = media;
        }
    }

    if (retorno == 'M')
    {
        /*Se eu digitar 'M' no meu terceiro parâmetro da função, 
        ele irá me retornar o maior valor que obtive*/
        return maior;
    }
    else if (retorno == 'm')
    {
        /*Se eu digitar 'm' no meu terceiro parâmetro da função, 
        ele irá me retornar o maior valor que obtive*/
        return menor;
    }
    else
    {
        /*Se eu digitar qualquer outra coisa, minha função vai dar erro*/
        return -1;
    }   
}