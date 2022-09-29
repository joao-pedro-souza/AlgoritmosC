/* Programa que lê um número inteiro e calcula o fatorial. */
#include <stdio.h>

int main(void)
{
    int n, i, fat;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    fat = 1;
    for (i = 1; i <= n; i++)
    {
        fat = fat * i;
    }
    printf("O fatorial e %d\n", fat);
    return (0);
}