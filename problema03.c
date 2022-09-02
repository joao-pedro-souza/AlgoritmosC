/* Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e
apresente o valor do rendimento e o valor total (valor do depósito + valor do rendimento). */
#include <stdio.h>

int main(void)
{
    float dep, juros, rend, total;

    printf("Informe o valor do deposito: R$");
    scanf("%f", &dep);
    printf("Informe a taxa de juros: ");
    scanf("%f", &juros);
    
    rend = dep * (juros/100);
    total = dep + rend;
    
    printf("O rendimento e de R$%.2f.\n", rend);
    printf("O valor total e de R$%.2f.\n", total);
    return (0);
}