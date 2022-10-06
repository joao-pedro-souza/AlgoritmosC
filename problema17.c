/* Escreva um programa que receba a idade e a altura de várias pessoas, calcule e apresente a média de altura e idade das pessoas. A entrada de dados é encerrada quando for digitado o valor zero para a idade. */
#include <stdio.h>

int main(void)
{
    int c;
    float idade, soma_idade, media_idade, altura, soma_altura, media_altura;

    c = 0;
    printf("Digite a idade: ");
    scanf("%f", &idade);

    while (idade != 0)
    {
        c++;
        soma_idade += idade;
        printf("Digite a altura: ");
        scanf("%f", &altura);
        soma_altura += altura;
        printf("Digite a idade: ");
        scanf("%f", &idade);
    }
    media_idade = soma_idade / c;
    media_altura = soma_altura / c;

    printf("Idade: %.f\n", media_idade);
    printf("Altura: %.2f\n", media_altura);
    return (0);
}