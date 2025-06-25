/*Escreva um programa para calcular a redução do tempo de vida de um fumante.
Pergunte a quantidade de cigarros fumados por dia e quantos anos ele já fumou.
Considere que um fumante perde 10 minutos de vida a cada cigarro, calcule quantos
dias de vida um fumante perderá. Exiba o total em dias.*/

# include <stdio.h>

int main (void)
{
    // VARIAVEIS
    float cpordia, anos, ctotal, reducao;
    cpordia = 0;
    anos = 0;
    ctotal = 0;
    reducao = 0;


    // INPUT
    printf("\n- REDUCAO DO TEMPO DE VIDA DE UM FUMANTE -\n");
    printf("Por quantos anos você fumou? ");
    scanf("%f", &anos);
    printf("Quantos cigarros por dia você fuma? ");
    scanf("%f", &cpordia);
    printf("Você fumou %.2f cigarros por dia por %.2f anos", cpordia, anos);

    // CONTAS
    ctotal = cpordia * 365 * anos;
    reducao = ctotal * 10; // quantos minutos perde
    reducao = reducao / 60 / 24; // quantos dias

    // OUTPUT
    printf("\n\nAté hoje, você fumou em média %.2f cigarros.\n", ctotal);
    printf("Isso te reduz %.2f dias de vida.\n\n", reducao);

    return 0;
}