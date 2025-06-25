/*Faça um algoritmo que leia os valores para largura, comprimento e altura de um paralelepípedo retângulo e calcule o seu volume.*/

# include <stdio.h>

int main (void)
{
    float comprimento, altura, largura, volume;

    printf("\nVamos calcular o volume de um paralelepípedo retângulo!\n");
    printf("Utilize a mesma unidade para as seguintes medidas: ");

    printf("\n\nInsira um valor para o comprimento: ");
    scanf("%f", &comprimento);
    printf("Insira um valor para a altura: ");
    scanf("%f", &altura);
    printf("Insira um valor para a largura: ");
    scanf("%f", &largura);

    volume = comprimento * altura * largura;

    printf("\nO volume do paralelepípedo em questão é %.2fu\n\n", volume);

    return 0;
}