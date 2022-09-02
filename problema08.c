/* Construa um programa que receba a idade de uma pessoa e identifique sua classe eleitoral: 
não eleitor (menor que 16 anos de idade), eleitor obrigatório (entre 18 e 65 anos) e
eleitor facultativo (entre 16 e 18 anos e maior que 65 anos). */
#include <stdio.h>

int main(void)
{
    int n;

    printf("Digite sua idade: ");
    scanf("%i", &n);

    if (n < 16)
        printf("Nao eleitor.");
    else
        if (n < 18 || n > 65)
            printf("Eleitor facultativo.");
        else
            printf("Eleitor obrigatorio");
    return (0);
}