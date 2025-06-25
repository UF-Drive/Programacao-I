/*Faça um algoritmo para ler três valores numéricos inteiros distintos e
determine o menor deles.*/

# include <stdio.h>

int main (void)
{
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;

    printf("\nDigite um valor A: ");
    scanf("%d", &a);
    printf("Digite um valor B: ");
    scanf("%d", &b);
    printf("Digite um valor C: ");
    scanf("%d", &c);

    if ((a < b && a < c))
    {
        printf("O menor valor é o A = %d", a);
    }
    else if ((b < a && b < c))
    {
        printf("O menor valor é o B = %d", b);

    }
    else{
        printf("O menor valor é o C = %d\n\n", c);
    }
    
    return 0;
}