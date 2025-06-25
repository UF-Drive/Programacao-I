# include <stdio.h>

int main (void)
{
    float a, b ;

    printf("Insira um valor para A: ");
    scanf("%f", &a);
    printf("Insira um valor para B: ");
    scanf("%f", &b);

    while (b == 0)
    {
        printf("B não pode ser 0. Insira outro: ");
        scanf("%f", &b);
    }

    printf("A soma é: %.2f \n", a+b);
    printf("A subtração é %.2f \n", a-b);
    printf("A multiplicação é %.2f \n", a*b);
    printf("A divisão é %.2f \n", a/b);

    return 0;

}