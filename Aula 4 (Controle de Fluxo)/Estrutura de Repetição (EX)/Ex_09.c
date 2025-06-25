/*Uma empresa decide presentear seus funcionários com um bônus de
Natal, cujo valor é definido pelos critérios a seguir. Elabore um algoritmo
para calcular o valor do bônus concedido a cada um dos 50 funcionários
e o impacto de tal atitude no orçamento da empresa.

• Os funcionários do sexo masculino com tempo de casa superior a 15
anos terão direito a um bônus de 20% do seu salário;

• As funcionárias com tempo de casa superior a 10 anos terão direito a
um bônus de 25% do seu salário;

• Os demais funcionários terão direito a um bônus de R$ 5.000,00.

    -> Homens com tempo de casa inferior a 15 anos; mulheres com tempo de casa inferior a 10 anos

*/

# include <stdio.h>

int main (void)
{
    int funcionarios, tempo;
    float salario, taxa_fixa, taxa_homem, taxa_mulher, bonus, impacto;
    char genero;

    funcionarios = 50;
    tempo = 0;
    salario = 0;
    taxa_fixa = 5000;
    taxa_homem = 1.20;
    taxa_mulher = 1.25;
    impacto = 0;
    bonus = 0;
    genero = "";

    printf("\n ~~BONUS DE NATAL DOS FUNCIONÁRIOS~~ \n");

    for (int i = 1; i <= funcionarios; i++)
    {
        printf("\n->Funcionário (%d)<-\n\n", i);

        // GENERO
        printf("- Informe o gênero [m/f]: ");
        scanf("\n%c", &genero);
        while ((genero != 'm') && (genero != 'M') && (genero != 'f') && (genero != 'F'))
        {
            printf("\nCaractere de gênero não identificado\nInforme o gênero [m/f]: ");
            scanf("\n%c", &genero);
        }

        // TEMPO DE CASA
        printf("\n- Informe o tempo de casa, em anos: ");
        scanf("\n%d", &tempo);
        while (tempo < 0)
        {
            printf("\nTempo não pode ser negativo!!\nInforme o tempo, em anos: ");
            scanf("\n%d", &tempo);
        }

        // SALARIO
        printf("\n- Qual o seu salário? R$");
        scanf("\n%f", &salario);
        while (salario < 0)
        {
            printf("\nSalario não pode ser negativo!!\nInforme o salário: R$");
            scanf("\n%f", &salario);
        }


        // DEFININDO O BONUS
// homem e tempo > 15
        if (((genero == 'm') || (genero == 'M')) && tempo > 15)
        {
            bonus = salario * taxa_homem;
            impacto = impacto + bonus - salario;
            printf("\nParabéns!! Você ganhou um bônus de R$%.2f\nLogo, seu salário este mês é R$%.2f\n\n", bonus - salario, bonus);
        }
// homem e tempo > 10
        else if (((genero == 'f') || (genero == 'F')) && tempo > 10)
        {
            bonus = salario * taxa_mulher;
            impacto = impacto + bonus - salario;
            printf("\nParabéns!! Você ganhou um bônus de R$%.2f\nLogo, seu salário este mês é R$%.2f\n\n", bonus - salario, bonus);
        }
// resto
        else
        {
            bonus = taxa_fixa;
            impacto = impacto + bonus;
            printf("\nParabéns!! Você ganhou um bônus de R$%.2f\nLogo, seu salário este mês é R$%.2f\n\n", bonus, bonus + salario);
        }
        

        printf("O impacto gerado na empresa até o momento foi de R$%.2f.\n", impacto);
        printf("\n-----------//-----------\n");
    }

    printf("\nO impacto gerado na empresa devido aos bônus foi de R$%.2f.\n\n", impacto);

    return 0;
}