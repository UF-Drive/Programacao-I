# include <stdio.h>

int main (void)
{
    float altura, comprimento, largura, volume;
    
    // DEFININDO AS DIMENSOES
    printf("\nVamos calcular o volume de um paralelepípedo retângulo!\n");
    printf("Lembre-se de utilizar a mesma medida para todas as dimensões.\n\n");
    printf("Digite um valor para altura: ");
    scanf("%f", &altura);
    printf("Digite um valor para o comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite um valor para a largura: ");
    scanf("%f", &largura);

    volume = altura * comprimento * largura;

    printf("\nO volume desse paralelepípedo é: %.2f\n\n", volume);

    return 0;
}