# include <stdio.h>

int main ()
{
    int a, b, c, x;

    printf("Insira tres valores.\n");
    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);
    printf("Valor de C: ");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        if (b < c)
        {
            printf("A ordem dos valores eh %d, %d e %d", a, b, c); // a b c
        }
        else
        {
            x = b;
            b = c;
            c = x;
            printf("A ordem dos valores eh %d, %d e %d", a, b, c); // a c b
        }  
    }
    else if (b < a && b < c)
    {
        if (a < c) // b a c
        {
            x = a;
            a = b;
            b = x;
            printf("A ordem dos valores eh %d, %d e %d", a, b, c);
        }
        else
        {
            x = a;
            a = b;
            b = c;
            c = x;
           printf("A ordem dos valores eh %d, %d e %d", a, b, c);
        }   
    }
    else if (c < a && c < b)
    {
        if (a < b)
        {
            x = a;
            a = c;
            c = b;
            b = x;
            printf("A ordem dos valores eh %d, %d e %d", a, b, c);
        }
        else
        {
            x = a;
            a = c;
            c = x;
            printf("A ordem dos valores eh %d, %d e %d", a, b, c);
        }
    }
    return 0;
}