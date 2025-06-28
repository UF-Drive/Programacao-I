/*
    NOME: Fernanda Coutinho Corrêa Calazans
    TURMA: Engenharia Elétrica 2025/1 (06.1 N)
    DATA: 25/06/2025

    QUESTÃO 2:
    Programa para calcular a potência de múltiplos circuitos e exibir um
    relatório final com a potência total e a maior potência registrada.
*/


# include <stdio.h>

/* DECLARAÇÃO DE FUNÇÕES E VARIÁVEIS GLOBAIS */
static float calcularPotencia(float v, float i);
int total_circuitos;
total_circuitos = 0; // antes de começar, nenhum circuito foi analisado ainda, portanto o total de circuitos inicial é 0


/* FUNÇÃO PRINCIPAL (main)*/
int main (void)
{
    /* Declaração e inicialização de variáveis locais */
        // - a inicialização das variáveis é importante para realizar a limpeza do lixo de memória
        /* - elas foram todas inicializadas em linhas separadas pois, embora iniciem no mesmo valor, caso seja 
        necessario inicializar uma delas com outro valor, é mais fácil encontrar quem devo trocar dessa forma 
        ao invés de algo como matricula = alunos = frequencia = 0.*/
    float tensao, corrente, potencia;
    tensao = 0;
    corrente = 0;
    potencia = 0;

    int i;
    i = 1; // variavel de controle usada somente para fins estéticos e de organização no título de cada ciclo

    printf("\n>>> Seja bem-vindo! <<<");
    printf("\nEste é um programa para calcular a potência de circuitos. Atribua 0 à tensão para encerrar.\n");

    do {
        /*Titulo do Ciclo*/
        printf("\n------ CIRCUITO [%d] ------\n\n", i);

        /*Entrada de Dados*/
        printf("Digite a tensão (V): ");
        scanf("%f", &tensao);
        if (tensao == 0) // 
        {
            /* 
                Se tensão for 0, o ciclo encerra sem a entrada da corrente (já que não vamos calcular nenhum novo circuito, saber o valor da corrente seria desnecessário) 
            */
            printf("\nEncerrando análise...\n");
            break;
        }
        printf("Digite a corrente (A): ");
        scanf("%f", &corrente);

        /*Saida de Dados*/
        potencia = calcularPotencia(tensao, corrente);
        printf("\nPotencia do circuito: %.2f W\n\n", potencia);

        i += 1; // incremento da variavel de controle e organização
    } while (1); // o ciclo durará para sempre enquanto a condição que roda o break dentro do ciclo não for satisfeita

    if (total_circuitos == 0)
    {
        printf("\n-------------------------\n");
        printf("\nVocê digitou 0, portanto não analisaremos nenhum circuito.");
        printf("\n\nPrograma encerrado.\n\n");
    }
    else
    {
        /*Saida de Dados Final*/
            //Titulo
        printf("\n\n-------------------------\n\n");
        printf(">> >> ANÁLISE FINAL << <<\n");
            //Corpo da Saída de Dados
        printf("\nTotal de circuitos: %d", total_circuitos);
        printf("\nPotencia total dissipada: %.2f W", calcularPotencia(tensao, 1));
        printf("\nMaior potencia registrada: %.2f W\n\n", calcularPotencia(tensao, 2));
        printf("-------------------------\n\n");
        printf("Programa encerrado.\n\n");
    }
    return 0;
}



/* FUNCAO PARA CALCULAR A POTENCIA */
static float calcularPotencia(float v, float i)
{

    static float potencia_total, maior_potencia;
    float potencia_atual;

    /*
        Supondo que o usuário tenha digitado para encerrar o programa (ou seja, tenha atribuído o valor 0 para tensão), utilizei o parâmetro 'i' da corrente como o determinante de qual informação quero que a minha função retorne. Decidi arbitrariamente que para 'i == 1', minha função retornará a POTENCIA TOTAL, enquanto que para 'i == 2', minha função retornará a MAIOR POTENCIA. Assim,

        - calcularPotencia(tensao, 1) >> retorna o valor contido em potencia_total
        - calcularPotencia(tensao, 2) >> retorna o valor contido em maior_potencia        
    */

   /* CASO CICLO SEJA ENCERRADO */
    if (v == 0)
    {
        if (i == 1)
        {
            return potencia_total;
        }
        else if (i == 2)
        {
            return maior_potencia;
        }  
    }
    /* CASO CICLO CONTINUE */
    else
    {
        // Calculo da potencia
        potencia_atual = v * i;
        total_circuitos++; // incremento da varável global

        // Maior potencia
        if (total_circuitos == 1)
        {
            /*Se eu estiver lendo meu primeiro circuito, a maior potência 
            será a potência desse circuito*/
            maior_potencia = potencia_atual;
        }
        else
        {
            if (potencia_atual >= maior_potencia)
            {
                /*Se a potencia que eu acabei de ler for maior do que a maior potencia 
                que eu tinha, então a potencia atual é a minha nova maior potencia*/
                maior_potencia = potencia_atual;
            }
        }

        // Total de potencias        
        potencia_total += potencia_atual;

        // Atualiza o total de circuitos analisados e retorna a potencia
        return potencia_atual;
    }
}