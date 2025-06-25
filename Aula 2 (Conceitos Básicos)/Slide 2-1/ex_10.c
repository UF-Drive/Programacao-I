/*Calcular e exibir a distância entre dois pontos quaisquer do plano,*/

# include <stdio.h>
# include <math.h>

int main (void)
{
    float x1, x2, y1, y2, d;

    // PONTO P
    printf("\nVamos definir o ponto P");
    printf("\nDigite o valor de x: ");
    scanf("%f", &x1);
    printf("Digite o valor de y: ");
    scanf("%f", &y1);
    printf("\nP(%.2f, %.2f)", x1, y1);
    printf("\n____________________\n\n");

    
    // PONTO Q
    printf("\nVamos definir o ponto P");
    printf("\nDigite o valor de x: ");
    scanf("%f", &x2);
    printf("Digite o valor de y: ");
    scanf("%f", &y2);
    printf("\nP(%.2f, %.2f)", x2, y2);
    printf("\n____________________\n\n");

    d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("A distancia entre os dois pontos é: %.2f\n\n", d);

    return 0;
}