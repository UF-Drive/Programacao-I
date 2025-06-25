/*Refaça o exercício 3 alterando-o de modo que a base e a altura do
triângulo sejam lidas do teclado. Considere-as números reais*/

# include <stdio.h>

int main (void)
{
    float base, altura, area;
    base = 0;
    altura = 0;
    area = 0;

    printf("\n\nVamos medir a área de um triângulo!\n");
    printf("Certifique-se de usar a mesma medida para todas as dimensões!!\n");
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("\nA área do triângulo é %.2f\n\n", area);
}