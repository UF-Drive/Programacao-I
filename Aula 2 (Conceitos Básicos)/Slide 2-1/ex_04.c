/*Refaça o exercício 3 alterando-o de modo que a base e a altura do triângulo sejam lidas do teclado. Considere-as números reais*/

# include <stdio.h>

int main (void)
{
    float base, altura, area;
    
    printf("\nVamos calcular a área de um triângulo!!\n");
    printf("Utilize as mesmas unidades para cada uma das seguintes medidas:\n\n");

    printf("Digite um valor para a base: ");
    scanf("%f", &base);
    printf("Digite um valor para a altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2 ;

    printf("\nA área desse triângulo é de %.2fu\n\n", area);

    return 0;

}