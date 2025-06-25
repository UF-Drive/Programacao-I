# include <stdio.h>

int main ()
{
    float a, b, c;

    // lados
    printf("\nInsira os lados de um triangulo");
    printf("\nLado A: ");
    scanf("%f", &a);
    printf("Lado B: ");
    scanf("%f", &b);
    printf("Lado C: ");
    scanf("%f", &c);

    printf("\nOs lados digitados foram: \n- A = %.2f \n- B = %.2f \n- C = %.2f", a, b, c);

    // condicoes
    if ((a+b) > c && (a+c) > b && (b+c) > a)
    {
        printf("\n\nEsse triangulo existe!\n\n");
    }
    else
    {
        printf("\n\nEsse valores nao formam um triangulo!\n\n");
    }

    return 0;

}