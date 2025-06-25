#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, x1, x2, d;
    // coeficiente A
    printf("Insira o coeficiente A: ");
    scanf("%f", &a);
    while (a==0)
    {
        printf("O coeficiente A não pode ser 0. Insira outro: ");
        scanf("%f", &a);
    }
    // coeficiente B
    printf("Insira o coeficiente B: ");
    scanf("%f", &b);
    // coeficiente C
    printf("Insira o coeficiente C: ");
    scanf("%f", &c);

    // funcao
    printf("\ny = %.2fx^2 + %.2fx + %.2f", a, b, c);
    d = pow(b, 2)-4*a*c; // delta
    printf("\nd = %.2f", d);
    

    // analise do delta e raizes
    if (d==0)
    {
        x1 = x2 = b/2*a;
        printf("\nAs raizes sao iguais e tem o valor %.2f", x1);
    }
    else
    {
        if (d > 0)
        {
            x1 = (-b+sqrt(d))/(2*a);
            x2 = (-b-sqrt(d))/(2*a);
            printf("\nO valores da raizes sao x1 = %.2f e x2 = %.2f", x1, x2);
        }
        else
        {
            printf("\nA funcao nao possui raizes reais.");
        }
    }
    return 0;  
}