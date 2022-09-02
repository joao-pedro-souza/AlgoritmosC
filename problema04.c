/* Escreva um programa que receba dois números, calcule e 
apresente o resultado do primeiro número elevado ao segundo */
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n1, n2, n3;

    printf("Escreva o numero base: ");
    scanf("%i", &n1);
    printf("Escreva o numero expoente: ");
    scanf("%i", &n2);
    
    n3 = pow(n1,n2);
    printf("A potencia e: %i", n3);
    return (0);
}