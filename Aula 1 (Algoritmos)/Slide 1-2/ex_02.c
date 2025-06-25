# include <stdio.h>

int main (void)
{
   int num;

   printf("Digite um número: ");
   scanf("%d", &num);

   if ((num % 2) == 0)
   {
    printf("O número é par.");
   }
   else{
    printf("O número é ímpar.");
   }

   return 0;
}