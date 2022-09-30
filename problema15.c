/* Construa um programa que receba um número inteiro maior que um e verifique se ele é primo. */
#include <stdio.h>

int main(void)
{
    int n, i;
    int div = 0;
    
    printf("Digite um numero inteiro maior que um: ");
    scanf("%d", &n);

    if (n>1)
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                div ++;
            }
        }
        if (div == 2)
        {
            printf("O numero e primo");
        }
        else
        {
            printf("O numero nao e primo");
        }
    }
    else
    {
        printf("Numero digitado nao e um inteiro maior que um");
    }
}