# include <stdio.h>
# include <math.h>

int main (void)
{
    float a, b ,c, d, e, p, x;

    printf("\nP(x) = Ax^4 + Bx^3 + Cx^2 + Dx + E\n\n");
    printf("Dê um valor para A: ");
    scanf("%f", &a);
    printf("Dê um valor para B: ");
    scanf("%f", &b);
    printf("Dê um valor para C: ");
    scanf("%f", &c);
    printf("Dê um valor para D: ");
    scanf("%f", &d);
    printf("Dê um valor para E: ");
    scanf("%f", &e);

    printf("\nP(x) = %.2fx^4 + %.2fx^3 + %.2fx^2 + %.2fx + %.2f\n\n", a, b, c, d, e);

    printf("Agora, dê um valor para x: ");
    scanf("%f", &x);

    p = a*pow(x, 4) + b*pow(x, 3) + c*pow(x, 2) + d*x + e;

    printf("O polinomio quando x = %.2f vale %.2f\n\n", x, p);

    return 0;
}