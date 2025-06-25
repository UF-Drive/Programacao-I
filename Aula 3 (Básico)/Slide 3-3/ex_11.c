/*Mostre o que será impresso pelos seguintes algoritmos; Faça primeiro no
caderno e depois no computador para conferir sua resposta.
a) Val1 = 40
Val2 = 60
Val3 = Val2 – Val1
Val3 = Val1 – Val2
print(Val3)

b) b = 28
a = (b*2)
c = a – b
print(a)
print(b)
print(“c”) */

# include <stdio.h>

int main (void)
{
    float val1, val2, val3, a, b, c;

    // Parte a
    printf("\nPARTE 1\n");
    val1 = 40;
    val2 = 60;
    val3 = val2 - val1;
    printf("%.2f\n", val3);
    val3 = val1 - val2;
    printf("%.2f\n", val3);

    // Parte b
    printf("\nPARTE 2\n");
    b = 28;
    a = (b*2);
    c = a - b;
    printf("%.2f\n", a);
    printf("%.2f\n", b);
    printf("c\n");
}