/*Faça um programa que leia os valores para largura, comprimento e
altura de um paralelepípedo retângulo e calcule o seu volume.*/

# include <stdio.h>

int main (void)
{
    // VARIAVEIS
    float largura, comprimento, altura, volume;
    largura = 0;
    comprimento = 0;
    altura = 0;
    volume = 0;

    // TITULO
    printf("\nVamos calcular o volume de um paralelepípedo!\n");
    printf("Certifique-se de usar as mesmas unidadese para as dimensões!!\n\n");

    // LEITURAS
    printf("Digite uma largura: ");
    scanf("%f", &largura);
    printf("Digite um comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite uma altura: ");
    scanf("%f", &altura);
    printf("\nAs dimensões digitadas foram:\n- Largura: %.2f\n- Comprimento: %.2f\n- Altura: %.2f\n", largura, comprimento, altura);

    // CONTA
    volume = largura * comprimento * altura;

    // SAIDA
    printf("O volume desse palalelepípedo é: %.2fu\n\n", volume);

    return 0;

}