/*Calcular e exibir o tempo (em horas) de autonomia de uma caixa d’água de um restaurante que consome 1350 litros por hora em média. O tanque do restaurante é cilíndrico de base circular de raio (R) e de altura (H) em metros. Sabendo que 1m3 = 1000 litros.*/

# include <stdio.h>
# include <math.h>

int main (void)
{
    float raio, altura, volume, consumo, autonomia;

    consumo = 1350;

    printf("\nDigite o raio do tanque, em metros: ");
    scanf("%f", &raio);
    printf("Digite a altura do tanque, em metros: ");
    scanf("%f", &altura);

    volume = 3,14 * pow(raio, 2);
    autonomia = (volume*1000)/consumo;
    printf("O volume do tanque é: %.2fm3\nOu então: %.2fL", volume, volume * 1000);
    printf("\nDado o consumo de 1350L/h, essa caixa d'agua possui uma autonomia de %.2fh\n\n", autonomia);

    return 0;
}