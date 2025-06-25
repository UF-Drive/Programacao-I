/*Faça um algoritmo em C que leia dois números e escreva o maior. Se
forem iguais imprima uma mensagem.*/

# include <stdio.h>

int main (void)
{
    float n1, n2;

    printf("Insira um numero: ");
    scanf("%f", &n1);
    printf("Insira outro numero: ");
    scanf("%f", &n2);

    if (n1 > n2){
        printf("%.2f eh maior do que %.2f", n1, n2);
    }
    else if (n2 > n1){
        printf("%.2f eh maior do que %.2f", n2, n1);
    }
    else{
        printf("Os valores sao iguais.");
    }

    return 0;
    
}