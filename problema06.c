/* Faça um programa que leia um número e informe se ele é divisível por cinco. */
#include <stdio.h>

int main(void)
{
    int n;

    printf("Digite um numero: ");
    scanf("%i", &n);

    if (n%5==0)
        printf("%i e divisivel por 5.", n);
    else   
        printf("%i nao e divisivel por 5.", n);
    return (0);
}