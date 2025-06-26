/*
 * Descricao: Programa para ler numeros inteiros e somar seus algarismos.
 * Autor: Seu Nome Completo
 * Turma: Engenharia Eletrica - 2025/1
 * Data: 24/06/2025
 */

#include <stdio.h>
#include <stdlib.h> // Para a função abs()

// Protótipo da função
int soma_algarismos(int numero);

int main() {
    int numero;

    // Loop para ler os números
    while (1) {
        printf("Digite um numero inteiro positivo (0 para encerrar): ");
        scanf("%d", &numero);

        // Condição de parada do loop
        if (numero == 0) {
            printf("Encerrando o programa.\n");
            break;
        }

        // Garante que o número seja positivo para o cálculo
        if (numero < 0) {
            printf("Numero negativo inserido. Considerando seu valor absoluto.\n");
        }

        // Chama a função para somar os algarismos e exibe o resultado
        int soma = soma_algarismos(numero);
        printf("Soma dos algarismos: %d\n\n", soma);
    }

    return 0;
}

/**
 * @brief Calcula a soma dos algarismos de um número inteiro.
 * Funciona para números positivos e negativos (usando o valor absoluto).
 * @param numero O número inteiro a ser processado.
 * @return A soma dos seus algarismos.
 */
int soma_algarismos(int numero) {
    int soma = 0;
    int n = abs(numero); // Usa o valor absoluto para tratar números negativos

    // Loop para extrair e somar cada algarismo
    while (n > 0) {
        soma += n % 10; // Pega o último algarismo
        n /= 10;        // Remove o último algarismo
    }

    return soma;
}
